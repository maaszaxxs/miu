#include <iostream>
#include <cmath>

using namespace std;

int isGuthrieSequence(int a[], int len) {
 int i, current = 0;
 int prev = a[0];
 
 for(i = 1; i < len; i++) {
    if (a[len-1] != 1) {return 0;}
    if (prev % 2 == 0) {current = prev/2;}
    else {current = (prev * 3) + 1;}
    if (current != a[i]) {return 0;}
    prev = a[i];
    }
 return 1;
}

int main () {

 int b[] = {8, 4, 1};
 int len = sizeof(b)/sizeof(b[0]);

 cout << isGuthrieSequence(b, len) << endl;
 return 0;
}

