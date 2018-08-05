#include "mainwindow.h"
#include <QApplication>
#include <src/pianoroll.h>
#include <src/midiplayer.h>
#include <src/pianorollitem.h>
int main(int argc, char *argv[])

{
    QApplication app(argc, argv);
    app.setApplicationDisplayName("MidiInter - A Composers Tool");

    app.setStyleSheet(QString::fromUtf8(
                          "QScrollBar:vertical {"
                          "    border: 1px solid grey;"
                          "    background: none;"
                          "    width: 15px;    "
                          "    margin: 1px 0px 1px 0px;"
                          "}"
                          "QScrollBar::handle:vertical {"
                          "    background: rgb(150,150,150);"
                          "    border: 1px rgb(200,200,200);"
                          "    min-height: 20px;"
                          "}"
                          "QScrollBar::add-line:vertical {"
                          "    background: solid grey;"
                          "    border: 1px solid grey;"
                          "    height: 10 px;"
                          "    subcontrol-position: bottom;"
                          "    subcontrol-origin: margin;"
                          "}"
                          "QScrollBar::sub-line:vertical {"
                          "    background: solid grey; "
                          "    border: 1px solid grey;"
                          "    height: 10 px;"
                          "    subcontrol-position: top;"
                          "    subcontrol-origin: margin;"
                          "}"
                          "QDialog{"
                          "    border: 1px solid grey;"
                          "    background: rgb(150,150,150);"
                          "}"
                          "QListWidget{"
                          "    border: 1px solid grey;"
                          "    background: rgb(192,192,192);"
                          "}"
                          "QSlider{"
                          "    border: 1px solid grey;"
                          "    background: rgb(192,192,192);"
                          "    height: 25px;"
                          "    min-width: 100px;"
                          "}"
                          "QSlider::groove:horizontal{"
                          "    border: 1px solid grey;"
                          "    background: rgb(192,192,192);"
                          "}"
                          "QSlider::handle:horizontal{"
                          "    border: 1px solid grey;"
                          "    background: rgb(50,50,50);"
                          "    width: 15px;"
                          "}"
                          "QSplitter::handle:vertical{"
                          "    background: rgb(150,150,150);"
                          "}"
                          "QSplitter::handle:horizontal{"
                          "    background: rgb(150,150,150);"
                          "}"
                          ));


    MainWindow window;
    window.show();
    return app.exec();
}