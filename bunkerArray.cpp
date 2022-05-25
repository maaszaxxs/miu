#include <iostream>

using namespace std;

int isPrime(int n) {
 int isPrime = 1;
 for (int i = 2; i < n; i++) {
    if (n % i == 0) {
       isPrime = 0;
       break;
     }
  }  
 return isPrime;
}

int isBunkerArray(int a[], int len) {
 int isBunkerArray = 0;
 for (int i=0; i < len; i++) {
   if (a[i] % 2 != 0 && isPrime(a[i+1]) == 1) {
      isBunkerArray = 1;
      break;
    }
  }
 return isBunkerArray;
}

int main () {
 int a[] = {4, 9, 6, 15, 21};
 int len = sizeof(a)/sizeof(a[0]);
 cout << isBunkerArray(a, len) << endl;
 return 0;
}
