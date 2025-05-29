#include <iostream>
#include <string>

using namespace std;

void deleteSubstring(string& text, const string& substring) {
    size_t pos = 0;

    while ((pos = text.find(substring, pos)) != string::npos) {
        text.erase(pos, substring.length());
    }
}

int main() {
    string inputText;
    string substring;

    // Get input text from the user
    cout << "Enter the text: ";
    getline(cin, inputText);

    // Get the substring to delete
    cout << "Enter the substring to delete: ";
    getline(cin, substring);

    // Delete the substring from the text
    deleteSubstring(inputText, substring);

    // Display the modified text
    cout << "Modified text: " << inputText << endl;

    return 0;
}
