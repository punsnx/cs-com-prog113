#include "Shelf.h"
// :: scope resolution operator
// tell that the function in class scope
// constructor && function overload
Shelf::Shelf() : maxBooks(10), size(0) {
    this->books = (Book **)malloc(sizeof(Book*)*maxBooks);
}
Shelf::Shelf(int maxBooks) : maxBooks(maxBooks), size(0){
    this->books = (Book **)malloc(sizeof(Book*)*maxBooks);
}
// Accessor
int Shelf::getSize() {return size;}
int Shelf::getMaxBooks() {return maxBooks;}

void Shelf::addBook(string title,int totalPage){
    Book *book = new Book(title,totalPage);
    books[size++] = book;
}
Book *Shelf::getBook(string title){
    for(int i=0;i<size;i++){
        if(books[i]->getTitle() == title){
            return books[i];
        }
    }
    return NULL;
}
string Shelf::toString(){
    string result = "";
    for(int i=0;i<size;i++){
        result += books[i]->toString();
    }
    return result;
}

int Shelf::totalPages(){
    int count = 0;
    for(int i=0;i<size;i++){
        count += books[i]->getTotalPage();
    }
    return count;
}
