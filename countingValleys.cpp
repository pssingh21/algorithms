#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
    int position = 0;
    int prevPosition = 0;
    int valleyCount = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'U') {
            position++;
        } else {
            position--;
        }
        if (position < 0 && prevPosition >= 0) {
            valleyCount++;
        }

        prevPosition = position;
    }
    cout << valleyCount;
    return valleyCount;
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}