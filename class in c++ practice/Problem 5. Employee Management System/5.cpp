#include <bits/stdc++.h>
using namespace std;


class Employee
{
public:
    int employeeID;
    string name;
    double salary;
    Employee( int nemployeeID,string nName)
    {
        employeeID= nemployeeID;
        name=nName ;

        cout<<"Employee 1 created with no salary."<<endl;
    }

    Employee(int pemployeeID,string pName, double pSalary)
    {
        employeeID=pemployeeID;
        name=pName;
        salary=pSalary;
        cout<<"Employee 2 created with salary "<<salary<<"."<< "Annual Salary:" << annualSalary()<<endl;

    }



    double annualSalary()
    {
        return salary * 12;
    }
};

int main()
{
    Employee Employee1(001, "John");
    Employee Employee2(002, "Jane", 5000);

    return 0;
}

