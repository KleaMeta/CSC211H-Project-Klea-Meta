#ifndef ENGINEERINGMENTOR_H
#define ENGINEERINGMENTOR_H


#include "Mentor.h"
#include <QTextBrowser>

class EngineeringMentor : public Mentor
{
public:
    EngineeringMentor(const QString& filePath, QTextBrowser* textBrowser);
    ~EngineeringMentor();
};

#endif
