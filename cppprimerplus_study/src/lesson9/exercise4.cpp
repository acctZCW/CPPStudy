#include <iostream>
#include <sales.h>

int main()
{
    using namespace std;

    double ar[4] = {23.1,4.23,1.234,15.26};
    SALES::Sales s;
    SALES::setSales(s,ar,SALES::QUARTERS);
    SALES::showSales(s);

    return 0;
}