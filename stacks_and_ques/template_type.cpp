#include <bits/stdc++.h>
using namespace std;
template <typename T>
class _Pair
{
    T x;
    T y;

public:
    void setX(T x)
    {
        this - x = x;
    }
    void getX()
    {
        return x;
    }
    void setY(T y)
    {
        this->y = y;
    }
    void getY()
    {
        return y;
    }
};
int main()
{
    _Pair<int> p1;
    p1.setX(10);
    p1.getX();
    _Pair<int> p2;

    return 0;
}