#include <iostream>
#include <fstream>
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
    ifstream inFile;
    inFile.open("donatelogs.txt");
    if(!inFile.is_open())
    {
        cout << "Could not open the file." << endl;
        exit(EXIT_FAILURE);
    }

    int donatorNums;
    string value;
    bool NoneFLAG[2] = {false,false};

    getline(inFile,value);
    donatorNums = stoi(value);
    DonateLog *donateList = new DonateLog[donatorNums];

    for (int i = 0; i < donatorNums; i++)
    {
        if(inFile.good())
        {
            getline(inFile,value);
            donateList[i].name = value;
            getline(inFile,value);
            donateList[i].money = stod(value);

            if(donateList[i].money > 10000)
            {
                donateList[i].grantFLAG = true;
                NoneFLAG[0] = true;
            }
            else
            {
                donateList[i].grantFLAG = false;
                NoneFLAG[1] = true;
            }
        }
        
    }

    cout << "Grand Patrons:" << endl;
    if(NoneFLAG[0])
    {
        for (int i = 0; i < donatorNums; i++)
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
        for (int i = 0; i < donatorNums; i++)
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