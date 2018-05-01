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

int main(){
    long n;
    long m;
    cin >> n >> m;
    if(n%2==0 && m%2==0)
        cout << ((n*m)/4);
    else if((n%2!=0 && m%2==0) || (n%2==0 && m%2!=0))
    {
        if (n%2 == 0)
            cout << ((n/2) * ((m-1)/2) + (n/2));
        else
            cout << ((m/2) * ((n-1)/2) + (m/2));
    }
    else if(n%2!=0 && m%2!=0)
        cout << ((((n-1)*(m-1))/4) + ((n-1)/2) + ((m-1)/2) + 1);
    return 0;
}
