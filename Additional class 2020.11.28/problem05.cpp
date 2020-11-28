#include <iostream>

using namespace std;

/*
    Да се състави програма чрез която се въвеждат n, 5 <= n <= 35, естествени числа от интервала [100; 990] в едномерен масив.
    Стойността на всеки от въведените елементи на масива да се закръгли към число кратно на 10. Елементите с четни индекси се
    закръглят към по-малкото число, а елементите с нечетни индекси към по-голямото число.
    Да се изведат началната и крайната сума на елементите.
*/

int main()
{
    unsigned sz;
    unsigned arr[35];
    unsigned sum1=0, sum2=0;

    do {
        cin >> sz;
    } while (sz < 5 || sz > 35);

    for (unsigned i=0; i< sz; i++){
        cin >> arr[i];
        sum1 += arr[i];
    }

    for (unsigned i=0; i< sz; i++){
        if (i%2 == 0){
            arr[i] = (arr[i]/10) * 10;
        }
        else {
            arr[i] = (arr[i]/10 + 1) * 10;
        }

        sum2 += arr[i];
    }

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;

    return 0;
}
