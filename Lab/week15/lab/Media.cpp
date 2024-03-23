#include "Media.h"
#include <sstream> // เพิ่ม library sstream
using namespace std;

Media::Media(string title, int sizeInBytes)
    : title(title), sizeInBytes(sizeInBytes) {}

string Media::getTitle() {
  return title;
}

int Media::getSizeInBytes() {
  return sizeInBytes;
}

double Media::getSizeInKB() {
  return getSizeInBytes() / 1024.0;
}

double Media::getSizeInMB() {
  return getSizeInKB() / 1024.0;
}

double Media::getSizeInGB() {
  return getSizeInMB() / 1024.0;
}

// เพิ่ม implementation ของ Media::info()
string Media::info() {
  stringstream ss;
  double size = getSizeInGB();
  string sizeUnit = "GB";
  if (size < 1) {
    size = getSizeInMB();
    sizeUnit = "MB";
  } 
  if (size < 1) {
    size = getSizeInKB();
    sizeUnit = "KB";
  }
  ss << getTitle() << " (" << size << sizeUnit << ")";
  return ss.str();
}