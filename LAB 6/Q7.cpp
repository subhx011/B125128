#include <iostream>
using namespace std;
int main() {
    char text[50];
    int digits = 0;
    int alphabets = 0;
    int space = 0;
    cout << "Enter a sentence: ";
    cin.getline(text, 50);
    char *ptr = text;
    while (*ptr != '\0') {
        if (isdigit(*ptr))
            digits++;
        else if (isalpha(*ptr))
            alphabets++;
        else if (*ptr == ' ')
            space++;
        ptr++;
    }
    cout << "Number of digits: " << digits << endl;
    cout << "Number of alphabets: " << alphabets << endl;
    cout << "Number of spaces: " << space << endl;

    return 0;
}











