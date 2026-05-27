#include <iostream>
#include <string>

using namespace std;

int main() {
    char str[25], reverse[25] = {'\0'};
    int i, len = 0, flag;

    cout << "Enter a string: ";
    cin.getline(str, 25);

    // Keep going through each character of the string till its end to find length
    for (len = 0; str[len] != '\0'; len++);

    // Reverse the string
    for (i = len - 1; i >= 0; i--) {
        reverse[len - i - 1] = str[i];
    }
    reverse[len] = '\0'; // Ensure the reversed string is null-terminated

    /* Check if the string is a Palindrome */
    flag = 1;
    for (i = 0; i < len; i++) {
        if (reverse[i] != str[i]) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        cout << "The string \"" << str << "\" is a palindrome.";
    } else {
        cout << "The string \"" << str << "\" is not a palindrome.";
    }

    return 0;
}