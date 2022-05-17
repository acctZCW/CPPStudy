#include <iostream>

class Move
{
private:
    double x;
    double y;
public:
    Move(double a = 0, double b = 0);
    void ShowMove() const;
    Move add(const Move &m) const;
    void reset(double a = 0, double b = 0);
    friend std::ostream &operator<< (std::ostream &output, const Move &m);
};

Move::Move(double a,double b)
{
    this->x = a;
    this->y = b;
}

void Move::ShowMove() const 
{
    using namespace std;
    cout << "the x: " << this->x << endl;
    cout << "the y:" << this->y << endl;
}

Move Move::add(const Move &m) const
{
    Move move;
    move.x = this->x + m.x;
    move.y = this->y + m.y;

    return move;
}

void Move::reset(double a, double b)
{
    this->x = a;
    this->y = b;
}

std::ostream &operator<< (std::ostream &output, const Move &m)
{
    output << "the x: " << m.x << "\n"
    << "the y: " << m.y << "\n";

    return output;
}

int main()
{
    using namespace std;
    Move one = Move(5,6);
    Move two = Move(2,3);
    one.ShowMove();
    Move three = one.add(two);
    three.ShowMove();
    three.reset();
    three.ShowMove();
}