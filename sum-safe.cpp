#include <iostream>

using namespace std;

int isSumSafe(int a[], int len) {
  int isSumSafe = 1;
  int Sum = 0; 

  for (int i=0; i < len; i++) {
      Sum += a[i];
  }

  for (int j=0; j < len; j++) {
      if (Sum == a[j]) {isSumSafe = 0; break;}
   }
  
   return isSumSafe;
 }

int main () {
 int a[] = {5, -5, 0};
 int len = sizeof(a)/sizeof(a[0]);
 cout << isSumSafe(a, len) << endl;

 int b[] = {5, -2, 1};
 len = sizeof(b)/sizeof(b[0]);
 cout << isSumSafe(b, len) << endl;
 return 0;
}

