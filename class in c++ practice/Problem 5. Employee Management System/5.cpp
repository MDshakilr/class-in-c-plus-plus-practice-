/*
Create a class `Employee` with attributes `employeeID`, `name`, and `salary`. Implement a
parameterized constructor to initialize these attributes. Overload the constructor to handle both
with and without salary cases. Create a method to calculate and display the annual salary (12
times the monthly salary).
Sample Input:
Employee 1: Employee ID - 001, Name - "John"
Employee 2: Employee ID - 002, Name - "Jane", Salary - 5000

Sample Output:
Employee 1 created with no salary.
Employee 2 created with salary 5000. Annual Salary: 60000.
    */




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

