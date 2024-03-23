#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
using namespace std;

class Media {
  private: 
    string title;
    int sizeInBytes;

  public:
    Media(string, int);
    string getTitle();
    int getSizeInBytes();
    double getSizeInKB();
    double getSizeInMB();
    double getSizeInGB();
    // เพิ่ม virtual function และ pure virtual function
    virtual string info(); 
    virtual string toScreen() = 0;
};

#endif