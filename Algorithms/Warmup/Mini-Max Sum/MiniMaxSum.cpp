#include <bits/stdc++.h>

using namespace std;

int main()
{
    long int arr[5], temp=0;
    bool swap=false;
    for (int a=0; a<5; a++)
        cin >> arr[a];
    for (int i=0; i<4; i++)
    {
        swap=false;
        for (int j=0; j<4-i; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap = true;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if (!swap)
        {
            break;
        }
    }
    cout << arr[0] + arr[1] + arr[2] + arr[3] << " ";
    cout << arr[1] + arr[2] + arr[3] + arr[4];
    return 0;
}
