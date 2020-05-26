/********************************************************************************
** Form generated from reading UI file 'SimplePlayer.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIMPLEPLAYER_H
#define UI_SIMPLEPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <VLCQtWidgets/WidgetSeek.h>
#include <VLCQtWidgets/WidgetVideo.h>
#include <VLCQtWidgets/WidgetVolumeSlider.h>

QT_BEGIN_NAMESPACE

class Ui_SimplePlayer
{
public:
    QAction *actionQuit;
    QAction *actionPause;
    QAction *actionStop;
    QAction *actionOpenLocal;
    QAction *actionOpenUrl;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QPushButton *openLocal;
    QPushButton *openUrl;
    VlcWidgetVideo *video;
    QPushButton *stop;
    QPushButton *pause;
    VlcWidgetVolumeSlider *volume;
    VlcWidgetSeek *seek;
    QPushButton *equalizer;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuMedia;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SimplePlayer)
    {
        if (SimplePlayer->objectName().isEmpty())
            SimplePlayer->setObjectName(QString::fromUtf8("SimplePlayer"));
        SimplePlayer->resize(640, 480);
        actionQuit = new QAction(SimplePlayer);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionPause = new QAction(SimplePlayer);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionPause->setCheckable(true);
        actionStop = new QAction(SimplePlayer);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionOpenLocal = new QAction(SimplePlayer);
        actionOpenLocal->setObjectName(QString::fromUtf8("actionOpenLocal"));
        actionOpenUrl = new QAction(SimplePlayer);
        actionOpenUrl->setObjectName(QString::fromUtf8("actionOpenUrl"));
        centralwidget = new QWidget(SimplePlayer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        openLocal = new QPushButton(centralwidget);
        openLocal->setObjectName(QString::fromUtf8("openLocal"));

        gridLayout_2->addWidget(openLocal, 0, 0, 1, 1);

        openUrl = new QPushButton(centralwidget);
        openUrl->setObjectName(QString::fromUtf8("openUrl"));

        gridLayout_2->addWidget(openUrl, 0, 1, 1, 1);

        video = new VlcWidgetVideo(centralwidget);
        video->setObjectName(QString::fromUtf8("video"));

        gridLayout_2->addWidget(video, 1, 0, 1, 2);

        stop = new QPushButton(centralwidget);
        stop->setObjectName(QString::fromUtf8("stop"));

        gridLayout_2->addWidget(stop, 3, 1, 1, 1);

        pause = new QPushButton(centralwidget);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setCheckable(true);

        gridLayout_2->addWidget(pause, 3, 0, 1, 1);

        volume = new VlcWidgetVolumeSlider(centralwidget);
        volume->setObjectName(QString::fromUtf8("volume"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(volume->sizePolicy().hasHeightForWidth());
        volume->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(volume, 5, 0, 1, 2);

        seek = new VlcWidgetSeek(centralwidget);
        seek->setObjectName(QString::fromUtf8("seek"));
        sizePolicy.setHeightForWidth(seek->sizePolicy().hasHeightForWidth());
        seek->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(seek, 6, 0, 1, 2);

        equalizer = new QPushButton(centralwidget);
        equalizer->setObjectName(QString::fromUtf8("equalizer"));

        gridLayout_2->addWidget(equalizer, 4, 0, 1, 1);

        SimplePlayer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SimplePlayer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 640, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuMedia = new QMenu(menubar);
        menuMedia->setObjectName(QString::fromUtf8("menuMedia"));
        SimplePlayer->setMenuBar(menubar);
        statusbar = new QStatusBar(SimplePlayer);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SimplePlayer->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuMedia->menuAction());
        menuFile->addAction(actionOpenLocal);
        menuFile->addAction(actionOpenUrl);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuMedia->addAction(actionPause);
        menuMedia->addAction(actionStop);

        retranslateUi(SimplePlayer);
        QObject::connect(actionQuit, SIGNAL(triggered()), SimplePlayer, SLOT(close()));

        QMetaObject::connectSlotsByName(SimplePlayer);
    } // setupUi

    void retranslateUi(QMainWindow *SimplePlayer)
    {
        SimplePlayer->setWindowTitle(QCoreApplication::translate("SimplePlayer", "Demo Player", nullptr));
        actionQuit->setText(QCoreApplication::translate("SimplePlayer", "Quit", nullptr));
        actionPause->setText(QCoreApplication::translate("SimplePlayer", "Pause", nullptr));
        actionStop->setText(QCoreApplication::translate("SimplePlayer", "Stop", nullptr));
        actionOpenLocal->setText(QCoreApplication::translate("SimplePlayer", "Open local file", nullptr));
        actionOpenUrl->setText(QCoreApplication::translate("SimplePlayer", "Open URL", nullptr));
        openLocal->setText(QCoreApplication::translate("SimplePlayer", "Open local file", nullptr));
        openUrl->setText(QCoreApplication::translate("SimplePlayer", "Open URL", nullptr));
        stop->setText(QCoreApplication::translate("SimplePlayer", "Stop", nullptr));
        pause->setText(QCoreApplication::translate("SimplePlayer", "Pause", nullptr));
        equalizer->setText(QCoreApplication::translate("SimplePlayer", "Equalizer", nullptr));
        menuFile->setTitle(QCoreApplication::translate("SimplePlayer", "File", nullptr));
        menuMedia->setTitle(QCoreApplication::translate("SimplePlayer", "Media", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SimplePlayer: public Ui_SimplePlayer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIMPLEPLAYER_H
