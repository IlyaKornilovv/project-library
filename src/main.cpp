#include <iostream>
#include <string>
#include "Book.h"
#include "Library.h"

int main() {
    std::cout << "========================================\n";
    std::cout << "     БИБЛИОТЕЧНАЯ СИСТЕМА v1.0\n";
    std::cout << "========================================\n\n";
    
    Library library;
    
    Book book1("Война и мир", "Лев Толстой", "978-5-17-123456-7");
    Book book2("Преступление и наказание", "Фёдор Достоевский", "978-5-17-765432-1");
    Book book3("Мастер и Маргарита", "Михаил Булгаков", "978-5-17-987654-3");
    Book book4("1984", "Джордж Оруэлл", "978-5-17-111111-1");
    
    std::cout << "📚 Добавление книг...\n";
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addBook(book4);
    std::cout << "✅ Добавлено книг: " << library.getBookCount() << "\n\n";
    
    std::cout << "📖 Список всех книг:\n";
    std::cout << "--------------------\n";
    library.listAllBooks();
    std::cout << "\n";
    
    std::cout << "🔍 Поиск книги по ISBN (978-5-17-123456-7)...\n";
    Book* foundBook = library.findBookByISBN("978-5-17-123456-7");
    
    if (foundBook) {
        std::cout << "✅ Найдена: " << foundBook->getTitle() << "\n";
        std::cout << "📕 Выдача книги...\n";
        foundBook->borrow();
        std::cout << "📕 Статус: " << (foundBook->getAvailability() ? "доступна" : "выдана") << "\n\n";
    }
    
    std::cout << "📖 Обновленный список:\n";
    std::cout << "---------------------------\n";
    library.listAllBooks();
    std::cout << "\n";
    
    std::cout << "📗 Возврат книги...\n";
    if (foundBook) {
        foundBook->returnBook();
        std::cout << "📗 Статус: " << (foundBook->getAvailability() ? "доступна" : "выдана") << "\n\n";
    }
    
    std::cout << "========================================\n";
    std::cout << "     ТЕСТИРОВАНИЕ ЗАВЕРШЕНО\n";
    std::cout << "========================================\n";
    
    return 0;
}