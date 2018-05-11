#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long r, c, n, result;
    cin >> r;
    cin >> c;
    if(r % 2 == 0)
    {
        n = ((((r/2)-1)*5) + c);
        result = ((2*n) - 1);
    }
    else
    {
        n = ((((r-1)/2)*5) + c);
        result = (2*(n - 1));        
    }
    cout << result;
    return 0;
}
