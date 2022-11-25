#include <iostream>
using namespace std;

int fibonacci (int num)
{
    if (num <= 1)
        return num;
    return fibonacci(num-1) + fibonacci (num-2);
}

int main() {
    int num;
    cin >> num;
    for (int a = 1; a <= num; a++) {
        cout << fibonacci(a) << endl;
    }
    return 0;
}
