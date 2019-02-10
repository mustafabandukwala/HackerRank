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
    for(int j=0; j<n; j++)
    {
        string inputString, odd="", even="";
        cin >> inputString;
        for(int i=0; i<inputString.length(); i++)
        {
            if(i%2)
            {
                odd = odd + inputString[i];
            }
            else
            {
                even = even + inputString[i];
            }
        }
        cout << even << " " << odd << endl;   
    }    
    return 0;
}
