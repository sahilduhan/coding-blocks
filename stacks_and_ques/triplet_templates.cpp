#include <bits/stdc++.h>
using namespace std;
template <typename T, typename V>
class _pair
{

    T x;
    V y;

public:
    void setX(T x)
    {
        this->x = x;
    }
    T getX()
    {
        return x;
    }
    void setY(V y)
    {
        this->y = y;
    }
    T getY()
    {
        return y;
    }
};
int main()
{
    _pair<_pair<int, int>, int> p2;
    p2.setY(10);
    _pair<int, int> p4;
    p4.setX(5);
    p4.setY(6);
    p2.setX(p4);
    cout << p2.getX().getX() << " " << p2.getX().getY() << " ";

    return 0;
}