#include <iostream>
#include <float.h>

using namespace std;

/*
    Дадена ни е матрица от цели положителни числа с M реда и N стълба. Коефициент за даден ред ще наричаме средното аритметично
    от числата на съответния ред. Задачата ни е да създадем нова матрица, която да съдържа само тези редове, за които
    коефициентите образуват строго монотонно растяща редица. За целта:
        - Напишете функция, която намира броя на редовете в новата матрица, без да я създава.
        - Заделете динамично памет за новата матрица, като имате вече броя на редовете.
        - Запълнете редовете в новата матрицата със съответните числа от първоначалната, за да получите матрицата, която
        удовлетворява условието.
        - Изведете получената матрица на екрана.
    Пример:
    Вход:
    5 4
    1 2 3 4
    3 2 1 1
    5 6 7 8
    2 2 3 3
    10 12 9 11

    Изход:
    1 2 3 4
    5 6 7 8
    10 12 9 11
*/

int getNewRowsNum(int **matrix, const int &rows, const int &cols){
    int newRowsCount = 0;
    double oldCoeff = DBL_MIN;
    for (int i=0; i<rows; i++){
        double newCoeff = 0;

        for (int j=0; j<cols; j++){
            newCoeff += matrix[i][j];
        }
        newCoeff /= cols;

        if(oldCoeff < newCoeff){
            newRowsCount++;
            oldCoeff = newCoeff; // По време на упражнението редът беше след този if, за която грешка моля да ме извините. Същото важи и за ред 84
        }
    }

    return newRowsCount;
}

int main()
{
    int m, n;
    cin >> m >> n;

    int **matr = new int*[m];
    for (int i=0; i<m; i++){
        matr[i] = new int[n];
    }

    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            cin >> matr[i][j];
        }
    }

    int newRows = getNewRowsNum(matr, m, n);

    int **newMatr = new int*[newRows];
    for (int i=0; i<newRows; i++){
        newMatr[i] = new int[n];
    }

    double oldCoeff = DBL_MIN;
    int newRowsCnt = 0;
    for (int i=0; i<m; i++){
        double newCoeff = 0;

        for (int j=0; j<n; j++){
            newCoeff += matr[i][j];
        }
        newCoeff /= n;

        if(oldCoeff < newCoeff){
            oldCoeff = newCoeff; // По време на упражнението редът беше след този if, за която грешка моля да ме извините
            for (int j=0; j<n; j++){
                newMatr[newRowsCnt][j] = matr[i][j];
            }
            newRowsCnt++;

            if (newRowsCnt == newRows)
                break;
        }
    }

    for (int i=0; i<m; i++){
        delete[] matr[i];
    }
    delete[] matr;

    for (int i=0; i<newRows; i++){
        for (int j=0; j<n; j++){
            cout << newMatr[i][j] << ' ';
        }
        cout << endl;
    }

    for (int i=0; i<m; i++){
        delete[] newMatr[i];
    }
    delete[] newMatr;

    return 0;
}
