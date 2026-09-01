#include <iostream>
using namespace std;

int main() {
    int m,n,x;
    cin >> m;
    for(int i=1; i<m;i++){
        cin >> n >> x;
        int arr[n];
        int prev = 0;
        for(int j=1;j<n;j++){
            cin >> arr[j];
            int r = arr[j]-prev;
            int ans = max(r)
            prev = arr[j];
        }

    }

    return 0;
}