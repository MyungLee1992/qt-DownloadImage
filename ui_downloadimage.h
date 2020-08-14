/********************************************************************************
** Form generated from reading UI file 'downloadimage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADIMAGE_H
#define UI_DOWNLOADIMAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadImageClass
{
public:
    QAction *actionFetch;
    QAction *actionExit;
    QAction *actionToolbar;
    QAction *fetchAction;
    QAction *exitAction;
    QAction *actionExit_2;
    QAction *fetchAction_2;
    QAction *exitAction_2;
    QWidget *centralWidget;
    QGridLayout *gridLayout_3;
    QTextEdit *fetchInput;
    QPushButton *fetchButton;
    QLabel *errorMessage;
    QLabel *image;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuMenu;

    void setupUi(QMainWindow *DownloadImageClass)
    {
        if (DownloadImageClass->objectName().isEmpty())
            DownloadImageClass->setObjectName(QString::fromUtf8("DownloadImageClass"));
        DownloadImageClass->resize(662, 582);
        DownloadImageClass->setMinimumSize(QSize(0, 0));
        DownloadImageClass->setAutoFillBackground(false);
        actionFetch = new QAction(DownloadImageClass);
        actionFetch->setObjectName(QString::fromUtf8("actionFetch"));
        actionFetch->setEnabled(true);
        actionExit = new QAction(DownloadImageClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionToolbar = new QAction(DownloadImageClass);
        actionToolbar->setObjectName(QString::fromUtf8("actionToolbar"));
        fetchAction = new QAction(DownloadImageClass);
        fetchAction->setObjectName(QString::fromUtf8("fetchAction"));
        exitAction = new QAction(DownloadImageClass);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        actionExit_2 = new QAction(DownloadImageClass);
        actionExit_2->setObjectName(QString::fromUtf8("actionExit_2"));
        fetchAction_2 = new QAction(DownloadImageClass);
        fetchAction_2->setObjectName(QString::fromUtf8("fetchAction_2"));
        exitAction_2 = new QAction(DownloadImageClass);
        exitAction_2->setObjectName(QString::fromUtf8("exitAction_2"));
        centralWidget = new QWidget(DownloadImageClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_3 = new QGridLayout(centralWidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        fetchInput = new QTextEdit(centralWidget);
        fetchInput->setObjectName(QString::fromUtf8("fetchInput"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(fetchInput->sizePolicy().hasHeightForWidth());
        fetchInput->setSizePolicy(sizePolicy);
        fetchInput->setMinimumSize(QSize(0, 80));
        fetchInput->setMaximumSize(QSize(16777215, 80));

        gridLayout_3->addWidget(fetchInput, 0, 0, 1, 1);

        fetchButton = new QPushButton(centralWidget);
        fetchButton->setObjectName(QString::fromUtf8("fetchButton"));
        sizePolicy.setHeightForWidth(fetchButton->sizePolicy().hasHeightForWidth());
        fetchButton->setSizePolicy(sizePolicy);
        fetchButton->setMinimumSize(QSize(0, 80));
        fetchButton->setMaximumSize(QSize(16777215, 80));
        QFont font;
        font.setPointSize(16);
        fetchButton->setFont(font);
        fetchButton->setIconSize(QSize(16, 16));

        gridLayout_3->addWidget(fetchButton, 0, 1, 1, 1);

        errorMessage = new QLabel(centralWidget);
        errorMessage->setObjectName(QString::fromUtf8("errorMessage"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(errorMessage->sizePolicy().hasHeightForWidth());
        errorMessage->setSizePolicy(sizePolicy1);
        errorMessage->setMinimumSize(QSize(0, 0));
        errorMessage->setMaximumSize(QSize(16777215, 30));
        QPalette palette;
        QBrush brush(QColor(255, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        QBrush brush1(QColor(255, 0, 0, 128));
        brush1.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        QBrush brush2(QColor(0, 0, 0, 128));
        brush2.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        errorMessage->setPalette(palette);
        QFont font1;
        font1.setPointSize(10);
        errorMessage->setFont(font1);
        errorMessage->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0)"));
        errorMessage->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(errorMessage, 1, 0, 1, 2);

        image = new QLabel(centralWidget);
        image->setObjectName(QString::fromUtf8("image"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(image->sizePolicy().hasHeightForWidth());
        image->setSizePolicy(sizePolicy2);
        image->setMinimumSize(QSize(0, 0));
        image->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette1;
        QBrush brush3(QColor(0, 0, 0, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush3);
        QBrush brush4(QColor(241, 0, 0, 128));
        brush4.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush4);
#endif
        QBrush brush5(QColor(120, 120, 120, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush2);
#endif
        image->setPalette(palette1);
        image->setMouseTracking(false);
        image->setAutoFillBackground(false);
        image->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout_3->addWidget(image, 2, 0, 1, 2);

        gridLayout_3->setColumnStretch(0, 9);
        gridLayout_3->setColumnStretch(1, 1);
        DownloadImageClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DownloadImageClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        statusBar->setMaximumSize(QSize(16777215, 16777215));
        DownloadImageClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(DownloadImageClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 662, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        DownloadImageClass->setMenuBar(menuBar);

        menuBar->addAction(menuMenu->menuAction());
        menuMenu->addAction(fetchAction_2);
        menuMenu->addAction(exitAction_2);

        retranslateUi(DownloadImageClass);

        QMetaObject::connectSlotsByName(DownloadImageClass);
    } // setupUi

    void retranslateUi(QMainWindow *DownloadImageClass)
    {
        DownloadImageClass->setWindowTitle(QCoreApplication::translate("DownloadImageClass", "DownloadImage", nullptr));
#if QT_CONFIG(statustip)
        DownloadImageClass->setStatusTip(QString());
#endif // QT_CONFIG(statustip)
        actionFetch->setText(QCoreApplication::translate("DownloadImageClass", "Fetch", nullptr));
#if QT_CONFIG(shortcut)
        actionFetch->setShortcut(QCoreApplication::translate("DownloadImageClass", "Ctrl+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit->setText(QCoreApplication::translate("DownloadImageClass", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("DownloadImageClass", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionToolbar->setText(QCoreApplication::translate("DownloadImageClass", "Toolbar", nullptr));
        fetchAction->setText(QCoreApplication::translate("DownloadImageClass", "Fetch", nullptr));
#if QT_CONFIG(shortcut)
        fetchAction->setShortcut(QCoreApplication::translate("DownloadImageClass", "Ctrl+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        exitAction->setText(QCoreApplication::translate("DownloadImageClass", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        exitAction->setShortcut(QCoreApplication::translate("DownloadImageClass", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionExit_2->setText(QCoreApplication::translate("DownloadImageClass", "Exit", nullptr));
        fetchAction_2->setText(QCoreApplication::translate("DownloadImageClass", "Fetch", nullptr));
#if QT_CONFIG(shortcut)
        fetchAction_2->setShortcut(QCoreApplication::translate("DownloadImageClass", "Ctrl+Return", nullptr));
#endif // QT_CONFIG(shortcut)
        exitAction_2->setText(QCoreApplication::translate("DownloadImageClass", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        exitAction_2->setShortcut(QCoreApplication::translate("DownloadImageClass", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        fetchInput->setHtml(QCoreApplication::translate("DownloadImageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        fetchButton->setText(QCoreApplication::translate("DownloadImageClass", "Fetch", nullptr));
        errorMessage->setText(QCoreApplication::translate("DownloadImageClass", "<html><head/><body><p><br/></p></body></html>", nullptr));
        image->setText(QString());
        menuMenu->setTitle(QCoreApplication::translate("DownloadImageClass", "Menu", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DownloadImageClass: public Ui_DownloadImageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADIMAGE_H
