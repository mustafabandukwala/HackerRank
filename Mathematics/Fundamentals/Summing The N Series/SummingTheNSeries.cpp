#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    unsigned long long int t, n, i, j, sum=0, temp=10000007;
    cin >> t;
    for (i=0; i<t; i++)
    {
        cin >> n;
        cout << (((n % 1000000007)*(n % 1000000007))%1000000007) << "\n";
    }
    return 0;
}
