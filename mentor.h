
#ifndef MENTOR_H
#define MENTOR_H

#include <QString>
#include <QTextBrowser>

class Mentor
{
public:
     Mentor(const QString& filePath, QTextBrowser* textBrowser);
    ~Mentor();
    void displayInformation() const;
    QString loadFileContent(const QString& filePath) const;

private:
    QString m_filePath;
    QTextBrowser* m_textBrowser;

};
#endif


