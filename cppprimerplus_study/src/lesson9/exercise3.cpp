#include <iostream>

static char buffer[500];

struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    using namespace std;
    chaff *cp;
    cp = new (buffer) chaff[2];

    strcpy(cp[0].dross, "Ann Bird");
    strcpy(cp[1].dross, "Ann Ruby");
    cp[0].slag = 2;
    cp[1].slag = 4;

    for (int i = 0; i < 2; i++)
    {
        cout << "the dross of the chaff: " << cp[i].dross << endl;
        cout << "the slag of the chaff: " << cp[i].slag << endl;
    }

    // delete cp;
    // Can not use delete on it, 
    // because it's a static area created by the programmer.
    // not created automatically by the compiler.
    return 0;
    
}
