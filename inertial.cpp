#include <iostream>
#include <cmath>

using namespace std;

int isInertial (int a[], int len) {
 int i, j, odd, max;
 i = j = max = a[0];
 odd = 0;
 int OddArray[len];
 
 for (i=0; i < len; i++) {
  if (a[i] % 2 != 0) {OddArray[odd++] = a[i];}
  if (a[i] > max) {max = a[i];}
 }

 if (max % 2 != 0 || odd < 1) {return 0;}

 for(i=0; i < odd; i++) {
    for (j=0; j < len; j++) {
       if (a[j] % 2 == 0 && a[j] != max && a[j] > OddArray[i]) {return 0;}
    }
 }

 return 1;
 }
  
int main () {

 int b[] = {1, 1, 1, 1, 1, 1, 2};
 int length = sizeof(b)/sizeof(b[0]);
 cout << isInertial(b, length) << endl;
 
 return 0;
}
