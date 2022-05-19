#include <iostream>
#include <cctype>
int main()
{
    using namespace std;
    string s = "hello.";
    for (char& c:s)
    {
        c = toupper(c);
    }
    cout << s << endl;
}