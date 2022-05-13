#include <iostream>

using namespace std;

int isStacked(int n){
        int number_sum = 0;
        int isStacked = 0;
        for (int i = 0; i <= n; i++){
            number_sum += i;
            if (number_sum == n){
                isStacked = 1;
                break;
            }
        }
        return isStacked;
    }

int main () {
 cout << isStacked(10) << endl;
 cout << isStacked(7) << endl;
 return 0;
}
