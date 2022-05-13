#include <iostream>

using namespace std;

int isCentered5(int a[], int len) {
        if(len < 3) return 0;
        int i, j, sum, left = 1;

        for(i = 1; i < len - 1; i++, left++) {
            sum = 0;
            for(j = i; j < len -i; j++) {
                sum += a[j];
                if(sum > 15) {break;}
            }
            // return when true
            if(sum == 15 ) {return 1;}
        }

        return 0;
    }

int main () {
 int a[] = {3, 2, 10, 4, 1, 6};
 int len = sizeof(a)/sizeof(a[0]);
  
 cout << isCentered5(a, len) << endl;
 return 0;
}
