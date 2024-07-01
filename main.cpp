#include <iostream>

using namespace std;

int main(){

    int age{23};
    string full_name{"hello"};

    // cout << "enter the full name : ";
    // getline(cin,full_name);

    // cout << "the age is : " ;
    // cin >> age;
    
    cout <<  "age is " << age << " and the full name is " << full_name << endl; 
    cerr << "errro message is : something is wrong " << endl;
    clog << "errro message is : something is wrong " << endl;

    int number2 {017} ;
    string number3 {"aniket"} ;

    cout << "number2 is :" << number2 << " hello "  << number3 <<endl;
    

    return 0;
}

