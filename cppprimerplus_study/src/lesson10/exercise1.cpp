#include <iostream>
#include <string>

class Account
{
private:
    std::string name_;
    std::string userId_;
    long double dollar_;

public:
    Account(/* args */);
    Account(std::string name, std::string userId, long double dollar);
    ~Account();
    int getDollar(long double dollar);
    int depositDollar(long double dollar);
    friend std::ostream &operator<<(std::ostream &output, const Account &A);
};

Account::Account() {}

Account::Account(std::string name, std::string userId, long double dollar)
{
    this->name_ = name;
    this->userId_ = userId;
    this->dollar_ = dollar;
}

Account::~Account() {}

int Account::getDollar(long double dollar)
{
    if (dollar < 0 && dollar > this->dollar_)
        return 0;
    this->dollar_ -= dollar;
    return 1;
}

int Account::depositDollar(long double dollar)
{
    if (dollar < 0)
        return 0;
    this->dollar_ += dollar;
    return 1;
}

std::ostream &operator<<(std::ostream &output, const Account &A)
{
    output << "the info of " << A.name_ << "is:\n"
           << "User ID: " << A.userId_ << "\n"
           << "Dollar: " << A.dollar_ << "\n";

    return output;
}

int main()
{
    using namespace std;

    Account birdAccount = Account("Bird", "112233", 30000);
    cout << birdAccount << endl;
    if (birdAccount.getDollar(500))
        cout << birdAccount << endl;
    else
        cout << "error: the num is illegal.\n";
    if (birdAccount.depositDollar(1000.5))
        cout << birdAccount << endl;
    else
        cout << "error: the num is illegal.\n";
    return 0;
}