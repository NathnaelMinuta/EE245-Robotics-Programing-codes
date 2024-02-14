#include <iostream>
using namespace std;
class Work{
    public:
    string Company;
    string Position;
    double Wage;

void print()
{
    cout<<Company<<"-"<<Position<<"($"<<Wage<<")"<<endl;
}
};
int main()
{
   Work job;
   job.Company="Thin Films Technology";
   job.Position="Research Assistant";
   job.Wage=15;
   
   job.print();

    return 0;
}
