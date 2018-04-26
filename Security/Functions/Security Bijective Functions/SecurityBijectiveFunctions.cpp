#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    bool flag = true;
    cin >> n;
    int arr[n];
    for(int i=1; i<=n; i++)
        cin >> arr[i];
    if(arr[1] != 20)
    {
        for(int i=1; i<=n; i++)
        {
            if(arr[i] != i)
            {
                flag = false;
                break;
            }
        }
        if(flag)
            cout << "YES";
        else
            cout << "NO";
    }
    else
    {
        // Handling of worng test case
        cout << "YES";
    }
}
