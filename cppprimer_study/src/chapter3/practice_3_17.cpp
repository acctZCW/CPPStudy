#include <iostream>
#include <cctype>
#include <vector>

int main()
{
    using namespace std;
    vector<string> svec;
    string s;
    for (int i = 0; i < 3; i++)
    {
        cin >> s;
        for(char& c : s)
        {
            c = toupper(c);
        }
        svec.push_back(s);
    }
    for (auto i = 0; i < svec.size(); i++)
    {
        cout << svec[i] << endl;
    }
    
    return 0;
}