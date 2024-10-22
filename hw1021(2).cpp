#include <iostream>

using namespace std;

void printSubset(char subset[], int size) {
    cout << "{ ";
    for (int i = 0; i < size; ++i) {
        cout << subset[i] << " ";
    }
    cout << "} ";
}

void generatePowerset(char set[], char subset[], int n, int index, int subsetSize) {

    if (index == n) {
        printSubset(subset, subsetSize);
        return; 
    }

    generatePowerset(set, subset, n, index + 1, subsetSize);

    subset[subsetSize] = set[index];  
    generatePowerset(set, subset, n, index + 1, subsetSize + 1);
}

void powerset(char set[], int n) {
    char subset[n]; 
    generatePowerset(set, subset, n, 0, 0);
}

int main() {
    char S[] = {'a', 'b', 'c'};
    int n = sizeof(S) / sizeof(S[0]);

    cout << "Powerset of S: ";
    powerset(S, n);

    return 0;
}
