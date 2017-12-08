#include "mainwindow2.h"
#include <QApplication>


/*!
 * \brief main function of Project2.
 * \ingroup Project2
 * \param argc number of the command in argv.
 * \param argv commands from windows OS.
 * \return The application exit code.
 */
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow2 w;
    w.show();

    return a.exec();
}
