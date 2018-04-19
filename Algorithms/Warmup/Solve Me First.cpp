/*Complete the function solveMeFirst to compute the sum of two integers.

Function prototype:

int solveMeFirst(int x, int y);

where,

x is the first integer input.
y is the second integer input

Return values
sum of the above two integers

Sample Input
x = 2
y = 3

Sample Output
5

Explanation

The sum of the two integers x and y is computed as: 2+3 = 5. */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int solveMeFirst(int a, int b)
{
    return a+b;  
}

int main()
{
  int num1, num2;
  int sum;
  cin>>num1>>num2;
  sum = solveMeFirst(num1,num2);
  cout<<sum;
  return 0;
}
