#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n; 
    vector<int>v(n); 
    for(auto&i:v) 
        cin >> i;
    sort(v.begin(), v.end()); 
    for(auto&i:v)
        cout << i << ' ';
    return 0;
    
}
