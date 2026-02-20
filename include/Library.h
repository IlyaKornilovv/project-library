#ifndef LIBRARY_H
#define LIBRARY_H

#include <vector>
#include <string>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;
    
public:
    void addBook(const Book& book);
    Book* findBookByISBN(const std::string& isbn);
    void listAllBooks() const;
    int getBookCount() const;
};

#endif
