#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char const *argv[])
{
    char ch = ' ';

    string buffer = "";

    while (ch != '@')
    {
        cin.get(ch);
        buffer += ch;
    }

    for (int i = 0; i < buffer.length(); i++)
    {
        if (isupper(buffer[i]))
        {
            buffer[i] = tolower(buffer[i]);
            continue;
        }

        if (islower(buffer[i]))
        {
            buffer[i] = toupper(buffer[i]);
            continue;
        }
    }

    cout << buffer << endl;

    return 0;
}
