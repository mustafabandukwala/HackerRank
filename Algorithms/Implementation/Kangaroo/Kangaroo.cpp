#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2)
{
    long result1=x1, result2=x2;
    if(v1 > v2 && x1 > x2)
        return "NO";
    if(v2 > v1 && x2 > x1)
        return "NO";
    else
    {
        for(int i=0; i<=10000; i++)
        {
            result1 += v1;
            result2 += v2;
            if(result1 == result2)
                return "YES";
        }
    }
    return "NO";
}

int main() {
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}
