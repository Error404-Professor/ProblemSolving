#include <iomanip>
#include <iostream>
using namespace std;
 
int main() {
    double R;
    double PI = 3.14159;
    cin >> R;
    double Area = PI * R * R;
    cout << fixed << setprecision(4)<<"A="<< Area;
 
}
