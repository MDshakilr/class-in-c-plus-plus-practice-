#include<bits/stdc++.h>
using namespace std;
class Book{
    public:
    string title;
    string author;
    string ISBN;
    Book(string nTitle,string nAuthor,string nISBN)
    {
        title=nTitle;
        author=nAuthor;
        ISBN=nISBN;
        cout<<"Book\t"<<title<<"\t created"<<endl;
    }
    ~Book()
    {

        cout<<"Book\t"<<title<<"\t destroyed"<<endl;
    }



};
int main()
{
    Book Book1("Introduction to OOP","John Doe","123456789");
     Book Book2("Data Structures and Algorithms","Jane Smith","987654321");
return 0;
}
