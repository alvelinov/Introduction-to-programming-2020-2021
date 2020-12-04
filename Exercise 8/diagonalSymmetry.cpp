#include <iostream>

using namespace std;

/*
    Да се състави програма, чрез която квадратна матрица с брой редове N от интервала [3; 10] се запълва с естествени числа.
    Елементите в матрицата да се пренаредят, така че ако има елемент над главния диагонал, който е по-голям от симетричния му
    елемент под главния диагонал, то двата елемента си разменят местата.

    Пример:
    N = 4
    10 22 10 26
    11  7  8  1
    23  5  1 28
    25 10 26 19

    Изход:
    10 11 10 25
    22  7  5  1
    23  8  1 26
    26 10 28 19
*/

void swap(unsigned &a, unsigned &b){
    unsigned tmp = a;
    a = b;
    b = tmp;
}

int main()
{
    int n;
    unsigned arr[10][10];

    do {
        cin >> n;
    } while (n < 3 || n > 10);

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    }

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i][j] > arr[j][i]){
                swap(arr[i][j], arr[j][i]);
            }
        }
    }

    cout << endl;
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
