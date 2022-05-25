#include <iostream>

using namespace std;

int isMeera(int n) {
 int isMeera = 0;
 int countFactors = 0;
 for (int i=2; i < n; i++) {
    if (n % i == 0) {countFactors += 1;}
  }

 if (n % countFactors == 0) {isMeera = 1;}
 return isMeera;
}

int main () {
 cout << "Is 30 a Meera Number? " << isMeera(30) << endl;
 cout << "Is 6 a Meera Number? " << isMeera(6) << endl;
 cout << "Is 21 a Meera Number? " << isMeera(21) << endl;
 return 0;
}
