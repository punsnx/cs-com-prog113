#ifndef BOOK_H
#define BOOK_H

#include <iostream>
using namespace std;

class Book{ // classname UpperCarmelCase
//VV abstraction assume we know data member but can't access
private: //data hiding : data member / member function / helper function only in this class
    string title; // lowerCarmelCase all data member and member function
    int totalPage;
    int read;

public: 
    //constructor
    Book();
    Book(string,int);
    //member function
    void print();
    void readMore(int);
    // Getter Accessor
    string getTitle();
    int getTotalPage();
    int getRead();
    // Setter Mutator
    void setTitle(string);
    void setTotalPage(int);
    void setRead(int);
    //toString
    string toString();

};

#endif
//OOP APIE
//Abstractiom Polymorphism Inheritance Encapsulate
//Encapsulation : Data hiding = > data specifer private 