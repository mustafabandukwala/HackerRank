#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    int arr[t][4], result_x, result_y;
    for(int i = 0;i < t;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            cin >> arr[i][j];   
        }
    }
    
    for(int i = 0; i < t; i++)
    {
        result_x = 2*arr[i][2] - arr[i][0];
        result_y = 2*arr[i][3] - arr[i][1];
        cout << result_x << " " << result_y << endl;
    }
    return 0;
}
