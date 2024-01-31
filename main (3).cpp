/******************************************************************************
EE245 Homework 2 question number 1 Nathnael Minuta 01/27/ 2023

Byte number
This program calculates and displays the number of bytes 
required for an integer and a float using the sizeof() operator.


*******************************************************************************/
#include <iostream>
using namespace std;

int a;
float b;
void Byte_Number()
{
    cout << "Number of bytes of an integer is " << sizeof(a) << endl;
    cout << "Number of bytes of a float is " << sizeof(b) << endl; 
}
int main()
{
    Byte_Number();
    return 0;
}

