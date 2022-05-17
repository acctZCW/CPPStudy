#include <iostream>
#include <string.h>

class Person
{
private:
    static const int LIMIT = 25;
    std::string lname;
    char fname[LIMIT];
public:
    Person();
    Person(const std::string &ln, const char *fn = "Heyyou");
    void Show() const;
    void FormalShow() const;
};

Person::Person()
{
    lname = "";
    fname[0] = '\0';
}

Person::Person(const std::string &ln, const char *fn)
{
    this->lname = ln;
    strcpy(this->fname,fn);
}

void Person::Show() const
{
    if(this->fname[0] == '\0' || this->lname == "")
    {
        std::cout << "no name" << std::endl;
        return;
    }
    std::cout << this->fname << " " << this->lname << std::endl;
}

void Person::FormalShow() const
{
    if(this->fname[0] == '\0' || this->lname == "")
    {
        std::cout << "no name" << std::endl;
        return;
    }
    std::cout << this->lname << ", " << this->fname << std::endl;
}

int main()
{
    using namespace std;
    Person one = Person();
    Person two = Person("Smythecraft");
    Person three = Person("Dimwiddy", "Sam");

    one.Show();
    one.FormalShow();
    two.Show();
    two.FormalShow();
    three.Show();
    three.FormalShow();

}
