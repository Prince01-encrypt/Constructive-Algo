#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define ll long long
 
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(1);
    int x1 = 0;
    int x2 = 1;
    int temp;

    for(int i = 0; i < 43; i++) {
        arr.push_back(x1 + x2);
        temp = x1;
        x1 = x2;
        x2 = temp + x2;
    }
    int index;
    // for(int i = 0; i < n; i++) {
    //     cout << arr[i] << endl;
    // }
    for(int i = 0; i < 45; i++) {
        if(n == arr[i]) {
            index = i;
            break;
        }
    }
    if(n == 0) {
        cout << 0 << " " << 0 << " " << 0;
    }
    else if(n == 1) {
        cout << 1 << " " << 0 << " " << 0;
    }
    else if(n == 2) {
        cout << 1 << " " << 1 << " " << 0;
    }
    else {
        cout << arr[index - 4] << " " << arr[index - 3] << " " << arr[index - 1];
    }
    return 0;
}
