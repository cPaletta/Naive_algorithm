#include <iostream>
using namespace std;


int naive_Search(string& text, string& pattern) {
    int n = text.length();
    int m = pattern.length();

    for (int s = 0; s <= n - m; ++s) {
        int i;
        for (i = 0; i < m && text[s + i] == pattern[i]; ++i);

        if (i == m) {
            // Znaleziono wzorzec na pozycji s
            return s;
        }
    }

    return -1; // Wzorzec nie został znaleziony
}

int main() {
    string text = "ababdcababcadbcabc";
    string pattern = "abc";

    int result = naive_Search(text, pattern);

    if (result != -1) {
        cout << "Wzorzec znaleziony na pozycji " << result << endl;
    }
    else {
        cout << "Wzorzec nie znaleziony" << endl;
    }

    return 0;
}
