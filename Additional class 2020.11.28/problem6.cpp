#include <iostream>

using namespace std;

/*
    От клавиатурата се въвежда число n, 5 <= n <= 100. След това се въвеждат n естествени числа и се записват в масив.
    Да се изведат всички числа от масива, които са числа на Армстронг. Ако няма такива, да се изведе подходящо съобщение.
        Числата на Армстронг са такива трицифрени числа, които са равни на сумата от кубовете на цифрите си,
        например: 153  (13) + (53) + (33) = 153,         371  (33) + (73) + (13) = 371
*/

bool isArmstrong(unsigned num){
    unsigned sum = 0;
    unsigned id = num;

    while (num){
        unsigned digit = num%10;
        sum += digit * digit * digit;
        num /= 10;
    }

    return sum == id;
}

int main()
{
    unsigned n;
    unsigned arr[100];

    do {
        cin >> n;
    } while (n < 5 || n > 100);

    for (unsigned i=0; i<n; i++){
        cin >> arr[i];
    }

    bool found = false;

    for (unsigned i=0; i<n; i++){
        if (isArmstrong(arr[i])){
            cout << arr[i] << endl;
            found = true;
        }
    }

    if (!found){
        cout << "No Armstrong numbers!\n";
    }

    return 0;
}
