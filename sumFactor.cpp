#include <iostream>

using namespace std;

int sumFactor(int a[], int len) {
 int sum = 0;
 int sumFactor = 0;

 if (len < 0) {sumFactor = 0;} 
 for (int i=0; i < len; i++) {
     sum += a[i];
 }
 
 for (int j=0; j < len; j++) {
     if (sum == a[j]) {sumFactor++;}
 }
 return sumFactor;
}

int main () {

 int b[] = {0, 0, 0};
 int len = sizeof(b)/sizeof(b[0]);
 
 cout << sumFactor(b, len) << endl;
 return 0;
}

