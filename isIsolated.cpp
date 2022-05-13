#include <iostream>

using namespace std;

int isIsolated(long n) {
 long square, cube = 0;
 int isIsolated = 1;

        if(n < 1 || n > 2097151) {
            return -1;}
        else{
            square = n * n;
//            cout << "square: " << square << endl;
            cube = square * n;
 //           cout << "cube: " << cube << endl;

         while (square != 0) {
                 int square10 = square % 10;
                 cube = n * n * n;
            while (cube != 0){
                     int cube10 = cube % 10;
 //                    cout << "square10: " << square10 << endl;
 //                    cout << "cube10: " << cube10 << endl;
                    if (square10 == cube10) {
                       isIsolated = 0;
                       break;
                      }
                    cube /= 10;
                }
            if (isIsolated == 0) {
                  break;}

                square /= 10;
         
   //             cout << "square: " << square << endl;
 //               cout << "cube: " << cube << endl;
            }
          }
     return isIsolated;
}

int main () {
  cout << isIsolated(162) << endl;
  cout << isIsolated(163) << endl;
   return 0;
}
