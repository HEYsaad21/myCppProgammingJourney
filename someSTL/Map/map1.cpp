#include <iostream>
#include<map>
using namespace std;

int main() {
    // Create a map: key = int, value = string
    map<int, string> m;

    // 1. INSERTION
    m.insert({1, "apple"});    // insert pair
    m[2] = "banana";           // insert if not exists / update if exists
    m.emplace(3, "cherry");    // faster insertion (C++11+)

    // 2. ACCESS
    cout << m[1] << endl;      // "apple"
    cout << m.at(2) << endl;   // "banana"
    // cout << m.at(10);       // throws out_of_range

    // 3. SEARCH
    if (m.find(3) != m.end()) {
        cout << "Key 3 found -> " << m[3] << endl;
    }

    // 4. COUNT (only 0 or 1 for map)
    cout << "Count of key 2 = " << m.count(2) << endl;

    // 5. ERASE
    m.erase(2);                // erase by key
    m.erase(m.find(1));        // erase by iterator

    // 6. TRAVERSAL
    for (auto &p : m) {
        cout << p.first << " => " << p.second << endl;
    }

    // 7. SIZE / EMPTY
    cout << "Size = " << m.size() << endl;
    cout << "Empty? " << (m.empty() ? "Yes" : "No") << endl;

    // 8. BOUNDS
    m[10] = "mango";
    m[20] = "orange";
    auto it = m.lower_bound(10);   // >= 10
    cout << "Lower bound(10) = " << it->first << endl;

    auto it2 = m.upper_bound(10);  // > 10
    cout << "Upper bound(10) = " << it2->first << endl;
}
