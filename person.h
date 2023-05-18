#ifndef PERSON_H
#define PERSON_H

#include <QString>

class Person
{
public:
    Person(const QString& name, int age, const QString& email);
    virtual ~Person();

    QString getName() const;
    int getAge() const;
    QString getEmail() const;

    virtual void displayInformation() const = 0;

private:
    QString m_name;
    int m_age;
    QString m_email;

};

#endif // PERSON_H

