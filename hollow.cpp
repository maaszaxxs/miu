#include <iostream>

using namespace std;

int isHollow(int a[], int len) {
 int center = len/2;
 int startCount = 0;
 int endCount = 0; 
 if (a[center - 1] == 0 && a[center] == 0 && a[center + 1] == 0) {
    for (int i = 0; i < (center -1); i++) {
        if (a[i] != 0) { startCount++;}
     }
    for (int j = len-1; j > (center + 1); j--) {
        if (a[j] != 0) {endCount++;}
     }
    if (startCount == endCount) {return 1;}
  }
  
 return 0;
}

int main () {

 int a[] = {1, 2, 4, 9, 0, 0, 0, 3, 4, 5};
 int len = sizeof(a)/sizeof(a[0]);
 cout << isHollow(a, len) << endl;

 return 0;
}
