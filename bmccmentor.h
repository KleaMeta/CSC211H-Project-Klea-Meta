#ifndef BMCCMENTOR_H
#define BMCCMENTOR_H

#include "Mentor.h"
#include <QTextBrowser>

class BMCCMentor : public Mentor
{
public:
    BMCCMentor(const QString& filePath, QTextBrowser* textBrowser);
    ~BMCCMentor();
};

#endif
