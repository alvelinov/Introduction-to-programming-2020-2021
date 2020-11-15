#include <iostream>

using namespace std;

/*
    Напишете функция, която приема цяло положително число n и извежда на отделни редове всички числа от 1 до n,
    като ако числото се дели на 3, вместо него извеждате „Tip”. Ако се дели на 5, извеждате „Top”. Ако се дели и на 3, и на 5, извеждате „TipTop”.
*/

void tipTop(const int &n){
    for (int i=1; i<=n; i++){
        if (i % 3 == 0){
            cout << "Tip";
            if (i % 5 == 0)
                cout << "Top";
        } else if (i % 5 == 0){
            cout << "Top";
        } else {
            cout << i;
        }
        cout << endl;
    }
}

int main()
{
    unsigned n;
    cout << "Enter a number: ";
    cin >> n;
    tipTop(n);
}
