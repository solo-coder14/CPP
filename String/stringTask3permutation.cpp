#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T; // Read number of test cases

    for (int t = 1; t <= T; t++) {
        int N, K;
        cin >> N >> K;

        // Create a string with the first N capital letters
        string letters = "";
        for (int i = 0; i < N; i++) {
            letters += ('A' + i);
        }

        // Print case number
        cout << "Case " << t << ":\n";

        // Generate and print the first K permutations
        int count = 0;
        do {
            cout << letters << endl;
            count++;
            // if (count == K) break;
        } while (next_permutation(letters.begin(), letters.end()));
    }

    return 0;
}
