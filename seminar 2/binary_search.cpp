#include <iostream>
#include <vector>
using namespace std;

bool Are_You_Natural(double a) { // проверка, что вводимое число является натуральным
    // switch case работает только с целочисленными и перечисляемыми типами данных, как я понял, тут его использовать не получится, поэтому баллы снижать за это не надо)))
    // на stackoverflow тоже советовали просто использовать if/else if/else
    // в первом задании, кстати, по этой же причине использовались if и else
    // https://stackoverflow.com/questions/25813950/adding-boolean-expressions-switch-statements-in-c
    
    if (a == int(a) && a > 0) {
        return true;
    }
    else {
        return false;
    }
    
}


bool Binary_Search(vector<double>& arr, double look_for) {
    int low = 0, max = arr.size() - 1;
    while (low < max) {
        int middle = low + (max - low) / 2;
        if (arr[middle] == look_for) {
            return true;
        }
        else if (arr[middle] > look_for) {
            max = middle;
        }
        else {
            low = middle;
        }
    }
    
    return arr[low] == look_for;
}


int main() {
    setlocale(LC_ALL, "Russian");
    vector<double> arr;
    cout << "Данная программа выполняет проверку наличия числа в отсортированном по возрастанию элементов (действительные числа) массиве." << endl << "Введите размер массива: ";
    double n; // размер массива
    cin >> n;
    if (Are_You_Natural(n) == false) {
        cout << "n должно быть натуральным числом";
    } 
    else { // здесь n является натуральным
        arr.reserve(n);
        double element;
        cout << "Введите элементы массива в порядке возрастания (разделителем целой и дробной частей числа является точка): ";
        for (int i = 0; i < n; i++) {
            cin >> element;
            arr.push_back(element);
        }
        cout << "Введите число, наличие в массиве которого нужно проверить: ";
        double look_for;
        cin >> look_for;
        if (look_for > arr[n - 1] or look_for < arr[0]) {
            cout << "Числа в массиве нет.";
        }
        else {
            if (Binary_Search(arr, look_for)) {
                cout << "Число в массиве";
            }
            else {
                cout << "Число не в массиве";
            }
        }
        
        // delete[] array_of_elements;
    }
    
    return 0;
}