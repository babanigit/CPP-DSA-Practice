
#include <iostream>
#include <string>
#include <algorithm> //sort()
#include <vector>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &v)
    {

        string ans = "";
        sort(v.begin(), v.end());

        int n = v.size();
        string first = v[0], last = v[n - 1];+


        for (int i = 0; i < min(first.size(), last.size()); i++)
        {
            if (first[i] != last[i])
            {
                return ans;
            }
            ans += first[i];
        }
        return ans;


    }
};

int main(int argc, char const *argv[])
{

    Solution sol;

    vector<string> strs = {"flower", "flow", "flight"};

    string result = sol.longestCommonPrefix(strs);
    cout << result << endl;

    return 0;
}
