#include <iostream>

using namespace std;

int isNice(int a[], int len) {
 int isNice = 1;
 if (len < 2) {isNice = 0;}
 for (int i=0; i < len; i++) {
  for (int j=0; j < len; j++) { 
    if ( a[i] - 1 == a[j] || a[i] + 1 == a[j]) {            
              isNice = 1;
              break;  
         }
    else {isNice = 0;}
     }
    if (isNice == 0) {break;}
  }
  return isNice;
}

int main () {
 int a[] = {1, 1, 1, 2, 1, 1};
 int len = sizeof(a)/sizeof(a[0]);
 cout << isNice(a, len) << endl;
 return 0;
}
