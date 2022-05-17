#include <iostream>
#include <string>
#include <golf.h>

void setgolf(golf &g, const char *name, int hc)
{
    g.fullname = name;
    g.handicap = hc;
}

int setgolf(golf &g)
{
    using namespace std;

    string name;
    int hc;
    
    cout << "please input the name of golf: ";
    getline(cin,name);
    cout << "please input the handicap of golf: ";
    cin >> hc;

    if (name.empty())
    {
        g.handicap = hc;
        return 0;
    }  
    else
    {
        g.fullname = name;
        g.handicap = hc;
        return 1;
    }
}

void showgolf(const golf &g)
{
    using namespace std;

    cout << "the fullname of the golf is: " << g.fullname << endl;
    cout << "the handicap of the golf is: " << g.handicap << endl;
}