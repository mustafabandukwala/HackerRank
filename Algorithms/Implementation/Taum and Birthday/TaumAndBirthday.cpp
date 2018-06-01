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
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        int b;
        int w;
        cin >> b >> w;
        int x;
        int y;
        int z;
        cin >> x >> y >> z;
        long X=0, Y=0;
        if((y+z) < x)
        {
            X = y+z;
        }
        else{
            X = x;
        }
        if((x+z) < y)
        {
            Y = x+z;
        }
        else{
            Y = y;
        }
        printf("%ld\n", ((b*X)+(w*Y)));
    }
    return 0;
}
