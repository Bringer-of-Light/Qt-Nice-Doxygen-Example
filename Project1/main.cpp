#include "mainwindow1.h"
#include <QApplication>


/*!
 * \brief main function of Project1.
 * \ingroup Project1
 * \param argc number of the commands in argv.
 * \param argv commands from windows OS.
 * \return The application exit code.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow1 w;
    w.show();

    return a.exec();
}
