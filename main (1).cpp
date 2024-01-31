#include <iostream>

using namespace std;

int main() {
    int Natis_age = 20;

    // Declare a pointer and assign the address of the variable to it
    int* ptr = &Natis_age;

    // Access and print the value using the pointer
    cout << "Natis_age is: " << *ptr << endl;

    // Modify the value using the pointer
    *ptr = 21;

    // Check the updated value of the variable
    cout << "Natis_age after a year is: " << Natis_age << endl;

    return 0;
}
