#include <iostream>
#include<string>
using namespace std;

string bookTitle;
string bookAuthor;
int bookYear;
float bookPrice;
bool validInput = false;

int main()
{
    cout << "Welcome to this program! Here, you can enter the details of a book of your liking." << endl << endl;

    while (validInput == false)
        {
        cout << "Please enter the title of the book.(The tittle should not exceed 100 characters.)" << endl << ">";
        getline(cin, bookTitle);
        if (bookTitle == "" || bookTitle == " ")
        {
            cout << "Title can't be empty, please try again." << endl;
            continue;
        }
        else if (bookTitle.length() > 100)
        {
            cout << "Title can't exceed 100 characters, please try again." << endl;
            continue;
        }
        else
        {
            validInput = true;
        }
    }

    validInput = false;
    while (validInput == false)
        {
        cout << "Please enter the name of the author.(The name should not exceed 50 characters.)" << endl << ">";
        getline(cin, bookAuthor);
      //  switch (bookAuthor)
        if (bookAuthor == "" || bookAuthor == " ")
        {
            cout << "Name can't be empty, please try again." << endl;
            continue;
        }
        else if (bookAuthor.length() > 50)
        {
            cout << "Name can't exceed 50 characters, please try again." << endl;
            continue;
        }
        else
        {
            validInput = true;
        }
    }

    validInput = false;
    while (validInput == false)
    {
        cout << "Please enter the publication year.(The year has to stay between 1900 - current year.)" << endl << ">";
        cin >> bookYear;
        if (bookYear < 1900)
        {
            cout << "The publication year has to stay between 1900 - current year, please try again." << endl;
            continue;
        }
        else
        {
            validInput = true;
        }
    }

    validInput = false;
    while (validInput == false){
        cout << "Please enter the price of the book. (The price must be a positive value.)" << endl << ">";
        cin >> bookPrice;
                if (bookPrice < 0  )
        {
            cout << "The Price should be positive!" << endl;
            continue;
        }
        else
        {
            validInput = true;
        }
    }
    cout << endl << "Book information:" << endl << "Title: " << bookTitle << endl << "Author: " << bookAuthor << endl << "Publication Year: " << bookYear << endl << "Price: $" << bookPrice << endl;
    return 0;

}
