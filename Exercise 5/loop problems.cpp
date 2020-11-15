#include <iostream>

using namespace std;

int main()
{
/*
    По подадено на входа число n, изведете пирамида от звездички с n реда. Пример:
    Вход:
    3
    Изход:
      *
     ***
    *****
*/

    int n;
    cout << "Enter the number of rows in the pyramid: ";
    cin >> n;

    for (int i=1; i<=n; i++){
        for (int j=0; j < n-i; j++)
            cout << ' ';
        for (int k=0; k < 2*i - 1; k++)
            cout << '*';
        cout << endl;
    }


/*
    От стандартния вход се въвеждат 10 букви и цифри.
    Програмата да извежда по колко цифри, големи и малки букви са въведени.
    Вход: 8AFGcda567
    Изход:
    digits: 4
    uppercase: 3
    lowercase: 3
*/

    char c;
    cout << "Enter exactly 10 characters: ";

    int digits = 0, uppercase = 0, lowercase = 0;

    for (int i=0; i<10; i++){
        cin >> c;
        if (c >= '0' && c <= '9')
            digits++;
        else if (c >= 'A' && c <= 'Z')
            uppercase++;
        else if (c >= 'a' && c <= 'z')
            lowercase++;
    }

    cout << "digits: " << digits << endl;
    cout << "uppercase: " << uppercase << endl;
    cout << "lowercase: " << lowercase << endl;



/*
    Да се състави програма, която по въведени два знака (интервал) извежда триъгълник от знаци:
    Вход: A  I
    Изход:
    1-ви ред: A
    2-ри ред: B A
    3-ти ред: C B A
    ...
    9-ти ред: I H G F E D C B A
*/

    char beg, fin;
    cout << "Enter two characters: ";
    cin >> beg >> fin;

    if (beg > fin){
        char tmp;
        tmp = beg;
        beg = fin;
        fin = tmp;
    }

    char length = fin - beg;

    for (char i=0; i<=length; i++){
        for (char k=beg+i; k>=beg; k--)
            cout << k << ' ';
        cout << endl;
    }


/*
    Да се състави програма, която по въведени два знака (интервал) извежда триъгълник от знаци:
    Вход: A  I
    Изход:
    1-ви ред:  I H G F E D C B A
    2-ри ред: H G F E D C B A
    3-ти ред: G F E D C B A
    ...
    9-ти ред: А
*/

    char beg, fin;
    cout << "Enter two characters: ";
    cin >> beg >> fin;

    if (beg > fin){
        char tmp;
        tmp = beg;
        beg = fin;
        fin = tmp;
    }

    char length = fin - beg;

    for (char i=0; i<=length; i++){
        for (char k=fin-i; k>=beg; k--)
            cout << k << ' ';
        cout << endl;
    }

    return 0;
}
