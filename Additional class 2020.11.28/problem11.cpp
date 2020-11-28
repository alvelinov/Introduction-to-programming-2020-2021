#include <iostream>

using namespace std;

/*
  Въвежда се естествено число от клавиатурата. След това се въвеждат номерата две различни позиции на битове в двоичното му
  представяне. Програмата трябва да размени битовете на тези две позиции (приемаме, че са подадени валидни позиции). Изведете промененото число.
  Пример: 10 1 5
  Изход: 40
*/

int main()
{
    unsigned num;
    cin >> num;

    unsigned pos1, pos2;
    cin >> pos1 >> pos2;

    unsigned mask1 = (1 << pos1);
    unsigned mask2 = (1 << pos2);

    unsigned bit1, bit2;

    bit1 = !!(mask1 & num);
    bit2 = !!(mask2 & num);

    if (bit1 == bit2)
        cout << num;
    else {
        if (bit1 == 1){
            num = num | (1 << pos2);
        } else {
            num = num & ~(1 << pos2);
        }

        if (bit2 == 1){
            num = num | (1 << pos1);
        } else {
            num = num & ~(1 << pos1);
        }

        cout << num;
    }

    // Алтернативно решение на един ред
    // ( !!(num & (1 << pos1)) != !!(num & (1 << pos2)) ) ? cout << ( num ^ ((1 << pos1) | (1 << pos2)) ) << endl : cout << num << endl;

    return 0;
}
