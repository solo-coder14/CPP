#include <iostream>
#include <string>

using namespace std;

int first = -1;
int last = -1;

void search(const string& str, int dex, char element) {
    if (dex == str.length()) {
        cout << first << "\n" << last << endl;
        return;
    }
    char currChar = str[dex];
    if (currChar == element) {
        if (first == -1) {
            first = dex;
        } else {
            last = dex;
        }
    }
    search(str, dex + 1, element);
}

int main() {
    string str = "abaacdaefaah";
    search(str, 0, 'a');
    return 0;
}
