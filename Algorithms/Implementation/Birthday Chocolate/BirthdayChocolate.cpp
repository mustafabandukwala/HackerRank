#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int solve(int n, vector<int> s, int d, int m)
{
    int temp=0, index=0, sum=0, result=0;
    for(int i=0; i<=s.size()-m; i++)
    {
        while(temp != m)
        {
            sum = sum + s[index];
            index++;
            temp++;
        }
        if(sum == d)
            result++;
        
        index = i+1;
        temp = 0;
        sum = 0;
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s_temp_temp;
    getline(cin, s_temp_temp);

    vector<string> s_temp = split_string(s_temp_temp);

    vector<int> s(n);

    for (int i = 0; i < n; i++)
    {
        int s_item = stoi(s_temp[i]);

        s[i] = s_item;
    }

    string dm_temp;
    getline(cin, dm_temp);

    vector<string> dm = split_string(dm_temp);

    int d = stoi(dm[0]);

    int m = stoi(dm[1]);

    int result = solve(n, s, d, m);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y)
    {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
