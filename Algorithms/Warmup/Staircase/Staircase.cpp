#include <bits/stdc++.h>

using namespace std;

void staircase(int n)
{
    int i, j; 
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((j+i+1) < n)
            {
                printf(" ");
            }
            else
            {
                printf("#");   
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
