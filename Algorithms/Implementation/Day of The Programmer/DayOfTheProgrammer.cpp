#include <bits/stdc++.h>

using namespace std;

string solve(int year)
{
    bool flag = false;
    string result = "";
    // Exception years according to problem statement
    if(year == 1700 || year == 1800 || year == 1900)
        return "12.09." + to_string(year);
    // Handling for year 1918 according to problem statement
    if(year == 1918)
        return "26.09." + to_string(year);
    if(year % 400 == 0)
        flag = true;
    else if(year % 4 == 0 && year % 100 != 0)
        flag = true;
    if(flag)
        result = "12.09." + to_string(year);
    else
        result = "13.09." + to_string(year);
    return result;
}

int main()
{
    int year;
    cin >> year;
    string result = solve(year);
    cout << result << endl;
    return 0;
}
