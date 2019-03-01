#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void isPrime(long number)
{
    if(number == 1)
    {
        cout << "Not prime" << endl;
        return;
    }

    if(number == 2)
    {
        cout << "Prime" << endl;
        return;
    }
    
    for (long i = 2; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            cout << "Not prime" << endl;
            return;
        }
    }
    cout << "Prime" << endl;
}

int main() 
{
    int n;
    cin >> n;
    long number;

    for(int i=0; i<n; i++)
    {
        cin >> number;
        isPrime(number);
    }

    return 0;
}
