#include <iostream>

using namespace std;

int isBalanced(int a[], int len) {
 int isBalanced = 1;
 for (int i=0; i < len; i++) {
  if (i % 2 == 0) {
   if (a[i] % 2 != 0) {
     isBalanced =  0;
     break;}
   }
  else if (i % 2 != 0) {
    if (a[i] % 2 == 0) {
       isBalanced = 0;
        break;}
    }
  }

 return isBalanced;
}

int main () {
 int a[] = {16, 6, 2, 3};
 int len = sizeof(a)/sizeof(a[0]);

 cout << isBalanced(a, len) << endl;
 return 0;
}
