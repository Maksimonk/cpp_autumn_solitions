#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cout << "Size of array :";
    std::cin >> n;
    std::vector<int> A(n + 1);
    for (int i = 1; i <= n; ++i) {
        std::cin >> A[i];
    }
    std::sort(A.begin(), A.end(), [](int a, int b) {
        return a > b;
    });
    for (auto i : A) {
        std::cout << i << " ";
    }
    std::cout << "" << std::endl;
    
    std::sort(A.begin(), A.end(), [](int a, int b) {
        return a < b;
    });
    for (auto i : A) {
        std::cout << i << " ";
    }
}
