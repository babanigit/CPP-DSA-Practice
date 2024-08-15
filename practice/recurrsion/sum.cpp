#include <iostream>
using namespace std;

int sum(int k)
{
    if (k > 0)
    {

        cout << " pre " << k << endl;
        int t = k + sum(k - 1);
        cout << " post "<< t << endl;

        return t;
    }
    else
    {
        cout << " hehe " <<endl;
        return 0;
    }
}

int main()
{
    int result = sum(5);
    cout << result;
    return 0;
}
