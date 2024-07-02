

#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
    string name;
    int age;

    public:
    Person(const string& n, int  a):name(n), age(a) {
    cout << "hello contractor called " << endl;
    }

    void display(){
                std::cout << "Name: " << name << ", Age: " << age << std::endl;

    }
};

int main(int argc, char const *argv[])
{
    Person p1("aniket panchal",20);
    Person p2("eren jeagear",21);

    p1.display();



    return 0;
}
