#include <iostream>

using namespace std;

int isMeera(int a[], int len) {
 int isMeera = 1;
 for (int i = 0; i < len; i++) {
   if (a[i] >= i) {
        isMeera = 0;
        break;}
   }

  return isMeera;
}

int main () {
 int a[] = {-4, 0, 1, 0, 2};
 int len = sizeof(a)/sizeof(a[0]);

 cout << isMeera(a, len) << endl;
 return 0;
}
