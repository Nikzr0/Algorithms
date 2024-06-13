#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long startElement = ceil(sqrt(a));

    long long endElement = floor(sqrt(b));

    long long output = (endElement - startElement + 1);

    if (output < 0) {
        output = 0;
    }

    cout << output << endl;

    return 0;
}
