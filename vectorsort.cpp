#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    int num;
    
    vector <int> v;
    
    for(int i=0; i<n; i++){
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    
    for(int i=0; i<n; i++){
        cout << v[i] << " ";  
    } 
    
    return 0;
}
