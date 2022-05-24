#include <iostream>

using namespace std;

int isWave(int a[], int len) {
 if (len < 2) {return 1;}
 for (int i=0; i < len; i++) {
   if (a[i] % 2 == 0 && a[i+1] % 2 == 0 || a[i] % 2 != 0 && a[i+1] % 2 != 0) {
         return 0;
         break;
   }
  }
   return 1;
}

int main () {

 int a[] = {};
 int len = sizeof(a)/sizeof(a[0]);
 cout << isWave(a, len) << endl;

 return 0;
}
