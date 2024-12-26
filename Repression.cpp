#include <iostream>
#include <climits> 
using namespace std;
 
int main() {
    int largest1 = INT_MIN, largest2 = INT_MIN;
 
    int x, y, z;
    cin >> x >> y >> z;
 
    if (x > largest1) {
        largest2 = largest1;
        largest1 = x;
    } else if (x > largest2) {
        largest2 = x;
    }
 
    if (y > largest1) {
        largest2 = largest1;
        largest1 = y;
    } else if (y > largest2) {
        largest2 = y;
    }
 
    if (z > largest1) {
        largest2 = largest1;
        largest1 = z;
    } else if (z > largest2) {
        largest2 = z;
    }
 
    int sum = largest1 + largest2;
    cout << sum << endl;
 
    return 0;
}
