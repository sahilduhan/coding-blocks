#include <bits/stdc++.h>
using namespace std;
template <typename T, typename V>
class _pair
{

    T x;
    T y;

public:
    void setX(T x)
    {
        this->x = x;
    }
    int getX()
    {
        return x;
    }
    void setY(T y)
    {
        this->y = y;
    }
    int getY()
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

    return 0;
}