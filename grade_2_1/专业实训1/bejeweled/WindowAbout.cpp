#include "WindowAbout.h"
#include "ui_WindowAbout.h"

WindowAbout::WindowAbout(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WindowAbout)
{
    ui->setupUi(this);
    static const QDate buildDate = QLocale( QLocale::English ).toDate( QString(__DATE__).replace("  ", " 0"), "MMM dd yyyy");
    static const QTime buildTime = QTime::fromString(__TIME__, "hh:mm:ss");
    lastupdatetime = QString("%1 %2").arg(buildDate.toString("yyyy.MM.dd")).arg(buildTime.toString());

}


WindowAbout::~WindowAbout()
{
    delete ui;
}

