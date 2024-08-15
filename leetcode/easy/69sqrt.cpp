
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int mySqrt(int x)
    {

        if (x < 2)
            return x;

        int low = 0;
        int high = x;
        int mid;
        long long mid_squared; // Use long long to avoid overflow

        while (low <= high)
        {
            mid = low + (high - low) / 2;
            mid_squared = static_cast<long long>(mid) * static_cast<long long>( mid);

            if (mid_squared == x)
                return mid;
            else if (mid_squared < x)
                low = mid + 1;
            else
                high = mid - 1;

            /* code */
        }

        return high;
    }
};

int main(int argc, char const *argv[])
{
    Solution sol;
    int data = sol.mySqrt(4);
    cout << "the output is : " << data << endl;

    return 0;
}
