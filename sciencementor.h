#ifndef SCIENCEMENTOR_H
#define SCIENCEMENTOR_H

#include "Mentor.h"
#include <QTextBrowser>

class ScienceMentor : public Mentor
{
public:
    ScienceMentor(const QString& filePath, QTextBrowser* textBrowser);
    ~ScienceMentor();
};

#endif
