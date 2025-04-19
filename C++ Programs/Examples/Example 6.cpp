#include <iostream>
using namespace std;

struct Person
{
    char name[25];
    int age;
    float salary;
};

int main()
{
    Person p1,p2;
    
    cout << "Enter Full name: ";
    cin>>p1.name;
    cout << "Enter age: ";
    cin >> p1.age;
    cout << "Enter salary: ";
    cin >> p1.salary;
    cout<<"Enter your name:";
    cin>>p2.name;
    cout<<"Enter age:";
    cin>>p2.age;
    cout<<"Enter salary:";
    cin>>p2.salary;
    
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout <<"Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl;
    cout<< "Name:" << p2.name << endl;
    cout<< "Age" << p2.age << endl;
    cout<< "Salary" << p2.salary << endl;

    return 0;
}
