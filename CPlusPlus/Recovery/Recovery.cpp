#include <iostream>
#include <vector>
#include <iterator>  
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> availableNumbers;

    for (size_t i = 0; i < n; ++i) {
        cin >> b[i];
        availableNumbers.push_back(n - i);
    }

    for (size_t i = 0; i < b.size(); i++) {
        a[i] = availableNumbers[b[i]];
        availableNumbers.erase(availableNumbers.begin() + b[i]);
    }

    copy(a.begin(), a.end(), ostream_iterator<int>(cout, " "));

    return 0;
}
