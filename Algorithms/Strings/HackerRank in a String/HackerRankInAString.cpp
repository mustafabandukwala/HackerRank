#include <bits/stdc++.h>

using namespace std;

string hackerrankInString(string s)
{
    string hack = "hackerrank";
    int index = 0;
    for(int i=0; i<s.length(); i++)
    {
        if(hack[index] == s[i])
            index++;
        if(index == 10)
            return "YES";
    }
    return "NO";
}

int main()
{
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++)
    {
        string s;
        cin >> s;
        string result = hackerrankInString(s);
        cout << result << endl;
    }
    return 0;
}
