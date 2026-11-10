#include <iostream>
#include <vector> 

using namespace std;

int main() {
    int n = 0;
    cout << "Enter n: ";
    cin >> n; 
    
    vector<int> arr(n, -1);
    
    for(int i = 0; i < n; i++) {
        arr[i] = i;
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "\t";
    }
    
    return 0;
}
