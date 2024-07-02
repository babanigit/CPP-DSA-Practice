
#include <iostream>
#include <string>
using namespace std;

// fun1
void f1()
{
    cout << "\n f1() Start ";
    throw " erro in f1 , hello this is aniket ";
    cout << "\n f1() End ";
}

// fun2
void f2()
{
    cout << "\n f2() Start ";
    f1();
    cout << "\n f2() End ";
}

// main
int main()
{
    try
    {
        f2();
    }
    catch (const char *msg)
    {
        cerr << "Exception caught: " << msg << endl;

        // cerr << e.what() << '\n';
    }

    return 0;
}
