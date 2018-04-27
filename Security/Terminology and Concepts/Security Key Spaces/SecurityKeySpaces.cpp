#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long n, result=0, index=1;
    int e;
    vector<int> digits;
    cin >> n;
    cin >> e;
    while(n > 0)
    {
        int temp = n % 10;
        n = n / 10;
        digits.push_back(temp);
    }
    for(int i=0; i<digits.size(); i++)
    {
        int temp = digits[i];
        if((temp + e) > 9)
        {
            temp = temp + e - 10;
        }
        else
        {
            temp = temp + e;
        }
        result = result + (index * temp);
        index = index * 10;
    }
    cout << result;
    return 0;
}
