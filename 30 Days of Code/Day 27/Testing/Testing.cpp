#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <cassert>
#include <set>

using namespace std;

int minimum_index(vector<int> seq) 
{
    if (seq.empty()) 
    {
        throw invalid_argument("Cannot get the minimum value index from an empty sequence");
    }
    int min_idx = 0;
    for (int i = 1; i < seq.size(); ++i) 
    {
        if (seq[i] < seq[min_idx]) 
        {
            min_idx = i;
        }
    }
    return min_idx;
}

class TestDataEmptyArray 
{
public:
    static vector<int> get_array() 
    {
        return {};
    }

};

class TestDataUniqueValues 
{
public:
    static vector<int> get_array() 
    {
        return {2, 1, 3, 4, 5};
    }

    static int get_expected_result() 
    {
        return minimum_index(get_array());
    }

};

class TestDataExactlyTwoDifferentMinimums 
{
public:
    static vector<int> get_array() 
    {
        return {2, 1, 3, 2, 1, 5};
    }

    static int get_expected_result()
    {
      return minimum_index(get_array());
    }
};

