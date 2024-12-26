#include <iostream>
 
using namespace std;
 
int main() {
    long long x, y, z, w;
    cin >> x >> y >> z >> w;
 
    long long firstI = max(x, z);
    long long LastI = min(y, w);
 
    if (firstI <= LastI) {
        cout << firstI << " " << LastI << endl;
    } else {
        cout << -1 << endl;
    }
 
    return 0;
}
