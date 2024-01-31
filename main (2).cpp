#include <iostream>
using namespace std;
class Student{
private:
    float gpa[3];
    
public:
    Student(float gpaArray[3])
    {
        for (int i=0; i<4; i++)
        gpa[i]=gpaArray[i];
    }
    void printGPAData() 
    {
       cout << "Student ID | GPA\n";
       for (int i = 0; i < 3; ++i) cout << "Student " << i + 1 << " | " << gpa[i] << endl;
    }
};
int main()
{
    float gpaData[3] = {3.5, 4.0, 3.2};
   Student MNSU(gpaData);
   MNSU.printGPAData();
    return 0;
}
