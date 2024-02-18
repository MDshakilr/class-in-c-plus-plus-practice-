/*Create a class `Book` with attributes `title`, `author`, and `ISBN`. Implement a parameterized
constructor to initialize these attributes. Write a destructor to display a message when a book
object is destroyed. Create multiple book objects and demonstrate constructor and destructor
calls.
Sample Input:
Book 1: Title - "Introduction to OOP", Author - "John Doe", ISBN - "123456789"
Book 2: Title - "Data Structures and Algorithms", Author - "Jane Smith", ISBN - "987654321"

Sample Output:
Book title created.
Book title created.
Book title destroyed.
Book  title destroyed.
*/


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
