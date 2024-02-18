/*
Create a class `Student` with attributes `rollNumber`, `name`, and `marks`. Implement a
parameterized constructor to initialize these attributes. Overload the constructor to handle both
with and without marks cases. Display the grade of the student based on the marks (A, B, C, D,
or F).
Sample Input:
Student 1: Roll Number - 101, Name - "Tom"
Student 2: Roll Number - 102, Name - "Lisa", Marks - 75

Sample Output:
Student 1 created with no marks.
Student 2 created with marks 75. Grade: B.
    */

#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int rollNumber;
    string name;
    float marks;




    Student(int prollNumber,string pName)
    {
        rollNumber=prollNumber;
        name=pName;
        cout << "Student 1 created with no marks." <<endl;
    }
    Student(int nrollNumber,string nName,  float nMarks)
    {
        rollNumber=nrollNumber;
        name=nName;
        marks=nMarks;
        cout << "Student 2 created with marks"<<marks<< "." <<"Grade:"<<calculateGrade() <<endl;
    }
    char calculateGrade()
    {
        if (marks >= 90)
        {
            return 'A+';
        }
        else if (marks >= 80)
        {
            return 'A';
        }
        else if (marks >= 70)
        {
            return 'B';
        }
        else if (marks >= 60)
        {
            return 'c';
        }
        else
        {
            return 'F';
        }

    }
};

int main()
{

    Student student1(101, "Tom");
    Student student2(102, "Lisa", 75);

    return 0;
}

