#ifndef MAINWINDOW2_H
#define MAINWINDOW2_H

#include <QMainWindow>

namespace Ui {
class MainWindow2;
}

/*!
 * \brief The main window of Project2.
 * \ingroup Project2
 *
 * The main window will show up after the application started.
 */
class MainWindow2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow2(QWidget *parent = 0);
    ~MainWindow2();

    /*!
     * \brief test function 2.
     * \param none.
     * \return none.
     */
    void testFunction2();
private:
    Ui::MainWindow2 *ui;
};

#endif // MAINWINDOW2_H
