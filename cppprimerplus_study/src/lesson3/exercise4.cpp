#include <iostream>

int main()
{
    using namespace std;

    const int hrsAday = 24;
    const int minsAhour = 60;
    const int secsAmin = 60;

    long seconds;

    cout << "Enter the number of seconds: ";
     cin >> seconds;

    long days = seconds / (secsAmin * minsAhour * hrsAday);
    int result = seconds % (secsAmin * minsAhour * hrsAday);
    int hours = result / (minsAhour * secsAmin);
    result = result % (minsAhour * secsAmin);
    int minutes = result / secsAmin;
    int nseconds = result % secsAmin;

    cout << seconds << " seconds = " << days << " days, " << hours
         << " hours, " << minutes << " minutes, " << nseconds << " seconds";
}