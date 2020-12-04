#include <iostream>

using namespace std;

/*
    Запълнете с естествени числа квадратна таблица с размери 6 реда и 6 колони.
    Да се състави програма, чрез която се намира сумата на всички елементи от редовете с четни номера:
    2,4 и 6 (броенето на редовете започва от 1).
    Програмата да извежда и сумата на всеки отделен ред с четен пореден номер.

    Пример:
    11 12 13 14 15 16
    21 22 23 24 25 26
    31 32 33 34 35 36
    41 42 43 44 45 46
    51 52 53 54 55 56
    61 62 63 64 65 66

    Изход:
    Row 2 has a sum of 141
    Row 4 has a sum of 261
    Row 6 has a sum of 381
    Sum of all elements in these rows: 783
*/

int main()
{
    unsigned arr[6][6];

    for (int i=0; i<6; i++){
        for (int j=0; j<6; j++){
            cin >> arr[i][j];
        }
    }

    unsigned sumAll = 0;

    for (int i=1; i<6; i+=2){
        unsigned sumCurr = 0;

        for (int j=0; j<6; j++){
                sumCurr += arr[i][j];
        }

        cout << "Row " << i+1 << " has a sum of " << sumCurr << endl;
        sumAll += sumCurr;
    }

    cout << "Sum of all elements in these rows: " << sumAll << endl;

    return 0;
}
