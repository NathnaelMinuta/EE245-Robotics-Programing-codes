#include <iostream>
#include <stdexcept>
using namespace std;

float divide(float num, float den) {
    if (den==0)
    {throw runtime_error("Invalid!");}
    return num/den;
}

int main()
{
    int num, den;
    cout<<"Enter Numerator:";
    cin>>num;
    cout<<"Enter Denominator:";
    cin>>den;
    
    try {
        float res = divide(num, den);
        cout << "Result is: " << res << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}
