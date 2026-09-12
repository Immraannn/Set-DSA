#include <iostream>
#include <unordered_set>
using namespace std;
int main() {
    unordered_set<int> s;
    // Insert
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(20);  // duplicate, ignored
    s.insert(10);  // duplicate, ignored
    // Print
    for(int x : s) {
        cout << x << " ";
    }
    cout << endl;
    // Search
    if(s.find(20) != s.end()) {
        cout << "20 exists" << endl;
    }
    // Delete
    s.erase(20);
    // Check after deletion
    if(s.find(20) == s.end()) {
        cout << "20 does not exist" << endl;
    }
    return 0;
}
unordered_set<int> s;

s.insert(x);          // Insert x
s.erase(x);           // Delete x
s.find(x);            // Returns iterator
s.count(x);           // 1 if exists, 0 otherwise
s.size();             // Number of elements
s.empty();            // Check empty
s.clear();            // Remove everything
