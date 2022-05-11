#include <iostream>

using namespace std;

int NUnique(int a[], int len, int n){
		int isNUnique = 0;
		if(len > 2){
			for(int index = 0; index < len; index++){
				for(int innerIndex = index+1; innerIndex < len; innerIndex++){
						if(a[index]+a[innerIndex] == n){
							if(isNUnique == 0){
								isNUnique = 1;
							}else{
								isNUnique = 2;
								break;
							}
						}
				}
				if(isNUnique == 2){
					isNUnique = 0;
					break;
				}
			}
		}
		return isNUnique;
	}

int main () {
 int a[] = {7, 3, 3, 2, 4};
 int len = sizeof(a)/sizeof(a[0]);
 cout << NUnique(a, len, 11) << endl;
 return 0;
}

