#include <iostream>
using namespace std;
int main() {
    double a, b, c, discriminant, x_1, x_2, x_1_i, x_2_i;
    cout << "Decimal and integer parts are separated by a dot, not a comma." << endl << "Input \"a\"" << endl;
    cin >> a;
    cout << "Input \"b\"" << endl;
    cin >> b;
    cout << "Input \"c\"" << endl;
    cin >> c;

    discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        x_1_i = sqrt(-discriminant) / (2 * a);
        x_2_i = sqrt(-discriminant) / (2 * a);
        cout << "x_1 = " << -b / (2 * a) << " + " << x_1_i << "i" << endl;
        cout << "x_2 = " << -b / (2 * a) << " - " << x_2_i << "i" << endl;
    }
    else if (discriminant == 0) {
        x_1 = -b / (2 * a);
        cout << x_1;
    }
    else {
        x_1 = (-b + sqrt(discriminant)) / (2 * a);
        x_2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "x_1 = " << x_1 << endl << "x_2 = " << x_2 << endl;
    }
    return 0;
}