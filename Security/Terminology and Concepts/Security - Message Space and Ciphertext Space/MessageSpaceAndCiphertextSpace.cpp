#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    string input;
    cin >> input;
    for(int i=0; i<input.length(); i++)
    {
        switch(input[i])
        {
            case '0':
                cout << "1";
                break;
            case '1':
                cout << "2";
                break;
            case '2':
                cout << "3";
                break;
            case '3':
                cout << "4";
                break;
            case '4':
                cout << "5";
                break;
            case '5':
                cout << "6";
                break;
            case '6':
                cout << "7";
                break;
            case '7':
                cout << "8";
                break;
            case '8':
                cout << "9";
                break;
            case '9':
                cout << "0";
                break;
        }
    }
    return 0;
}
