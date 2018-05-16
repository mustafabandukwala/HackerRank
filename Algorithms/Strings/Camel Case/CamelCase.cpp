#include <bits/stdc++.h>

using namespace std;

int camelcase(string s)
{
    int result = 1;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            result++;
    }
    return result;
}

int main()
{
    string s;
    cin >> s;
    int result = camelcase(s);
    cout << result << endl;
    return 0;
}
