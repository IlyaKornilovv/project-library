#include "Library.h"

#include <iostream>

void Library::addBook(const Book& book) {
    books.push_back(book);
}

Book* Library::findBookByISBN(const std::string& isbn) {
    for (auto& book : books) {
        if (book.getISBN() == isbn) return &book;
    }
    return nullptr;
}

void Library::listAllBooks() const {
    for (const auto& book : books) {
        std::cout << "Название: " << book.getTitle() 
                  << ", Автор: " << book.getAuthor()
                  << ", Статус: " << (book.getAvailability() ? "доступна" : "выдана")
                  << std::endl;
    }
}

int Library::getBookCount() const {
    return books.size();
}