#include <iostream>
#include <string>
using namespace std;

struct {
    string bookTitle;
    string bookAuthor;
    string bookYear;
}book[3];

int main(){
    for(int i = 0; i < 3; i++){
        cout << "Enter the book " << i + 1 << " title:" << endl << ">";
        getline(cin, book[i].bookTitle);
        cout << "Enter the name of the Author:" << endl << ">";
        getline(cin, book[i].bookAuthor);
        cout << "Enter the year of publication:" << endl << ">";
        getline(cin, book[i].bookYear);
    }
    for(int v = 0; v < 3; v++)
        cout << endl << "Book " << v + 1 << endl << "Title: " << book[v].bookTitle << endl << "Author: " << book[v].bookAuthor << endl << "Year: " << book[v].bookYear << endl;
    return 0;
}
