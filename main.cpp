#include <iostream>

using namespace std;

int main()
{

    int age{23};
    string full_name{"hello"};

    // cout << "enter the full name : ";
    // getline(cin,full_name);

    // cout << "the age is : " ;
    // cin >> age;

    cout << "age is " << age << " and the full name is " << full_name << endl;
    cerr << "errro message is : something is wrong " << endl;
    clog << "errro message is : something is wrong " << endl;

    int number2{017};
    string number3{"aniket"};

    cout << "number2 is :" << number2 << " hello " << number3 << endl;
    cout << "size of int is : " << sizeof(int) << endl;

    char value = 65;
    cout << "value(Int) : " << static_cast<int>(value) << endl;

    bool state(0);
    cout <<std:: boolalpha; //convert number into string 0 =false and 1=true
    cout<< "state : " << state <<endl;

    return 0;
}
