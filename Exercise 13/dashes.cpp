#include <iostream>
#include <cstring>

using namespace std;

/*
    Да се състави програма, която вмъква символ черта (-) между всеки две поредни нечетни цифри в низ от цифри.
    Заделете точно толкова памет, колкото е необходимо за резултатния низ.
*/

int calcNeededDashes(char *str){
    int dashesNeeded = 0;
    while (*str != '\0'){
        if ((*str - '0') % 2 == 1 && (*(str + 1) - '0') % 2 == 1)
            dashesNeeded++;
        ++str;
    }

    return dashesNeeded;
}

char* insertDashes(char *str){
    int initialSize = strlen(str);
    int resultSize = initialSize + calcNeededDashes(str);

    char *result = new(nothrow) char[resultSize + 1];
    if (!result){
        cout << "Couldn't allocate memory!" << endl;
        return nullptr;
    }

    int resultCounter = 0;
    for (int i=0; i<initialSize-1; i++, resultCounter++){
        result[resultCounter] = str[i];
        if ((str[i] - '0') % 2 == 1 && (str[i+1] - '0') % 2 == 1){
            resultCounter++;
            result[resultCounter] = '-';
        }
    }
    result[resultCounter] = str[initialSize - 1];
    resultCounter++;
    result[resultCounter] = '\0';

    return result;
}

int main()
{
    cout << insertDashes("135") << endl;
    cout << insertDashes("13257") << endl;
	return 0;
}
