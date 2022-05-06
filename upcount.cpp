#include <iostream>

using namespace std;

int nUpCount(int a[], int len, int n) {
  int upCount, partialSum, previousPartialSum;
  upCount = partialSum = previousPartialSum = 0;
  
  for (int i=0; i < len; i++) {
    previousPartialSum = partialSum;
    partialSum += a[i];
    
    if (previousPartialSum <= n && partialSum > n) {
         upCount++;
    }
   }
  return upCount;
}

int main () {

 int b[] = { 2, 3, 1, -6, 8, -3, -1, 2};
 int lenb = sizeof(b)/sizeof(b[0]);
 cout << nUpCount(b, lenb, 5) << endl;
 
 int c[] = { 6, 3, 1};
 int lenc = sizeof(c)/sizeof(c[0]);
 cout << nUpCount(c, lenc, 6) << endl;
 
 int d[] = { 1, 2, -1, 5, 3, 2, -3};
 int lend = sizeof(d)/sizeof(d[0]);
 cout << nUpCount(d, lend, 20) << endl;

 return 0;
}
