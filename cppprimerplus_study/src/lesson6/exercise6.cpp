#include <iostream>
#include <string>
#include <array>

using namespace std;

typedef struct donateLog
{
    string name;
    double money;
    bool grantFLAG;

    friend ostream &operator<<(ostream &output, donateLog &D)
    {
        output << "Name: " << D.name
               << ", money: " << D.money;
        return output;
    }
} DonateLog;

int main()
{
    int donateNums;
    string donatorName;
    double donatorMoney;
    int NoneFLAG[2] = {0,0};
    cout << "Please Enter the number of donators: ";
    cin >> donateNums;
    DonateLog *donateList = new DonateLog[donateNums];
    cout << "Please Enter the donator name and money" << endl;

    for (int i = 0; i < donateNums; i++)
    {
        cin >> donateList[i].name >> donateList[i].money;
        if (donateList[i].money > 10000)
        {
            donateList[i].grantFLAG = true;
            NoneFLAG[0] = 1;
        }
        else
        {
            donateList[i].grantFLAG = false;
            NoneFLAG[1] = 1;
        }
    }

    cout << "Grand Patrons:" << endl;
    if(NoneFLAG[0])
    {
        for (int i = 0; i < donateNums; i++)
    {
        if (donateList[i].grantFLAG)
        {
            cout << donateList[i] << endl;   
        }
    }
    }
    else
    {
        cout << "none" << endl;
    }
    
    cout << "Patrons: " << endl;
    if(NoneFLAG[1])
    {
        for (int i = 0; i < donateNums; i++)
    {
        if (!donateList[i].grantFLAG)
        {
            cout << donateList[i] << endl;   
        }
    }
    }
    else
    {
        cout << "none" << endl;
    }
    return 0;
}
