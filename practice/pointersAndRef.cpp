
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

    int a=45,b=35;
    cout << "before swap\n";
    cout << "a= " << a << "b = "<<b << "\n";

    int * address = &x;
    cout << address << endl;

    address = 3 ;

        cout << x << endl;

    return 0;

}
