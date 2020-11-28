#include <iostream>

using namespace std;

/*
    Въвежда се естествено число n, 5 <= n <= 1005. Да се въведат n броя двуцифрени естествени числа в едномерен масив.
    Програмата да изведе сумата на всички елементи на масива, чийто индекси са равни на число от редицата на Фибоначи.
    Началният индекс в масива е 1.
    Пример: n=21
        51  27  44  50  99  74  58  28  62  84  45  75  71  97  71  51  35  72  67  46  91
    Изход: 462
    (51+51+27+44+99+28+71+91=462)
*/

int main()
{
    unsigned n;
    do {
        cin >> n;
    } while (n<5 || n > 1006);

    unsigned arr[1006];

    for (int i=1; i<=n; i++){
        cin >> arr[i];
    }

    unsigned sum = 0;

    unsigned first = 1, second = 1, third = first + second;

    sum += arr[first] + arr[second];

    while (third <= n){
        first = second;
        second = third;
        sum += arr[third];
        third = first + second;
    }

    cout << "sum = " << sum << endl;

    return 0;
}
