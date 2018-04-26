#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    bool flag = true;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin >> arr[i];
    for(int i=0; i<n; i++)
    {
        if((arr[arr[i]-1]-1) != i)
            flag = false;        
    }
    if(flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
