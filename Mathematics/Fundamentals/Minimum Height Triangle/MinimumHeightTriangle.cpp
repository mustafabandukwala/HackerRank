#include <bits/stdc++.h>

using namespace std;

int lowestTriangle(int base, int area)
{
    int height;
    if ((area * 2)%base != 0)
        height = ((area * 2)/base) + 1;
    else
        height = ((area * 2)/base);
    return height;
}

int main()
{
    int base;
    int area;
    cin >> base >> area;
    int height = lowestTriangle(base, area);
    cout << height << endl;
    return 0;
}
