#include <string>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    const char *charStr = "hello this is const char* with the pointer " ;
    cout << charStr << endl;

    string t1Str = "hello, using string datatype from string library " ;
    cout << t1Str << endl;

    string str1= "hello", str2 =" world(using + operator)" ;
    cout << str1 + str2 << endl;
    cout << str1.append(" world(using append)");

    char charStr2[] = " hello this is char using array ";
    cout << charStr2 << endl;

    // char charStr3[] = " hello this is char using array ";
    // cout << charStr3 << endl;



    return 0;
}
