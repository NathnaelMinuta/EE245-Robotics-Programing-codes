#include <iostream>
using namespace std;
class Work{
    public:
    string Company;
    string Position;
    double Wage;

virtual void print()
{
    cout<<Company<<"-"<<Position<<"($"<<Wage<<")"<<endl;
}
};
class leadership : public Work
{
   public:
    string organization;
    void print() override
{
    cout<<organization<<"-"<<Position<<"($"<<Wage<<")"<<endl;
}
};
int main()
{
   Work job;
   job.Company="Thin Films Technology";
   job.Position="Research Assistant";
   job.Wage=15;
   
   job.print();
   
   leadership RSO;
   RSO.organization="NSBE";
   RSO.Position="Treasurer";
   RSO.print();
   
   Work *ptr;
   ptr = &RSO;
   ptr->print();
    return 0;
}
