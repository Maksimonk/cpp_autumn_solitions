#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> hexidecimal = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    string name;
    cout << "Product's name: ";
    cin >> name;


    int price;
    cout << "Product's price: ";
    cin >> price;
    string s = "";
    while (price > 0) {
        s = hexidecimal[price % 16] + s;
        price = price / 16;
    } // далее вместо "price" работаем с "s"
    int len = s.length();
    cout << '0';

    string true_false;
    cout << "Is cash-back available for this product? (true/false) ";
    cin >> true_false;

    float temperature;
    cout << "Maximum storing temperature: ";
    cin >> temperature;

    cout << '\n' << name;
    cout << "\nPrice:...........";

    // я честно пытался разобраться с setfill и setw, но ничего не работало (программа не крашилась, но ничего не изменялось),
    // поэтому я не придумал ничего лучше, чем это:
    int i = 0;
    while (i < 8 - len) {
        cout << '0';
        i++;
    }
    cout << s << endl;
    cout << "Has cash-back:......." << true_false;

    cout << "\nMax temperature:......";
    if (temperature > 0) {
        cout << "+";
    }
    cout << temperature;
    return 0;
}