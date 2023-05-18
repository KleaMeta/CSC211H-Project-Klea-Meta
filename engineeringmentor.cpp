#include "EngineeringMentor.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

EngineeringMentor::EngineeringMentor(const QString& filePath, QTextBrowser* textBrowser)
    : Mentor(filePath, textBrowser)
{
}

EngineeringMentor::~EngineeringMentor()
{
}
