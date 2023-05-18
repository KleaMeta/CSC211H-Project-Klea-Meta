#include "person.h"

Person::Person(const QString& name, int age, const QString& email)
    : m_name(name), m_age(age), m_email(email)
{
}

Person::~Person()
{
}

QString Person::getName() const
{
    return m_name;
}

int Person::getAge() const
{
    return m_age;
}

QString Person::getEmail() const
{
    return m_email;
}




