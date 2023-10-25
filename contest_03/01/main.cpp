#include <iostream>
#include <vector>

std::vector<int> mergeSortedSequences(const std::vector<int>& seq1, const std::vector<int>& seq2) {
    std::vector<int> mergedSeq;
    int i = 0;  // Индекс для seq1
    int j = 0;  // Индекс для seq2

    while (i < seq1.size() && j < seq2.size()) {
        if (seq1[i] <= seq2[j]) {
            mergedSeq.push_back(seq1[i]);
            i++;
        } else {
            mergedSeq.push_back(seq2[j]);
            j++;
        }
    }

    while (i < seq1.size()) {
        mergedSeq.push_back(seq1[i]);
        i++;
    }

    while (j < seq2.size()) {
        mergedSeq.push_back(seq2[j]);
        j++;
    }

    return mergedSeq;
}

int main() {
    int n; 
    std::cin >> n;

    std::vector<int> seq1(n);
    for (int i = 0; i < n; i++) {
        std::cin >> seq1[i];
    }

    int m; 
    std::cin >> m;

    std::vector<int> seq2(m);
    for (int i = 0; i < m; i++) {
        std::cin >> seq2[i];
    }

    std::vector<int> mergedSequence = mergeSortedSequences(seq1, seq2);

    for (int i = 0; i < mergedSequence.size(); i++) {
        std::cout << mergedSequence[i];
        if (i != mergedSequence.size() - 1) {
            std::cout << " ";
        }
    }

    return 0;
}