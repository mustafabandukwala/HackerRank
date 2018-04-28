#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int result = 1;
    while(n > 0)
    {
        result *= n;
        n--;
    }
    cout << result;
    return 0;
}
