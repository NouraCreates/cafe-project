#include <iostream>
#include <string>
using namespace std;

int main() {

    // First code: swap a and b
    int a = 10, b = 20;

    int temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;


    // Second code: name and age
    string name;
    int age;


    cout << "Enter name: ";
    cin >> name;

    cout << "Enter age: ";
    cin >> age;

    cout << "Hello " << name << ", you are "
         << age << " years old." << endl;


         // Find Decimal Value of a Binary Number

         cout << 0b110 << endl;

    return 0;
}