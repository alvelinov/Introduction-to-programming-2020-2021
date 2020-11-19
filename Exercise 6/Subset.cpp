#include <iostream>

using namespace std;

/*
    Множество е съвкупност от неповтарящи се елементи. Дадени са два едномерни масива с естествени числа, съдържащи по не повече
    от 100 числа всеки. Да се състави програма, която проверява дали всички числа от първия масив се съдържат във втория масив,
    т.е. дали първият масив е подмножество на втория.
    Първият масив да съдържа САМО неповтарящи се числа.
    Пример:
    2,1,5,4,6
    1,2,3,4,5,6,7,18,7,11
    Изход: True
*/

bool isSubset(const unsigned arr1[], const unsigned &len1,
            const unsigned arr2[], const unsigned &len2)
{
    for (unsigned i=0; i<len1; i++){  // for every element in arr1
        bool found = false;

        for (unsigned k=0; k<len2; k++){
            if (arr1[i] == arr2[k]){  // we compare it to each element in arr2
                found = true;         // until we find a match
                break;
            }
        }

        if (!found){                  // if a match is not found
            return false;             // we know that arr1 is not a subset of arr2
        }
    }

    return true;
}

int main()
{
    unsigned arr1[100], arr2[100];
    unsigned len1, len2;
    cout << "Enter the length of the first array: ";
    cin >> len1;
    cout << "Enter the first array: ";
    for (int i=0; i<len1; i++){
        cin >> arr1[i];
    }

    cout << "Enter the length of the second array: ";
    cin >> len2;
    cout << "Enter the second array: ";
    for (int i=0; i<len2; i++){
        cin >> arr2[i];
    }

    if (isSubset(arr1, len1, arr2, len2))
        cout << "The second array contains the first\n";
    else
        cout << "The second array doesn't contain the first\n";

    return 0;
}
