#include <iostream>

using namespace std;

int isPrime(int num) {
 for (int i=2; i < num; i++) {
     if (num % i == 0) {
        return 0;
        break;
       }
  }
 return 1;
}

int isTwin(int a[], int len) {
 int isTwin = 0;
 for (int i=0; i < len; i++) {
    for (int j=0; j < len; j++) {
         if (isPrime(a[i]) == 1 && isPrime(a[j]) && a[i] - a[j] == 2 || a[j] - a[i] == 2 && isPrime(a[i]) == 1 && isPrime(a[j])) {
            isTwin = 1;
            break;
           }
        }
      if (isTwin == 1) {break;}
  }
 return isTwin;
}

int main () {
 int a[] = {11, 9, 12, 13, 23};
 int len = sizeof(a)/sizeof(a[0]);
 cout << isTwin(a, len) << endl;
 return 0;
}
