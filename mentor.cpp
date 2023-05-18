#include "Mentor.h"
#include"ThirWindow.h"
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QTextBrowser>


Mentor::Mentor(const QString& filePath, QTextBrowser* textBrowser)
    : m_filePath(filePath), m_textBrowser(textBrowser)
{
}

Mentor::~Mentor()
{
}

void Mentor::displayInformation() const
{
    QString content = loadFileContent(m_filePath);
    QString htmlContent = "<pre> <span style='color:#FC27D8;'>" + content + "</span></pre>";
    m_textBrowser->setHtml(htmlContent);
}

QString Mentor::loadFileContent(const QString& filePath) const
{
    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(nullptr, "Error", "Failed to open the file: " + file.errorString());
        return QString();
    }

    QTextStream in(&file);
    QString content = in.readAll();
    file.close();

    return content;
}
