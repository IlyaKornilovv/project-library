#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    std::string isbn;
    bool isAvailable;
    
public:
    // Конструктор
    Book(std::string t, std::string a, std::string i);
    
    // Методы
    void borrow();
    void returnBook();
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    bool getAvailability() const;
};
#endif