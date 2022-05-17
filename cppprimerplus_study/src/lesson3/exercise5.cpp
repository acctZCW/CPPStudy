#include <iostream>

int main()
{
    using namespace std;

    long long population;
    long long cnPopulation;

    cout << "Enter the world's population: ";
    cin >> population;
    cout << "Enter the population of the CN: ";
    cin >> cnPopulation;

    long double result = (long double)cnPopulation / (long double)population * 100;

    cout << "The population of the CN is " << result
    << "\% of the world population.";
}