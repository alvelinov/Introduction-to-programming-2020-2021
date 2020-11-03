#include <iostream>

using namespace std;

int main()
{

/*
    Добавете единица към целочислена променлива без да ползвате оператор +
*/
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "The number + 1 is: " << -~x << endl;


/*
    Проверете дали дадено естествено число е степен на 4
*/
    int n;

    cin >> n;
    //Проверяваме дали е различно от 0, дали е степен на 2 и накрая дали остатъкът му при делене на 3 е 1
    if (n && !(n & (n-1)) && (n % 3 == 1))
        cout << "It's a power of 4" << endl;
    else
        cout << "It's not a power of 4" << endl;


/*
    Съставете програма, която отпечатва на стандартния изход, във възходящ ред, главните латински букви, следвани от малките
    латински букви във низходящ ред. Пример:
    Изход:
    ABCD. . .XYZzyx. . .dcba
*/
    for (char c = 'A'; c <= 'Z'; c++)
        cout << c;
    for (char c = 'z'; c >= 'a'; c--)
        cout << c;


/*
    Съставете програма, която отпечатва на стандартния изход, във възходящ ред и на отделни редове, главните латински букви,
    следвани от ASCII кодовете им. Пример:
    Изход:
    Letter:  A,  ASCII:  65
    Letter:  B,  ASCII:  66
    …
    Letter:  Z,  ASCII:  90
*/

    for (char c = 'A'; c <= 'Z'; c++)
        cout << "Letter: " << c << ", ASCII: " << (int)c << endl;



/*
    Подава ви се положително число n. Изведете броя на единиците в двоичното му представяне. Забранява се употребата на
    аритметични операции (+, -, *, /, %) при обработката на n.
*/
    unsigned ones_counter = 0;
    unsigned mask = 1;  // 0000...0001 - 32 bits
    unsigned n;         // any 32 bits

    cout << "Enter a number: ";
    cin >> n;

    while (n > 0){
        if ((n & mask) == 1)
            ones_counter++;
        n >>= 1;
    }

    cout << "Ones in n: " << ones_counter << endl;


/*
    По подадено на входа число n, да се изведе на стандартния изход триъгълник с n реда, съставен от звездички (символът ‘*’).
    Пример:
    Вход:
    4
    Изход:
    *
    **
    ***
    ****
*/
    int n;
    cout << "Enter the number of columns of the triangle: ";
    cin >> n;

    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++)
            cout << '*';
            
        cout << endl;
    }


/*
    Изведете триъгълника от предната задача, обаче огледално относно вертикала. Пример:
    Вход:
    4
    Изход:
       *
      **
     ***
    ****
*/
    int n;
    cout << "Enter the number of columns of the triangle: ";
    cin >> n;

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++)
            cout << ' ';

        for (int k=0; k<=i; k++)
            cout << '*';

        cout << endl;
    }

    return 0;
}
