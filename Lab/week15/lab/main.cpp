#include <iostream>
#include "Media.h"
#include "Image.h"
using namespace std;

int main() {
  Media *media = new Image("image.jpg", 811200, 15, 10, 'x', 'r');
  cout << media->info() << endl;
  cout << "---------" << endl;
  cout << media->toScreen() << endl;
  cout << "--------------------" << endl;

  // Image *image = new Image("swap.jpg", 1302, 10, 8, 'o', 'O');
  // cout << image->info() << endl;
  // cout << "---------" << endl;
  // cout << image->toScreen() << endl;

  return 0;
}