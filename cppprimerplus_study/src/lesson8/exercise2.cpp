#include <iostream>
#include <string>

using namespace std;

typedef struct candyBar
{
    candyBar(char *b = "Millennium", double w = 2.85, int c = 350);
    char* brand;
    float weight;
    int calories;

    friend ostream &operator<<(ostream &output, candyBar &C)
    {
        output << "Name: " << C.brand
               << " weight: " << C.weight
               << " calories: " << C.calories;

        return output;
    }
} CandyBar;

candyBar::candyBar(char*b, double w, int c):brand(b),weight(w),calories(c){}

void Set_candyBar(CandyBar &candyBar,
                  char *brand, double weight, int calories);

int main()
{
    CandyBar candyBar;
    cout << candyBar << endl;
    char *brand = "aha";
    Set_candyBar(candyBar, brand, 3.15, 400);
    cout << candyBar << endl;

    return 0;
}

void Set_candyBar(CandyBar &candyBar, char *brand, double weight, int calories)
{
    candyBar.brand = brand;
    candyBar.weight = weight;
    candyBar.calories = calories;
}