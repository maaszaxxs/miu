#include <iostream>

using namespace std;

int isMeera(int a[], int len) {
 int isMeera = 1;
 for (int i=0; i < len; i++) {
    for (int j=0; j < len; j++) {
        if (a[i] * 2 == a[j]) {
           isMeera = 0;
           break;
         }
     }
     if (isMeera == 0) {break;}
  }
 return isMeera;
}

int main () {
 int a[] = {8, 3, 4};
 int len = sizeof(a)/sizeof(a[0]);
 cout << isMeera(a, len) << endl;
 return 0;
}

