#pragma once

#include <string>

class Book {
private:
    std::string title_;
    std::string author_;
    std::string isbn_;
    bool isAvailable_;

public:
    // Конструкторы
    Book();
    Book(const std::string& title, const std::string& author, const std::string& isbn);

    // Геттеры
    const std::string& getTitle() const;
    const std::string& getAuthor() const;
    const std::string& getISBN() const;
    bool getAvailability() const;

    // Сеттеры
    void setTitle(const std::string& title);
    void setAuthor(const std::string& author);
    void setISBN(const std::string& isbn);
    void setAvailability(bool isAvailable);

    // Бизнес-логика
    bool borrow();       // true если удалось выдать
    bool returnBook();   // true если удалось вернуть
};