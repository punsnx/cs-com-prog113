#include "Book.h"

Book::Book(): title("BOOKNAME"),totalPage(10),read(0) {}
Book::Book(string title,int totalPage){
    this->title = title;
    this->totalPage = totalPage;
    this->read = 0;
}
void Book::print(){
    cout << title << endl << totalPage << endl << read <<  endl; 
}
// Getter Accessor
string Book::getTitle(){
    return title;
}
int Book::getTotalPage(){
    return totalPage;
}
int Book::getRead(){
    return read;
}
// Setter Mutator
void Book::setTitle(string title){
    this->title = title;
}
void Book::setTotalPage(int totalPage){
    this->totalPage = totalPage;
}
void Book::setRead(int read){
    this->read = read;
}
// toString
string Book::toString(){
    string result ="";
    result += "Title: " + title + "\n";
    result += "TotalPage: " + to_string(totalPage) + "\n";
    result += "read: " + to_string(read) + "\n";
    return result;
}

void Book::readMore(int n){
    read = min(read+n,totalPage);    
}