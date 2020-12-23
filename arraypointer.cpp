/*Use Case: When the array is too large and it's size for different dimension are variable.*/

#include <iostream>
using namespace std;


int main() {
    
    int n, q, k;
    cin >> n >> q;
    
    int** arr = new int*[n];
    
    for(int i=0; i<n; i++){
        cin >> k;
        arr[i] = new int[k];
        
        for(int j=0; j<k; j++){
            cin >> arr[i][j];
        }
    }
    
    for(int i=0; i<q; i++){
        int q1, q2;
        cin >> q1 >> q2;
        cout << arr[q1][q2] <<endl;
    }
    
    return 0;
}
