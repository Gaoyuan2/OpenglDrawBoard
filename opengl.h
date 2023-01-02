#ifndef OPENGL_H
#define OPENGL_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class opengl; }
QT_END_NAMESPACE

class opengl : public QMainWindow
{
    Q_OBJECT

public:
    opengl(QWidget *parent = nullptr);
    int type;
    QString filename;
    ~opengl();

private:
    Ui::opengl *ui;

private slots:
    void drawLine();
    void drawTriangle();
    void drawCircle();
    void drawRect();
    void drawRoundRect();
    void drawArc();
    void move();
    void deletes();

    void white();
    void yellow();
    void red();
    void grey();
    void darkgrey();
    void save();
    void saveas();
    void load();
    void fileOpenActionSlot();
    void fileSaveActionSlot();
    void fileSaveAsActionSlot();
};
#endif // OPENGL_H
