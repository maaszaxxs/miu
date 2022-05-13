#include <iostream>

using namespace std;

int isVanilla(int a[], int len) {
  int isVanilla = 1;
        if(len == 0)
            return 1;
        int digit = a[0] % 10;
        for (int i = 0; i < len; i++){
            if(a[i] < 0)
                a[i] = -1 * a[i];
            while (a[i] != 0){
                if(digit != a[i] % 10){
                    isVanilla = 0;
                    break;
                }
                a[i] /= 10;
            }
            if(isVanilla == 0)
                break;
        }
        return isVanilla;
}

int main () {
  int a[] = {9, 999, 99999, -9999};
  int len = sizeof(a)/sizeof(a[0]);
  cout << isVanilla(a, len) << endl;
  return 0;
}
