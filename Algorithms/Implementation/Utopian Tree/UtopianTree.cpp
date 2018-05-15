#include <bits/stdc++.h>

using namespace std;

int utopianTree(int n)
{
    int count=0, height=1, temp; 
    temp=n;
    while(n > 0)
    {
        if(count < temp)
        {
            if((count%2) == 0)
            {
                height *= 2;   
            }
            else
            {
                height += 1;
            }
            count++;
        }
        n--;
    }
    return height;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = utopianTree(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
