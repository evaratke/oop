/*#include <iostream>
#include <string>

struct Book {
  // size_t id_;
  std::string title_;
  std::string author_;
  size_t year_;
  Book (std::string title, std::string author, size_t year) {
    this->title_ = title; 
    this->author_ = author;
    this->year_ = year;
  }
  Book() {}
  std::string ToString() {
    return title_+" ("+ author_ +", "+ std::to_string(year_) +")";
  }
};

class Library {
  Book* books_;
  size_t count_;
public:
  Library(Book books[], size_t count) {
    this->books_ = new Book[count]; 
    for (size_t i = 0; i < count; i++){
      this->books_[i] = books[i]; 
    }
    this->count_ = count;
  }
  Library(Library& lib){
    this->count_ = lib.count_; // копируем количество книг
    this->books_ = new Book[count_]; //  новый массив для книг
    for (size_t i = 0; i < count_; i++){
      this->books_[i] = lib.books_[i]; // копируем книги
    }
  }
  Library(Library&& lib){
    this->count_ = lib.count_; 
    this->books_ = lib.books_; // переносим указатель на массив книг
    lib.books_ = nullptr; // обнуляем указатель на массив книг
    lib.count_ = 0; // обнуляем количество книг
  }
  ~Library(){
    delete[] books_;
  }
  Book& GetBook(size_t index){
    return books_[index]; // возвращаем ссылку на книгу по индексу
  }
  std::string ToString(){
    std::string result = "";// создаем строку для хранения результата
    for (size_t i = 0; i < count_; i++){
      result += books_[i].ToString() + "\n";
    }
    return result;
  }
  void Print(){
    std::cout << ToString();
  }
  Library Concat(Library& lib){
    if (this->count_ == 0) {
      return lib; // если книг в этой библиотеке нет, возвращаем библиотеку lib
    }
    if (lib.count_ == 0) {
      return *this; // если книг в библиотеке lib нет, возвращаем эту библиотеку 
    }
    Book* newBooks = new Book[this->count_ + lib.count_]; // создаем новый массив для книг
    for (int i = 0; i < this->count_; i++){
      newBooks[i] = this->books_[i]; // копируем книги из текущей библиотеки
    }
    for (int i = 0; i < lib.count_; i++){
      newBooks[i + this->count_] = lib.books_[i]; // копируем книги из библиотеки lib
    }
    Library newLib(newBooks, this->count_ + lib.count_); // создаем новую библиотеку с новым массивом
    delete[] newBooks; 
    return newLib;
  }
};

int main ()
{
  using namespace std;
  Book books[] = {
    {"War and Peace", "Leo Tolstoy", 1869},
    {"Anna Karenina", "Leo Tolstoy", 1877},
    {"Crime and Punishment", "Fyodor Dostoevsky", 1866},
  };
  Library lib(books, 3);

  Library copy(lib);

  lib.GetBook(0).author_ = "Alex Pushkin";

  cout << "\tOriginal: " << endl;
  lib.Print();

  cout << "\tCopy: " << endl;
  copy.Print();

  Library newLib = lib.Concat(copy);
  cout << "\tConcat: " << endl;
  newLib.Print();

  return 0;
}*/