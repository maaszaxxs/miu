#include <iostream>

using namespace std;

int countDigit(int n, int digit) {

 int countDigit = 0;
 
 if (n < 0) {return -1;}
 while (n != 0) {
   if (n % 10 == digit) {
            countDigit += 1;
      }
        
   n /= 10;
  }
   return countDigit;
}

int main () {
 cout << countDigit(33331, 6) << endl;
 return 0;
}
