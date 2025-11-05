#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Введіть два числа: ";
    cin >> a >> b;

    int sum = 0;
    if (a > b) swap(a, b); 

    for (int i = a; i <= b; i++) {
        if (i % 2 == 0)
            sum += i;
    }

    cout << "Сума парних чисел = " << sum << endl;
    return 0;
}

