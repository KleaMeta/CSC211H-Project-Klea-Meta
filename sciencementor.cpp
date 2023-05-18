#include "ScienceMentor.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

ScienceMentor::ScienceMentor(const QString& filePath, QTextBrowser* textBrowser)
    : Mentor(filePath, textBrowser)
{
}

ScienceMentor::~ScienceMentor()
{
}
