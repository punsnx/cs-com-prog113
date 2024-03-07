#include <iostream>
#include "Book.h"
#include "Shelf.h"

int main(){
    Book python; // default constructor
    Book cpp("Advance Cpp",500);

    Book *books[100];
    books[0] = new Book();
    books[1] = new Book("python",500);

    // new constructor malloc && return pointer 
    Shelf *shelf1 = new Shelf;
    shelf1->addBook("Python",500);
    Book *book = shelf1->getBook("Python");
    book->readMore(2);
    if (book) cout << book->toString() << endl;
    else cout << "not found" << endl;
    // cout << shelf1->toString() << shelf1->totalPages() <<  endl;

    return 0;
}