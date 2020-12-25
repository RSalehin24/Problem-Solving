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
    int e;
    cin >> e;
    e = e-1;
    v.erase(v.begin()+e);
    
    int e0, e1;
    cin >> e0 >> e1;
    e0 = e0-1;
    e1 =e1-1;
    v.erase(v.begin()+e0, v.begin()+e1);
    
    cout << v.size() << endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}
