#include <iostream>

using namespace std;

const int strsize = 20;

typedef struct bop
{
    char fullname[strsize];
    char title[strsize];
    char bopname[strsize];
    int preference; // 0 = fullname, 1 = title, 2 = bopname
} Bop;

int main(int argc, char const *argv[])
{
    Bop bops[3] = {
        {"Wimp Macho", "Junior Engineer", "Rush", 2},
        {"Raki Rhodes", "Senior Engineer", "Thunder", 0},
        {"Celia Laiter", "Manager", "Joker", 1}
        };

    char choice;

    cout << "Benevolent Order of Programmers Report\n"
         << "a. display by name      b. display by title\n"
         << "c. display by bopname   d. display by preference\n"
         << "q. quit\n"
         << "Enter your choice:";
    
    do
    {
        cin >> choice;
        if(choice == 'a')
        {
            for (int i = 0; i < 3; i++)
            {
                cout << bops[i].fullname << endl;
            }
        }
        if(choice == 'b')
        {
            for (int i = 0; i < 3; i++)
            {
                cout << bops[i].title <<endl;
            }
        }
        if(choice == 'c')
        {
            for (int i = 0; i < 3; i++)
            {
                cout << bops[i].bopname << endl;
            }
        }
        if(choice == 'd')
        {
            for (int i = 0; i < 3; i++)
            {
                switch (bops[i].preference)
                {
                case 0:
                    cout << bops[i].fullname << endl;
                    break;
                case 1:
                    cout << bops[i].title << endl;
                    break;
                case 2:
                    cout << bops[i].bopname << endl;
                    break;
                default:
                    break;
                }
            }
        }
        if(choice == 'q')
        {
            cout << "Bye!" << endl;
            continue;
        }
        cout << "Next choice: ";
    } while (choice != 'q');
    
    return 0;
}
