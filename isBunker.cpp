#include <iostream>

using namespace std;

int isPrime(int num) {
 int isPrime = 1;
 if (num < 2) {isPrime = 0;}
 for (int i=2; i < num; i++) {
   if (num % i == 0) {isPrime = 0; break;}
  }
  return isPrime;
}

int isBunker(int a[], int len) {
 int primeCount = 0;
 int onesCount = 0;
 for (int i=0; i < len; i++) {
    if (isPrime(a[i]) == 1) {primeCount += 1;}
    else if (a[i] == 1) {onesCount += 1;}
  }

 if (primeCount > 0 && onesCount > 0) {return 1;}
 else {return 0;}
}

int main () {
 int a[] = {7, 6, 10};
 int len = sizeof(a)/sizeof(a[0]);
 cout << isBunker(a, len) << endl;
 return 0;
}

