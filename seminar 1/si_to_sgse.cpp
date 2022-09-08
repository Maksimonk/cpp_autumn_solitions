#include <iostream>
using namespace std;
int main() {
    cout << "Choose what you want to transform into a SGSE from SI: \nmagnetic induction B (Tl), \nlength l (m), \npressure P (Pa).\n\n";
    string k = "";
    const int ten = 10;
    float k_value;
    
    
    while (true) {
        cin >> k;
        if (k == "magnetic induction B (Tl)" or k == "magnetic induction B" or k == "magnetic induction" or k == "B" or k == "b") {
            cout << "Input value of " << k << " in SI: ";
            cin >> k_value;
            cout << "Your result is: " << k_value * 10000 << " Gs";
            break;
        }
        else if (k == "length l (m)" or k == "length l" or k == "length" or k == "len" or k == "l") {
            cout << "Input value of " << k << " in SI: ";
            cin >> k_value;
            cout << "Your result is: " << k_value * 100 << " cm";
            break;
        }
        else if (k == "pressure P (Pa)" or k == "pressure P" or k == "pressure" or k == "P" or k == "p" or k == "press") {
            cout << "Input value of " << k << " in SI: ";
            cin >> k_value;
            cout << "Your result is: " << k_value * ten << " din/cm^2";
            break;
        }
        else {
            cout << "\n\nChoose what you want to transform into a SGSE from SI: \nmagnetic induction B, \nlength l, \npressure P.\n\n";
        }
    }
    
    return 0;
}