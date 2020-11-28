#include <iostream>

using namespace std;

/*
    (Контролно 2019) Въведете цяло число n, не по-голямо от 3000, следвано от n цели числа. Съхранете ги в масив.
    Заменете всяка последователност от три и повече еднакви числа с едно число, равно на сумата на всички положителни числа в масива.
    Пример:					        
    10
    -1 2 3 3 3 -4 2 1 1 1
    Изход:
    -1 2 16 -4 2 16
*/

int main()
{
    unsigned n;
    do {
        cin >> n;
    } while (n > 3000);

    int arr[3000];
    int sum = 0;

    for (unsigned i=0; i<n; i++){
        cin >> arr[i];
        if (arr[i] > 0)
            sum += arr[i];
    }

    int countSame = 1;

    for (int i=1; i<n; i++){
        if (arr[i] == arr[i-1])
            countSame++;
        else if (countSame >=3){
            arr[i - countSame] = sum;

            for (int k=i - countSame + 1; k<n; k++){
                arr[k] = arr[k + countSame - 1];
            }

            n -= countSame - 1;
            countSame = 1;
        }
    }

    if (countSame >= 3){
        arr[n - countSame] = sum;
        n -= countSame - 1;
    }

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
