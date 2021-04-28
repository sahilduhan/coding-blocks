#include <bits/stdc++.h>
int main()
{
    int t, b, p, f, r = 0, c, h;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d %d", &b, &p, &f);
        scanf("%d %d", &h, &c);
        if (h > c)
        {
            if ((b / 2) >= p)
            {
                r = p * h;
                b = (b / 2) - p;
                if (b >= f)
                {
                    r = r + f * c;
                }
                else
                {
                    r = r + b * c;
                }
            }
            else
            {
                r = (b / 2) * h;
            }
        }
        else
        {
            if ((b / 2) >= f)
            {
                r = f * c;
                b = (b / 2) - f;
                if (b >= p)
                {
                    r = r + p * h;
                }
                else
                {
                    r = r + b * h;
                }
            }
            else
            {
                r = (b / 2) * c;
            }
        }
        printf("%d\n", r);
    }
    return 0;
}
