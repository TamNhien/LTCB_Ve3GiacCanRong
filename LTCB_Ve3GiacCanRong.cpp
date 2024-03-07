#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap chieu cao tam giac: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cout << string(n - i, ' ') << (i == 1 || i == n ? string(2 * i - 1, '*') : '*' + string(2 * i - 3, ' ') + '*') << endl;
    }

    return 0;
}
