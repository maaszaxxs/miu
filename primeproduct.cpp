#include <iostream>

using namespace std;

int isPrime( int num) {
 for (int i = 2; i < num; i++) {
   if (num % i == 0) { return 0;}
  }

  return 1;
}

int isPrimeProduct(int n) {
  for(int j = 2; j < n; j++) {
     for (int k = 2; k < n; k++) {
          if (isPrime(j) == 1 && isPrime(k)) {
              if (j * k == n) {return 1;}
             }
       }
    }
   return 0;
}

int main () {
 cout << isPrimeProduct(22) << endl;
 return 0;
}
