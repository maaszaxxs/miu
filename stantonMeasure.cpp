#include <iostream>

using namespace std;

int stantonMeasure(int a[], int len) {
   int onesCount, finalCount;
   onesCount = finalCount = 0;
   
   if (len < 0) {return 0;}
  
   for (int i=0; i < len; i++) {
       if (a[i] == 1) {onesCount++;}
   }
   
   for (int i=0; i < len; i++) {
       if (a[i] == onesCount) {finalCount++;}
   }
 return finalCount;
 }

int main () {
 int b[] = {1, 3, 1, 1, 3, 3, 2, 3, 3, 3, 4};
 int len = sizeof(b)/sizeof(b[0]);
 
 cout << stantonMeasure(b, len) << endl;
 return 0;
}
