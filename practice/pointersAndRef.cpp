
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    int x =10;
    
    int& ref =x;
     cout << ref << endl;
     ref =30;
     cout << x << endl;
    return 0;
}
