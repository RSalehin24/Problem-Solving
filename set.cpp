#include <iostream>
#include <set>
using namespace std;


int main() {
    int q;
    cin >> q;
    int t, num;
    set<int> s;
    for(int i=0; i<q; i++){
        cin >> t >> num;
        if(t==1) s.insert(num);
        if(t==2) s.erase(num);
        if(t==3){
            if(s.find(num) == s.end()) cout << "No" << endl;
            else cout << "Yes" << endl;
            /*If find() doesn't find the num it will return the end() of set*/
        }
    }  
    return 0;
}





