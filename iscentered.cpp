#include <iostream>

using namespace std;

int isCentered(int a[], int len) {

 int center = len/2;
 for (int i = 0; i < len; i++) {
    if (a[center] > a[i]) {
       return 0;
       break;}
  }
  return 1;
}

int main () {
 int a[] = {3, 2, 1, 4, 5};
 int len = sizeof(a)/sizeof(a[0]);
 cout << isCentered(a, len) << endl;
 return 0;
}
