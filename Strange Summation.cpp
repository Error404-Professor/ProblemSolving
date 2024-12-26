#include <iostream>
using namespace std;
 
int main() {
    long long x, y;
    int LastD1, LastD2;
    cin >> x >> y;
    LastD1 = x % 10;
    LastD2 = y % 10;
   double  sum = LastD1 + LastD2;
    cout << sum << endl;
    return 0;
}
