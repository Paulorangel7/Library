#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
    bool available;

public:
    // Method to assign book details
    void setBookDetails(string t, string a, string i, bool av) {
        title = t;
        author = a;
        isbn = i;
        available = av;
    }

    // Method to display book details
    void displayBookDetails() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << isbn << endl;
        cout << "Availability: " << (available ? "Available" : "Borrowed") << endl;
        cout << "-----------------------------" << endl;
    }

    // Method to borrow a book
    void borrowBook() {
        if (available) {
            available = false;
            cout << "Book borrowed successfully!" << endl;
        } else {
            cout << "Sorry, this book is already borrowed." << endl;
        }
    }

    // Method to return a book
    void returnBook() {
        if (!available) {
            available = true;
            cout << "Book returned successfully!" << endl;
        } else {
            cout << "This book is already available." << endl;
        }
    }

    // Getter for ISBN
    string getISBN() {
        return isbn;
    }

    // Getter for availability
    bool isAvailable() {
        return available;
    }
};

int main() {
    Book library[5];

    // Initialize 5 books in the library
    library[0].setBookDetails("The Great Gatsby", "F. Scott Fitzgerald", "1111", true);
    library[1].setBookDetails("To Kill a Mockingbird", "Harper Lee", "2222", true);
    library
