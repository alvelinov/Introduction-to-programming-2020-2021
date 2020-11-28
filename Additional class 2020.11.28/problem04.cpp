#include <iostream>

using namespace std;

/*
    Въвежда се поредица от символи с дължина n. Да се провери дали редицата е палиндром. Да се използват функции.
    Пример:
    8
    a ! 2 b b 2 ! a
    Изход: Yes
*/

int main()
{
    char str[100];
    unsigned sz;

    cin >> sz;

    for (unsigned i=0; i<sz; i++){
        cin >> str[i];
    }

    unsigned limit = sz/2;
    bool isPalindrome = true;

    for (unsigned i = 0; i < limit; i++){
        if (str[i] != str[sz-1-i]){
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Yes!";
    else
        cout << "No!";

    return 0;
}
