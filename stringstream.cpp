/*String stream is to convert int to string or string to int. The example shows how it has to be used.*/

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	stringstream ss(str);
    vector <int> intvec;
    char c;
    int res;
    while(ss >> res){
        intvec.push_back(res);
        ss >> c;
    }
    return intvec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
