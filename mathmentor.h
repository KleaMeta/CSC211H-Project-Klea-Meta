#ifndef MATHMENTOR_H
#define MATHMENTOR_H

#include "Mentor.h"
#include <QTextBrowser>

class MathMentor : public Mentor
{
public:
    MathMentor(const QString& filePath, QTextBrowser* textBrowser);
    ~MathMentor();
};

#endif
