#include <vector>
#include <iostream>
using namespace std;


int main() {
    
    int n;
    cin >> n; 
    
    int num;
    vector<int> v;
    for(int i=0; i<n; i++){
        cin >> num;
        v.push_back(num);
    }
    
    int q;
    cin >> q;
    for(int i=0; i<q; i++){
        cin >>num;
        vector<int>::iterator low = lower_bound(v.begin(), v.end(), num);
       if (v[low - v.begin()] == num)
           cout << "Yes " << (low - v.begin()+1) << endl;
       else
           cout << "No " << (low - v.begin()+1) << endl;
        
    }
    return 0;
}
