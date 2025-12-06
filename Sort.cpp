#include "Sort.h"
#include <algorithm>

void Sort::sortBooks(std::vector<Book>& books) {
    std::sort(books.begin(), books.end(), 
        [](const Book& b1, const Book& b2) {
            return b1.title < b2.title;
        }
    );
}
