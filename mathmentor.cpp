#include "MathMentor.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

MathMentor::MathMentor(const QString& filePath, QTextBrowser* textBrowser)
    : Mentor(filePath, textBrowser)
{
}

MathMentor::~MathMentor()
{
}
