#include <bits/stdc++.h>

using namespace std;

string isBalanced(string s)
{
    stack<char> parenthesis;
    bool flag = false;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '{' || s[i] == '(' || s[i] == '[')
        {
            parenthesis.push(s[i]);
        }
        else
        {
            if(parenthesis.size() > 0)
            {
                char bracket = parenthesis.top();
                if(s[i] == '}')
                {
                    if(bracket != '{')
                    {
                        flag = true;
                        break;
                    }
                }
                else if(s[i] == ']')
                {
                    if(bracket != '[')
                    {
                        flag = true;
                        break;
                    }
                }
                else if(s[i] == ')')
                {
                    if(bracket != '(')
                    {
                        flag = true;
                        break;
                    }
                }            
                parenthesis.pop();                
            }
            else
            {
                return "NO";
            }
        }
    }
    if(flag)
    {
        return "NO";
    }
    if(parenthesis.size() > 0)
    {
        return "NO";
    }
    return "YES";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) 
    {
        string s;
        getline(cin, s);

        string result = isBalanced(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
