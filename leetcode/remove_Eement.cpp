#include <vector>
#include <iostream>
#include <string>
using namespace std;


class Solution {
public:
    int removeElement(vector<int>& arr, int val) {
        int i,c=0;
        for(i=0;i<arr.size();i++){
            if(arr[i]!=val){
                arr[c]=arr[i];
                c++;
            }
        }
        return c;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    vector<int> nums = {3,2,2,3};
    int val = 3;
     cout << sol.removeElement(nums,val);
    return 0;
}
