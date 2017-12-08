#ifndef MAINWINDOW1_H
#define MAINWINDOW1_H

#include <QMainWindow>

namespace Ui {
class MainWindow1;
}

/*!
 * \brief The main window of Project1.
 * \ingroup Project1
 *
 * The main window will show up after the application started.
 */
class MainWindow1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow1(QWidget *parent = 0);
    ~MainWindow1();

    /*!
     * \brief test function 1.
     * \param none.
     * \return none.
     */
    void testFunction1();
private:
    Ui::MainWindow1 *ui;
};

#endif // MAINWINDOW1_H
