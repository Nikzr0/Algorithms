#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }

    vector<int> a(n);
    set<int> available;
    for (int i = 1; i <= n; ++i) {
        available.insert(i);
    }

    // Process b array from right to left
    for (int i = n - 1; i >= 0; --i) {
        // Find the (b[i]+1)-th smallest element in the set
        auto it = available.begin();
        advance(it, b[i]);
        a[i] = *it;
        // Remove the used element from the set
        available.erase(it);
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << (i == n - 1 ? '\n' : ' ');
    }

    return 0;
}