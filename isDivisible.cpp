#include <iostream>

using namespace std;

int isDivisible(int a[], int len, int divisor) {
   int isDivisible = 1;
   for (int i=0; i < len; i++) {
     if (a[i] % divisor != 0) {isDivisible = 0; break; }
     }
    return isDivisible;
}

int main () {
  int a[] = {3, 3, 6, 36};
  int len = sizeof(a)/sizeof(a[0]);
  cout << isDivisible(a, len, 3) << endl;
  return 0;
}
