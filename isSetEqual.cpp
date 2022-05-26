#include <iostream>

using namespace std;

int isSetEqual(int a[], int len_a, int b[], int len_b) {
 int isSetEqual = 0;
 for (int i=0; i < len_a; i++) {
    for (int j=0; j < len_b; j++) {
       if (a[i] == b[j]) {
          isSetEqual = 1;
          break;
         }
       else {isSetEqual = 0;} 
      } 
   if (isSetEqual == 0) {break;}
  }

 return isSetEqual;
}

int main () {
 int a[] = {1, 7, 8};
 int b[] = {1, 7, 6};
 int len_a = sizeof(a)/sizeof(a[0]);
 int len_b = sizeof(b)/sizeof(b[0]);

 cout << isSetEqual(a, len_a, b, len_b) << endl;
 return 0;
}
