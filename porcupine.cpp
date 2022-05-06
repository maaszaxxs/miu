#include <iostream>
#include <cmath>

using namespace std;

int findPorcupineNumber(int n) {
 int i, flag, porcupine = 0;
        
        if(n % 2 == 0){ n += 1;}
        else { n += 2;}

        for( ; ;n += 2 ) {
            flag = 1;
            for(i = 3; i < n; i += 2) {
                if(n % i == 0) {
                    flag = 0;
                    break;
                }
            }
        
             porcupine = n;
             if(flag == 1 && porcupine % 10 == 9) { break;}

        }
        return porcupine;
    }

int main () {

 cout << "Find the Porcupine Number of 19: " << findPorcupineNumber(19) << endl;
 return 0;
}
