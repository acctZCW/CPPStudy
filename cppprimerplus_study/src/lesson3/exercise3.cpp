#include <iostream>
#include <array>
#include <vector>

int main()
{

    using namespace std;

    int degrees;
    int minutes;
    int seconds;

    const double minute2degree = 60;
    const double second2minute = 60;

    cout << "Enter a latitude in degrees, minutes, and seconds:\n";
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    double result = degrees + minutes / minute2degree + seconds / second2minute / minute2degree;

    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds, "
         << "=" << result << " degrees";
}
