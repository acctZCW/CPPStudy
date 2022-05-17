#include <iostream>

long long Digui(int n);

int main()
{
    using namespace std;
    int n;
    cout << "Input the number(q to quit): ";
    while((cin >> n) && (n != 'q'))
    {
        cout << "The result is: ";
        cout << Digui(n) << endl;
        cout << "Input the number(q to quit): ";
    }
     
}

long long Digui(int n)
{
    if (n == 0)
        return 1;

    int result = 1;
    for(int i = 1; i <=n; i++)
        result *= i;
    
    return result;
}