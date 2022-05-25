#include <iostream>

using namespace std;

int isBean(int a[], int len) {
  int isBean = 0; int count9 = 0; int count13 = 0; 
  int count7 = 0; int count16 = 0;
  
  for (int i=0; i < len; i++) {
    if (a[i] == 9) {
       count9 += 1;
      }
    else if (a[i] == 13) {
       count13 += 1;
      }
    else if (a[i] == 7) {
       count7 += 1;
      }
     else if (a[i] == 16) {
       count16 += 1;
      }
    }
   if (count9 == 1 && count13 == 1 || count7 ==1 && count16 != 1) {
        isBean = 1;
      }
   return isBean;
}

int main () {

 int a[] = {9, 6, 18};
 int len = sizeof(a)/sizeof(a[0]);

 cout << isBean(a, len) << endl;
 return 0;
}
