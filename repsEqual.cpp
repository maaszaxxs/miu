#include <iostream>

using namespace std;

int repsEqual(int a[], int len, int n){
		int repsEqual = 0;
		for(int lastIndex = len - 1; lastIndex >= 0 ; lastIndex--){
			int lastDigit  = n % 10;
			n = n / 10;
			if(lastDigit == a[lastIndex]){
				repsEqual = 1;
			}else{
				repsEqual = 0;
				break;
			}
		}
		return repsEqual;
	}

int main () {
  int a[] = { 3, 2, 0, 5};
  int len = sizeof(a)/sizeof(a[0]);
  int n = 32053;
  
  cout << repsEqual(a, len, n) << endl;
  return 0;
}
