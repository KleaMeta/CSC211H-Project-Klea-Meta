#include "TechMentor.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

TechMentor::TechMentor(const QString& filePath, QTextBrowser* textBrowser)
    : Mentor(filePath, textBrowser)
{
}

TechMentor::~TechMentor()
{
}
