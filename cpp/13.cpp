#include <iostream>  //reading book details with object pointer
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    void display() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Book* bookPtr = new Book();
    cout << "Enter book title: ";
    cin>>bookPtr->title;
    cout << "Enter book author: ";
    cin>>bookPtr->author;
    cout << "Enter year of publication: ";
    cin >>bookPtr->year;

    cout << endl << "Book details:" << endl;
    bookPtr->display(); 

    delete bookPtr; 
    return 0;
}
