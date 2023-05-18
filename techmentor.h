#ifndef TECHMENTOR_H
#define TECHMENTOR_H


#include "Mentor.h"
#include <QTextBrowser>

class TechMentor : public Mentor
{
public:
    TechMentor(const QString& filePath, QTextBrowser* textBrowser);
    ~TechMentor();
};

#endif
