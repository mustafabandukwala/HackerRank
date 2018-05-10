#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long int i, temp=0, tempi, num, digitSum=0, factorSum=0, digitNum, factorNum;
    cin >> num;
    if (num > 0)
    {
        digitNum = num;
        while (digitNum > 0)
        {
            temp = digitNum % 10;
            digitNum = digitNum / 10;
            digitSum += temp;
        }
        
        factorNum = num;
        temp=0;
        if (factorNum > 1)
        {
            while (factorNum%2 == 0)
            {
                factorSum += 2;
                factorNum = factorNum / 2;
            }
            for (i=3; i<=factorNum; i+=2)
            {
                while ((factorNum % i) == 0)
                {
                    if (i > 10)
                    {
                        tempi=i;
                        while(tempi > 0)
                        {
                            temp = tempi % 10;
                            tempi = tempi / 10;
                            factorSum += temp;
                        }
                    }
                    else
                    {
                        factorSum += i;
                    }
                    factorNum = factorNum / i;
                }
            }
        }
        if (digitSum == factorSum)
            cout << "1";
        else
            cout << "0";
    }
    else
        cout << "0";
    return 0;
}
