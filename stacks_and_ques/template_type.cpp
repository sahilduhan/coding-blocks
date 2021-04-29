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
    _Pair<int> p1;
    p1.setX(10);
    cout << p1.getX();
    _Pair<int> p2;

    return 0;
}