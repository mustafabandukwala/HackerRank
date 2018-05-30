#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int designerPdfViewer(vector<int> h, string word)
{
    int value=0, result=0;
    for(int i=0; i<word.length(); i++)
    {
        switch(word[i])
        {
            case 'a':
                value = h[0];
                break;
            case 'b':
                value = h[1];
                break;
            case 'c':
                value = h[2];
                break;
            case 'd':
                value = h[3];
                break;
            case 'e':
                value = h[4];
                break;
            case 'f':
                value = h[5];
                break;
            case 'g':
                value = h[6];
                break;
            case 'h':
                value = h[7];
                break;
            case 'i':
                value = h[8];
                break;
            case 'j':
                value = h[9];
                break;
            case 'k':
                value = h[10];
                break;
            case 'l':
                value = h[11];
                break;
            case 'm':
                value = h[12];
                break;
            case 'n':
                value = h[13];
                break;
            case 'o':
                value = h[14];
                break;
            case 'p':
                value = h[15];
                break;
            case 'q':
                value = h[16];
                break;
            case 'r':
                value = h[17];
                break;
            case 's':
                value = h[18];
                break;
            case 't':
                value = h[19];
                break;
            case 'u':
                value = h[20];
                break;
            case 'v':
                value = h[21];
                break;
            case 'w':
                value = h[22];
                break;
            case 'x':
                value = h[23];
                break;
            case 'y':
                value = h[24];
                break;
            case 'z':
                value = h[25];
                break;
        }
        if(value > result)
            result = value;
    }
    result = result * word.length();
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split_string(h_temp_temp);

    vector<int> h(26);

    for (int i = 0; i < 26; i++)
    {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    string word;
    getline(cin, word);

    int result = designerPdfViewer(h, word);

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
