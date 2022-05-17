#include <iostream>

class Plorg
{
private:
    std::string name;
    int CI;
public:
    Plorg(const std::string name = "Plorga", int CI = 50);
    void setCI(int CI);
    void showPlorg() const;
};

Plorg::Plorg(const std::string name, int CI)
{
    if (name.length() > 19)
    {
        std::cout << "the length is over.\n";
    }
    
    this->name = name;
    this->CI = CI;
}

void Plorg::setCI(int CI)
{
    this->CI = CI;
}

void Plorg::showPlorg() const
{
    using namespace std;
    cout << "the name: " << this->name << "\n"
    << "the CI: "  << this->CI << "\n";
}

int main()
{
    Plorg one = Plorg();
    Plorg two = Plorg("two",60);
    one.showPlorg();
    two.showPlorg();
    one.setCI(55);
    one.showPlorg();
}
