/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
class Nathnael{
private:
    int age;
public:
    Nathnael(int a): age(a){}
    void displaymessage(){
        cout<<"This boy's age is "<<age<<"."<<endl;
    }
};

int main()
{   
    int a=20;
    Nathnael Current(a);
    Current.displaymessage();

    return 0;
}
