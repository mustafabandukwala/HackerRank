#include <bits/stdc++.h>

using namespace std;

int countingValleys(int n, string s)
{
    int result = 0, count=0;
    bool flag = false;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'U')
            count++;
        else if(s[i] == 'D')
            count--;
        
        if(count < 0)
            flag = true;
        
        if(count == 0 && flag)
        {
            flag = false;
            result++;
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
