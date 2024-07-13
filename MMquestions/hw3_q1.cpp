#include <iostream>
#include <utility> // for std::swap

using namespace std;

int main(int argc, char const *argv[])
{
    cout << demo[0] << " " << demo[1] << endl;

    cout << "Type four ints with a single space between each adjacent pair of ints..." << endl;
    int nums[4];
    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];

    // Sorting the numbers using bubble sort (since at most 6 swaps are needed)
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 3 - i; ++j)
            if (nums[j] > nums[j + 1])
                swap(nums[j], nums[j + 1]);

    // Output the sorted numbers
    cout << "In ascending order, you picked..." << endl;
    cout << nums[0] << ' ' << nums[1] << ' ' << nums[2] << ' ' << nums[3] << endl;

    return 0;
}
