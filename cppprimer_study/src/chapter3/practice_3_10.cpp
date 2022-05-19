#include <iostream>
#include <cctype>

int main()
{
    using namespace std;
    string s, result = "";
    getline(cin,s);
    for (char c:s)
    {
        if(ispunct(c))
            continue;
        result += c;
    }
    cout << result << endl;
}