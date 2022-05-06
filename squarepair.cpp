#include <iostream>
#include <cmath>

using namespace std;


int isPerfectSquare(int num) {
   int isPerfectSquare = 0;
   if (num < 0) {isPerfectSquare = 0;}
   else {
         double squareRoot = sqrt(num);
         int roundedSquareRoot = round(squareRoot);
         if (squareRoot - roundedSquareRoot == 0) {isPerfectSquare = 1;}
         else {isPerfectSquare = 0;}
         }
    return isPerfectSquare;
}

int countSquarePairs(int a[], int len) {
  
  int countSquares = 0;
  for (int currentElement = 0; currentElement < len; currentElement++) {
     for (int nextElement = 0; nextElement < len; nextElement++) {
         if (a[currentElement] > 0 && a[nextElement] > 0) {
             if (a[currentElement] < a[nextElement]) {
                   if (isPerfectSquare(a[currentElement] + a[nextElement]) == 1) {
                        countSquares++;
                    }
              }
           }
       }
    }
   return countSquares;
}


int main () {

 int b[] = {9};
 int length = sizeof(b)/sizeof(b[0]);

 cout << countSquarePairs(b, length) << endl;

 return 0;
}
