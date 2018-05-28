#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main()
{
    int n, k, b, sum=0, temp;
    vector<int> bill;
    cin >> n;
    cin >> k;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        bill.push_back(temp);
    }
    cin >> b;
    
    for(int i=0; i<bill.size(); i++)
    {
        if(i==k)
            continue;
        sum = sum + bill[i];
    }
    sum = sum / 2;
    if(sum == b)
        cout << "Bon Appetit";
    else
        cout << abs(sum-b);
    return 0;
}
