#include <iostream>

using namespace std;

/*
    Реализирайте вариант на функцията от по-висок ред filter, която за подадени аргументи условие и низ от символи връща
    динамичен низ съдържащ всички елементи от оригиналния низ, които отговарят на подаденото условие. Заделете точно толкова
    памет за резултата, колкото е необходимо.
*/

// applies the condition to all elements and returns a string with the characters for which the condition is true
char* filter(char *str, bool(*condition)(char&)){
    char *tmp = str;
    int newSize = 0;
    while (*tmp) {
        if (condition(*tmp))
            newSize++;
        ++tmp;
    }

    char *newStr = new(nothrow) char[newSize + 1];
    if (!newStr) {
        cout << "Could not allocate memory!\n";
        return nullptr;
    }
    int cnt = 0;
    tmp = str;
    while (cnt < newSize) {
        if (condition(*tmp)) {
            newStr[cnt] = *tmp;
            cnt++;
        }
        ++tmp;
    }
    newStr[newSize] = '\0';

    return newStr;
}

bool isNumber(char &ch) {
    return (ch >= '0' && ch <= '9');
}

bool isLetter(char &ch) {
    return ( (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') );
}

int main(){
    char str[] = "Hello1234";

    // filters the numbers in the string
    char *result = filter(str, isNumber);
    cout << result << endl;

    // filters the letters in the string
    char *result2 = filter(str, isLetter);
    cout << result2 << endl;

    delete [] result;
    delete [] result2;

    return 0;
}
