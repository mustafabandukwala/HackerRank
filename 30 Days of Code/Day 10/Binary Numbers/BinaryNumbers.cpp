#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> binaryNumber;
    int count = 0, tempCount = 1;
    while(n > 0)
    {
        binaryNumber.push_back(n%2);
        n = n/2;
    }
    
    for(int i=1; i<binaryNumber.size(); i++)
    {
        if(binaryNumber[i-1] == binaryNumber[i])
        {
            tempCount++;
        }
        else
        {
            if(tempCount > count)
            {
                count = tempCount;
            }
            tempCount = 1;
        }
    }
    
    if(tempCount > count)
    {
        count = tempCount;
    }
    
    cout << count;
    
    return 0;
}
