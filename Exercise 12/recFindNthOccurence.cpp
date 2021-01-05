#include <iostream>

using namespace std;

/*
    Дадени са низ, символ и число N. Да се напише рекурсивна функция, която връща позицията на N-тото срещане на този символ в низа.
    Позицията на символите започва от 0. Ако няма такова срещане, функцията да върне -1.

    Примери:
    Вход 1: abcdbcbdf
    d
    2
    Изход 1: 7

    Вход 2: iLovePizzaiii
    i
    3
    Изход 2: 10
*/

int getNth(char *&str, const char ch, const int &target, int &charCnt, int &stringCnt){
    if (str[stringCnt] == '\0')
        return -1;

    if (str[stringCnt] == ch){
        charCnt++;
        if (charCnt == target)
            return stringCnt;
    }

    return getNth(str, ch, target, charCnt, ++stringCnt);
}

int getNth(char *str, const char ch, const int &target){
    int charCnt = 0;
    int stringCnt = 0;
    return getNth(str, ch, target, charCnt, stringCnt);
}

int main()
{
    char a[] = "abcdbcbdf";
    char ch = 'd';
    int target = 2;

    cout << getNth(a, ch, target) << endl;

    char a2[] = "iLovePizzaiii";
    char ch2 = 'i';
    int target2 = 3;
    cout << getNth(a2, ch2, target2);

    return 0;
}
