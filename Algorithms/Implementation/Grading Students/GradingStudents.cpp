#include <bits/stdc++.h>

using namespace std;

vector<int> gradingStudents(vector<int> grades)
{
    vector<int> result;
    for(int i=0; i<grades.size(); i++)
    {
        if(grades[i] < 38)
            result.push_back(grades[i]);
        else
        {
            if((grades[i] + 1)%5 == 0)
                result.push_back(grades[i]+1);
            else if((grades[i] + 2)%5 == 0)
                result.push_back(grades[i]+2);
            else
                result.push_back(grades[i]);
        }
    }
    return result;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);

    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];

        if (result_itr != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
