#include <iostream>
#include <cstring>
using namespace std;

struct stringy
{
    char *str;
    int ct; // length of str
};

void set(stringy &stry, char* str);
void show(const stringy &stry);
void show(const char *str);
void show(const char *str, int times);
void show(const stringy &stry, int times);

int main()
{
    stringy beany;
    char testing[] = "Keality isn't what it used to be.";

    set(beany, testing);

    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");
    
    return 0;
}

void set(stringy &stry, char *str)
{
    int size = strlen(str);
    stry.ct = size;
    stry.str = new char[size];
    strcpy(stry.str,str);
}

void show(const stringy &stry)
{
    cout << stry.str << endl;
}

void show(const stringy &stry, int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << stry.str << endl;
    }
}

void show(const char *str)
{
    cout << str << endl;
}

void show(const char *str, int times)
{
    for (int i = 0; i < times; i++)
    {
        cout << str << endl;
    }
}