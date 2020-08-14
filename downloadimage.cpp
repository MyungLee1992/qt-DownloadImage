#include "DownloadImage.h"

DownloadImage::DownloadImage(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    // Event filter to handle resize event
    this->installEventFilter(this);

    // Event handler when menu items or button are clicked
    connect(ui.exitAction_2, SIGNAL(triggered()), this, SLOT(exit()));
    connect(ui.fetchAction_2, SIGNAL(triggered()), this, SLOT(fetch()));
    connect(ui.fetchButton, SIGNAL(clicked()), this, SLOT(fetch()));

    // Placeholder for input text
    ui.fetchInput->setPlaceholderText("Please enter the image URL here");

    // Initialization
    manager = new QNetworkAccessManager(this);
}

// Exit the window
void DownloadImage::exit() {
    QCoreApplication::exit();
}

// Get url from input field and download the image
void DownloadImage::fetch() {
    QUrl url; // url from input field

    // Connect to the given URL from input field
    url = QUrl(ui.fetchInput->toPlainText());
    manager->get(QNetworkRequest(url));

    // Handle the fetched image
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(fileDownloaded(QNetworkReply*)));
}

// Validate and display the image
void DownloadImage::fileDownloaded(QNetworkReply* reply) {
    QPixmap img; // image
    QString contentType; // MIME type
    
    // Get MIME type
    contentType = reply->header(QNetworkRequest::ContentTypeHeader).toString();
    
    // If MIME type is image, then show the image file
    if (contentType.contains(QRegExp("image/(png|jpeg|gif)"))) {
        img.loadFromData(reply->readAll()); // Load image
        ui.image->setScaledContents(true); // Allows to scale the contents
        ui.image->resize(img.size()); // Resize the image label
        ui.errorMessage->setText(""); // Reset the error message
        
        remainHeight = ui.fetchInput->height() + ui.menuBar->height() + ui.errorMessage->height(); 
        resize(img.width(), img.height() + remainHeight); // Change window size to fit the image

        imgSize = img.size();

    }
    // Show error message for invalid request 
    else {
        img.loadFromData(NULL);
        ui.errorMessage->setText("Please enter the valid url to load the image");
    }

    reply->deleteLater();
    
    ui.image->setPixmap(img);
}

// Scale the image when main window is scaled
bool DownloadImage::eventFilter(QObject* watched, QEvent* event) {
    QSize size; // Size for image label
    int width, height; // Main window width and height
    int imgWidth, imgHeight; // Image label width and height
    float imgRatio; // Ratio of image label
    float mainRatio; // Ratio of main window

    remainHeight = ui.fetchInput->height() + ui.errorMessage->height() + ui.menuBar->height();
    width = this->width();
    height = this->height() - remainHeight;

    // Resize the image only when window is scaled and image is loaded
    if (watched == this && event->type() == QEvent::Resize && width > 0 && height > 0 && ui.image->pixmap() != NULL) {
        imgWidth = imgSize.width();
        imgHeight = imgSize.height();
        imgRatio = 1.0 *  imgWidth / imgHeight;
        mainRatio = 1.0 * width / height;

        // Change width
        if (mainRatio > imgRatio) {
            size = QSize(imgRatio * height, height);
        }
        // Change height
        else {  
            size = QSize(width, width / imgRatio);
        }
        ui.image->resize(size);
    }

    return QMainWindow::eventFilter(watched, event);
}


