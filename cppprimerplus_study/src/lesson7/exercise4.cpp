#include <iostream>


long double probability(unsigned numbers, unsigned picks);

int main()
{
    using namespace std;
    double total, choices;
    cout << "Enter the total number of choices on the game card and\n"
    << "the number of picks allowed:\n";
    while((cin >> total >> choices) && choices <= total)
    {
        cout << "The probability of winning is: ";
        cout << 100/(probability(total,choices)*27);
        cout << "\% of winning.\n";
        cout << "Next two numbers (q to quit): ";
    }
    cout << "bye" << endl;

    return 0;
}



long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;
    long double n;
    unsigned p;
    // 本质上是一个排列组合问题，输入49 6得出的组合为C_49^6
    for (n = numbers, p=picks; p>0;n--,p--)
        result = result * n / p;
    return result;
}