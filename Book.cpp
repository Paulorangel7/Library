#include "Book.h"
#include <iostream>
using namespace std;

Book::Book() {
    title = "";
    author = "";
    isbn = "";
    availability = "";
    dateAdd = "";
}

Book::Book(string t, string a, string i, string av, string d) {
    title = t;
    author = a;
    isbn = i;
    availability = av;
    dateAdd = d;
}

void Book::print() {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << isbn << endl;
    cout << "Availability: " << availability << endl;
    cout << "Date Added: " << dateAdd << endl;
}
