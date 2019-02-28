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
    vector<int> a(n, 0);
    int totalSwaps = 0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        int swaps = 0;
        for(int j=0; j<n-1; j++)
        {
            if(a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swaps++;
                totalSwaps++;
            }
        }
        if(swaps == 0)
        {
            break;
        }
    }

    cout << "Array is sorted in " << totalSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1];
    return 0;
}
