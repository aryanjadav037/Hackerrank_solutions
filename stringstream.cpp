#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    int tempint;
    char tempchar;
    vector<int> result;
    stringstream inputstream(str);

    while (inputstream >> tempint) {
        result.push_back(tempint);
        inputstream >> tempchar; // To skip the comma
    }

    return result;
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
