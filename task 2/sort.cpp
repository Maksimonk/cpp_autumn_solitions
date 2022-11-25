#include <iostream>
#include <vector>
using namespace std;


int Sort(vector<double>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int j = i - 1;
        while (j > -1 and arr[j] > arr[j + 1]) {
            swap(arr[j], arr[j + 1]);
            j--;
        }
    }
    return 0;
}

int main() {
    setlocale(LC_ALL, "Russian");

    cout << "Введите длину массива, который нужно отсортировать: ";
    int n;
    cin >> n;

    cout << "Введите это массив (действительные числа, разделителем дробной и целой частей является точка): ";
    double element;
    vector<double> arr;
    for (int i = 0; i < n; i++) {
        cin >> element;
        arr.push_back(element);
    }
    cout << "Отсортированный массив: ";
    Sort(arr);
    for (int i = 0; i < n - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[n - 1];
    return 0;
}