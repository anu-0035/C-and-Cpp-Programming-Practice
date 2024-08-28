#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to compute the prefix function for the pattern
vector<int> computePrefix(const string& pattern) {
    int m = pattern.size();
    vector<int> prefix(m, 0);
    int k = 0;
    for (int q = 1; q < m; ++q) {
        while (k > 0 && pattern[k] != pattern[q]) {
            k = prefix[k - 1];
        }
        if (pattern[k] == pattern[q]) {
            k++;
        }
        prefix[q] = k;
    }
    return prefix;
}

// Function to find all occurrences of pattern in genome using the KMP algorithm
vector<int> findOccurrences(const string& pattern, const string& genome) {
    vector<int> occurrences;
    int n = genome.size();
    int m = pattern.size();
    vector<int> prefix = computePrefix(pattern);
    int q = 0; // Number of characters matched
    for (int i = 0; i < n; ++i) {
        while (q > 0 && pattern[q] != genome[i]) {
            q = prefix[q - 1];
        }
        if (pattern[q] == genome[i]) {
            q++;
        }
        if (q == m) {
            occurrences.push_back(i - m + 1);
            q = prefix[q - 1]; // Reset q using prefix function
        }
    }
    return occurrences;
}

int main() {
    string pattern, genome;
    cin >> pattern >> genome;

    vector<int> occurrences = findOccurrences(pattern, genome);

    // Output the starting positions where pattern appears as a substring
    for (int pos : occurrences) {
        cout << pos << " ";
    }
    cout << endl;

    return 0;
}

