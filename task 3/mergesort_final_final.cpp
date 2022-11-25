#include <iostream>
#include <vector>

void Merge(std::vector<int>& A, int first, int last) {
    int middle, begin, end, j;
    std::vector<int> mas(100);
    middle = (first + last) / 2;
    begin = first;
    end = middle + 1;
    for (int j = first; j <= last; ++j)
        if ((begin <= middle) and ((end > last) or (A[begin] < A[end]))) {
            mas[j] = A[begin];
            ++begin;
        }
        else {
            mas[j] = A[end];
            ++end;
        }
    for (int j = first; j <= last; ++j) {
        A[j] = mas[j];
    }
}

void MergeSort(std::vector<int>& A, int first, int last) {
    if (first < last) {
        MergeSort(A, first, (first + last) / 2);
        MergeSort(A, (first + last) / 2 + 1, last);
        Merge(A, first, last);
    }
}

int main() {
    int n;
    std::cout << "Enter size of array : ";
    std::cin >> n;
    std::vector<int> A(n + 1);
    for (int i = 1; i <= n; ++i) {
        std::cin >> A[i];
    }
    MergeSort(A, 1, n);
    std::cout << "Sorted array : ";
    for (int i = 1; i <= n; ++i) {
        std::cout << A[i] << " ";
    }
    return 0;
}
