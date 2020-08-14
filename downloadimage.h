#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DownloadImage.h"
#include <qdebug.h>
#include <QPixmap>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QFile>
#include <QApplication>
#include <QDesktopWidget>

class DownloadImage : public QMainWindow
{
    Q_OBJECT

public:
    DownloadImage(QWidget *parent = Q_NULLPTR);
    bool eventFilter(QObject* watched, QEvent* event); // Handles resize event. 

private:
    Ui::DownloadImageClass ui; // UI object
    QNetworkAccessManager* manager; // Allows to download image from online
    QSize imgSize; // Original image size once fetched
    QByteArray content; // Content of image
    int remainHeight = 0; // Height other than image label 

private slots:
    void fetch();
    void exit();
    void fileDownloaded(QNetworkReply* reply);
};
