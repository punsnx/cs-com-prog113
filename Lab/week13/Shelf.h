#ifndef SHELF_H
#define SHELF_H

#include <iostream>
#include "Book.h"
using namespace std;

class Shelf{
private:
    Book **books;
    int maxBooks;
    int size;
public:
    Shelf();
    Shelf(int);
    int getSize();
    int getMaxBooks();
    void addBook(string,int);
    Book *getBook(string);

    int totalPages();
    // void readBook(string,int);
    string toString();
};
#endif