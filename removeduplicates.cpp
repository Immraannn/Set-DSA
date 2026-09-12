#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main() {
    vector<int> arr = {1, 2, 2, 3, 4, 4, 5, 1};
    unordered_set<int> s;
    for(int x : arr) {
        s.insert(x);
    }
    for(int x : s) {
        cout << x << " ";
    }
    return 0;
}
