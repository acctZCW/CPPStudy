#include <iostream>
#include <sales.h>
#include <memory>

void SALES::setSales(SALES::Sales &s, const double ar[], int n)
{
    if( n > QUARTERS)
    {
        std::cout << "error! the size of sales is too large!" << std::endl;
        return;
    }

    memcpy(s.sales,ar,QUARTERS*sizeof(double));
    double max = ar[0];
    double min = ar[0];
    double average = 0;
    for (int i = 0; i < QUARTERS; i++)
    {
        if (ar[i] > max)
            max = ar[i];
        if (ar[i] < min)
            min = ar[i];
        average += ar[i];
    }
    s.max = max;
    s.min = min;
    s.average = average/QUARTERS;
}

void SALES::showSales(const SALES::Sales &s)
{
    using namespace std;

    cout << "the sales: ";
    for (int i = 0; i < QUARTERS; i++)
    {
        cout << s.sales[i] << " ";
    }
    cout << "\n";
    cout << "the average: " << s.average << endl;
    cout << "the max: " << s.max << endl;
    cout << "the min: " << s.min << endl;
    
}