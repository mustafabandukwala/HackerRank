#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    map<string, long> phoneBook;
    string name;
    long number;

    for(int i=0; i<n; i++)
    {
        cin >> name;
        cin >> number;
        phoneBook[name] = number;
    }

    while(cin >> name)
    {
        if(phoneBook.find(name) != phoneBook.end())
        {
            cout << name << "=" << phoneBook.find(name)->second;
        }
        else
        {
            cout << "Not found";
        }
        cout << endl;
    }
    return 0;
}
