#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int t;
    cin >> t;
    int arr[t];
    
    for(int i = 0;i < t;i++)
    {
        cin >> arr[i];
    }
    
    for(int i = 0;i < t;i++)
    {
        if(arr[i] == 0)
        {
            cout << "0" << endl;    
        }
        else
        {
            cout << (arr[i]+1) << endl;
        }
    }
    return 0;
}
