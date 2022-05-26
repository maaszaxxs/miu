#include <iostream>

using namespace std;

int isContinuousFactored(int n) {
 int isContinuousFactored = 0;
 if (n <= 2) {isContinuousFactored = 0;}
 for (int i=2; i <= 10; i++) {
  while (n % i == 0) {
    n /= i;}
  if (n < 2) {
        isContinuousFactored = 1;
        break;
      }
  }
  return isContinuousFactored;
}

int main () {
 cout << isContinuousFactored(120) << endl;
 return 0;
}
