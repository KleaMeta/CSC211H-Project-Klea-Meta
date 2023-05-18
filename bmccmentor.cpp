#include "BMCCMentor.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

BMCCMentor::BMCCMentor(const QString& filePath, QTextBrowser* textBrowser)
    : Mentor(filePath, textBrowser)
{
}

BMCCMentor::~BMCCMentor()
{
}
