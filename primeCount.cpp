#include <iostream>
#include <cmath>

using namespace std;

int prime(int num) {
   if (num <= 1) {
      return 0;
   }
      for (int j = 2; j < num; j++) {
         if (num % j == 0) {
             return 0;
          }
       }
  return 1;
 }

int primeCount(int start, int end) {
 
 int count = 0;
 for (int i = start; i <=end; i++) {
     int  num = prime(i);
      if (num) {
        count++;
       }
   }
  return count;
 }

int main() {

 cout << primeCount(-10, 6) << endl;
 return 0;
 }
