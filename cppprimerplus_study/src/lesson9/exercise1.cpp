#include <iostream>
#include <golf.h>


int main()
{
    using namespace std;

    golf ann;
    setgolf(ann,"Ann Birdfree",24);
    golf andy;
    

    showgolf(ann);
    if (setgolf(andy))
    {
        showgolf(andy);
    }
    
}

