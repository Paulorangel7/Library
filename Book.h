#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    std::string title;
    std::string author;
    std::string isbn;
    std::string availability;
    std::string dateAdd;

    Book();
    Book(std::string t, std::string a, std::string i, std::string av, std::string d);

    void print();
};

#endif
