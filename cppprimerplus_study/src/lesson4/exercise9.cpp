#include <iostream>
#include <string>

using namespace std;

typedef struct candyBar{
    string brand;
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


int main()
{
    CandyBar *snack = new CandyBar[3];

    snack[0].brand = "XiaoLongRen";
    snack[1].brand = "Aerbes";
    snack[2].brand = "Love";

    snack[0].weight = 1.3;
    snack[1].weight = 2.3;
    snack[2].weight = 5.3;

    snack[0].calories = 100;
    snack[1].calories = 123;
    snack[2].calories = 235;

    cout << "first: " << snack[0] << endl;
    cout << "second: " << snack[1] << endl;
    cout << "third: " << snack[2] << endl;

    delete [] snack; // remember to delete the pointer

    return 0;
}