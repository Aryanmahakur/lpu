#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char> &s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
        // Swap characters
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main() {
    vector<char> s = {'h','e','l','l','o'};
    reverseString(s);

    // Print the reversed string
    for(char c : s) {
        cout << c << " ";
    }
    cout << endl;

    vector<char> s2 = {'H','a','n','n','a','h'};
    reverseString(s2);
    for(char c : s2) {
        cout << c << " ";
    }
    cout << endl;

    return 0;
}
