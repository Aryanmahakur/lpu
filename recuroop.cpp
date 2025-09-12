#include<iostream>
using namespace std;

int add(int *a, int *b) {
    if (*b == 0)
        return *a;
    int sum = *a + 1;
    int dec = *b - 1;
    return add(&sum, &dec);
}

int main() {
    int x = 5, y = 7;
    cout << add(&x, &y);
    return 0;
}
