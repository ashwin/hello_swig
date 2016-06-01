#include "phonebook.h"

Person::Person() {}

Person::Person(const std::string &name)
{
    name_ = name;
}

void Person::SetName(const std::string &name)
{
    name_ = name;
}

std::string Person::GetName() const
{
    return name_;
}

void Person::SetHomeNumber(const std::string &number)
{
    number_ = number;
}

std::string Person::GetHomeNumber() const
{
    return number_;
}

PhoneBook::PhoneBook() {}

bool PhoneBook::IsEmpty() const
{
    return person_vec_.empty();
}

int PhoneBook::GetSize() const
{
    return person_vec_.size();
}

void PhoneBook::AddPerson(Person *p)
{
    if (p)
        person_vec_.push_back(*p);
}

void PhoneBook::RemovePerson(const std::string &name)
{
    for (auto i = person_vec_.begin(); i != person_vec_.end(); ++i)
    {
        if ((*i).GetName() == name)
        {
            person_vec_.erase(i);
            break;
        }
    }
}

Person *PhoneBook::FindPerson(const std::string &name)
{
    for (auto i = person_vec_.begin(); i != person_vec_.end(); ++i)
    {
        if ((*i).GetName() == name)
        {
            return &(*i);
        }
    }

    return nullptr;
}
