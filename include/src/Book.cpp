#include "Book.h"

Book::Book()
    : title_(""), author_(""), isbn_(""), isAvailable_(true) {}

Book::Book(const std::string& title, const std::string& author, const std::string& isbn)
    : title_(title), author_(author), isbn_(isbn), isAvailable_(true) {}

const std::string& Book::getTitle() const { return title_; }
const std::string& Book::getAuthor() const { return author_; }
const std::string& Book::getISBN() const { return isbn_; }
bool Book::getAvailability() const { return isAvailable_; }

void Book::setTitle(const std::string& title) { title_ = title; }
void Book::setAuthor(const std::string& author) { author_ = author; }
void Book::setISBN(const std::string& isbn) { isbn_ = isbn; }
void Book::setAvailability(bool isAvailable) { isAvailable_ = isAvailable; }

bool Book::borrow() {
    if (!isAvailable_) return false;
    isAvailable_ = false;
    return true;
}

bool Book::returnBook() {
    if (isAvailable_) return false;
    isAvailable_ = true;
    return true;
}