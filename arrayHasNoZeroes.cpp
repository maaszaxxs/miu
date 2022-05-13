#include <iostream>

using namespace std;

int arrayHasNoZeroes(int a[], int len) {
  int nozeroes = 1;
  
  for (int i=0; i < len; i++) {
     if (a[i] == 0) { nozeroes = 0; break;}
  }
  return nozeroes;
}

int main () {

 int a[] = {};
 int len = sizeof(a)/sizeof(a[0]);
 cout << arrayHasNoZeroes(a, len) << endl;
 
 return 0;
}
