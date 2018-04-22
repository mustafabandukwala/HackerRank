#include <bits/stdc++.h>

using namespace std;

int diagonalDifference(vector<vector<int>> a)
{
    int n = a.size(); 
    int sum_primary=0, sum_secondary=0, difference;
    for(int a_i = 0; a_i < n; a_i++)
    {
       for(int a_j = 0; a_j < n; a_j++)
       {
          if(a_i == a_j)
          {
             sum_primary += a[a_i][a_j];
          }
          if((a_i+a_j+1) == n)
          {
             sum_secondary += a[a_i][a_j]; 
          }
       }
    }
    difference = sum_primary - sum_secondary;
    if(difference < 0)
        return (difference * -1);
    return difference;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> a(n);
    for (int a_row_itr = 0; a_row_itr < n; a_row_itr++) {
        a[a_row_itr].resize(n);

        for (int a_column_itr = 0; a_column_itr < n; a_column_itr++) {
            cin >> a[a_row_itr][a_column_itr];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(a);

    fout << result << "\n";

    fout.close();

    return 0;
}
