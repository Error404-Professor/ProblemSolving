#include <iostream>
using namespace std;
 
int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;
    long long difference = (A * B) - (C * D);
    cout << "DIFERENCA = " << difference << endl;
    return 0;
}