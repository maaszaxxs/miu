#include <iostream>
#include <cmath>

using namespace std;

int isPerfectSquare(int n) {
     if (n < 0) { return 0; }
      int i, ans;
        for(i = 1; ; i++) {
            ans = i * i;
           if (n < ans) { break; }
        }
    return ans;
 }

int main() 
{
  cout << isPerfectSquare(-5) << endl;
  return 0;
}
