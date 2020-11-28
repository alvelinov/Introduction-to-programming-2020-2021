#include <iostream>

using namespace std;

/*
    Да се напише програма, която намира колко често се срещат цифрите на дадено цяло число. Числото може да съдържа между 1 и 12 цифри.
    Пример:
        n = 4385643561
    Изход:  0 – 0    5 – 2
            1 – 1    6 – 2
            2 – 0    7 – 0
            3 – 2    8 – 1
            4 – 2    9 – 0
*/

int main()
{
    long long n;
    int arr[10] = {0, };

    cin >> n;

    if (n < 0)
        n = -n;

    while(n){
        int tmp = n%10;
        arr[tmp] = arr[tmp] + 1;
        n /= 10;
    }

    for (int i=0; i<10; i++){
        cout << i << " - " << arr[i] << endl;
    }

    return 0;
}
