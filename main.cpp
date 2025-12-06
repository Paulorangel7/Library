#include <iostream>
#include <vector>
#include "Book.h"
#include "Sort.h"

using namespace std;

int main() {

    cout << "===== Correct Book Initialisation =====\n\n";

    Book b1("The Pragmatic Programmer", "Andrew Hunt", "978-0201616224", "Available", "2025-03-15");
    Book b2("Clean Code", "Robert C. Martin", "978-0132350884", "Checked Out", "2024-11-02");
    Book b3("Introduction to Algorithms", "Thomas Cormen", "978-0262033848", "Available", "2023-07-20");

    b1.print(); cout << endl;
    b2.print(); cout << endl;
    b3.print(); cout << endl;

    cout << "\n===== Incorrect Book Initialisation (Examples) =====\n\n";

    Book bad1("12345", "true", "ABC", "5", "32/13/2025");
    Book bad2("", "null", "9780132350884", "maybe", "not-a-date");
    Book bad3("[Array]", "{JSON}", "", "-1", "20250101");

    bad1.print(); cout << endl;
    bad2.print(); cout << endl;
    bad3.print(); cout << endl;

    cout << "\n===== Arrays and Sorting Tests =====\n\n";

    // Ascending order added
    vector<Book> asc = { b2, b3, b1 };
    cout << "Before Sort (Ascending Added):\n";
    for (auto& b : asc) cout << b.title << endl;

    Sort::sortBooks(asc);
    cout << "\nAfter Sort:\n";
    for (auto& b : asc) cout << b.title << endl;


    // Descending order added
    vector<Book> desc = { b1, b3, b2 };
    cout << "\n\nBefore Sort (Descending Added):\n";
    for (auto& b : desc) cout << b.title << endl;

    Sort::sortBooks(desc);
    cout << "\nAfter Sort:\n";
    for (auto& b : desc) cout << b.title << endl;


    // Mixed order
    vector<Book> mixed = { b3, b1, b2 };
    cout << "\n\nBefore Sort (Mixed Added):\n";
    for (auto& b : mixed) cout << b.title << endl;

    Sort::sortBooks(mixed);
    cout << "\nAfter Sort:\n";
    for (auto& b : mixed) cout << b.title << endl;

    cout << "\n\n===== END OF TEST =====\n";

    return 0;
}
