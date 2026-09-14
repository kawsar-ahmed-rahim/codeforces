#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int ans = a*b*c*d;

    cout << (ans%100) << endl;
    
    return 0;
}