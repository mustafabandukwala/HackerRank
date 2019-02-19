#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int dayA, monthA, yearA, dayB, monthB, yearB;
    cin >> dayA;
    cin >> monthA;
    cin >> yearA;
    cin >> dayB;;
    cin >> monthB;
    cin >> yearB;
    
    if(yearA < yearB)
    {
        cout << "0";
    }
    else if(yearA == yearB)
    {
        if(monthA < monthB)
        {
            cout << "0";
        }
        else if(monthA == monthB)
        {
            if(dayA <= dayB)
            {
                cout << "0";
            }
            else
            {
                cout << 15 * (dayA - dayB);
            }   
        }
        else
        {
            cout << 500 * (monthA - monthB);
        }
    }
    else
    {
        cout << "10000";
    }
    return 0;
}
