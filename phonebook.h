// phonebook.h

#include <string>
#include <vector>

class Person
{
    public:
        Person();
        explicit Person(const std::string &name);
        void SetName(const std::string &name);
        std::string GetName() const;
        void SetHomeNumber(const std::string &number);
        std::string GetHomeNumber() const;

    private:
        std::string name_;
        std::string number_;
};

class PhoneBook
{
    public:
        PhoneBook();
        bool IsEmpty() const;
        int GetSize() const;
        void AddPerson(Person *p);
        void RemovePerson(const std::string &name);
        Person *FindPerson(const std::string &name);

    private:
        std::vector<Person> person_vec_;
};

