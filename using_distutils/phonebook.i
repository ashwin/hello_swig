%module phonebook
%{
#define SWIG_FILE_WITH_INIT
#include "phonebook.h"
%}

%include "std_string.i"
%include "std_vector.i"

class Person
{
    public:
        Person();
        explicit Person(const std::string &name);
        std::string GetName() const;
        void SetHomeNumber(const std::string &number);
};

class PhoneBook
{
    public:
        PhoneBook();
        void AddPerson(Person *p);
        void RemovePerson(const std::string &name);
        Person *FindPerson(const std::string &name);
};

