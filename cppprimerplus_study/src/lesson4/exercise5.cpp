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

    CandyBar snack = {"Mocha Munch",2.3,350};
    // cout << "The snack's name is " << snack.brand << "\n";
    // cout << "The snack's weight is " << snack.weight << "\n";
    // cout << "The snack;s calories is " << snack.calories << "\n";
    cout << snack << endl;

    return 0;
}