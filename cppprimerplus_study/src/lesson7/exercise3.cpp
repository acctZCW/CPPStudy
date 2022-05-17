#include <iostream>

using namespace std;

typedef struct box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
} Box;

void ShowBox(Box b);
void ChangeVolume(Box *b);

int main()
{
    Box bo = {"BiBi", 10, 5, 6, 0};

    ShowBox(bo);

    ChangeVolume(&bo);

    ShowBox(bo);

    return 0;
}

void ShowBox(Box b)
{
    cout << b.maker << "\n"
         << "length: " << b.length << "\n"
         << "width:" << b.width << "\n"
         << "height: " << b.height << "\n"
         << "volume: " << b.volume << endl;
}

void ChangeVolume(Box *b)
{
    b->volume = b->height * b->length * b->width;
}