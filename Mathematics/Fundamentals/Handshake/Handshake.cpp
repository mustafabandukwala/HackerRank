#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t, n, result;
    cin >> t;
    for(int i = 0;i < t;i++)
    {
        cin >> n;
        result = ((n*(n-1))/2);
        cout << result << endl;
    }
    return 0;
}
