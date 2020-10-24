#include <iostream>

using namespace std;

int main()
{
    //Геометричната задачка
    /*
    В първи и трети квадрант имате четвъртини от квадрат със страна 6 и център с координати (0,0),
    а във втори и четвърти квадрант имате четвъртини от окръжност с радиус 3 и център (0,0).
    Питаме се дали произволна точка с координати х и у попада в начертаната фигура.
    */
    float x, y;
    float r = 3; //радиусът на частите от окръжността
    bool cond1, cond2, cond3, cond4, inFigure;

    cout << "Enter the coordinates of the dot: ";
    cin >> x >> y;

    cond1 = x >= 0 && x <= 3 && y >= 0 && y <= 3;
    cond2 = x*x + y*y <= r*r && x <= 0 && y >=0;
    cond3 = x >= -3 && x <= 0 && y >= -3 && y <= 0;
    cond4 = x*x + y*y <= r*r && x >= 0 && y <= 0;

    inFigure = cond1 || cond2 || cond3 || cond4;

    inFigure ? cout << "The dot is in the figure." << endl :
            cout << "The dot is not in the figure.";
    /*
    Може условия 1 и 3 да се обединят в едно. Същото важи за двойката 2 и 4.
    bool cond13, cond24;

    cond13 = x >= -3 && x <= 3 && y >= -3 && y <= 3 && x*y > 0;
    cond24 = x*x + y*y = r*r && x*y < 0;

    Съответно и условието накрая се променя
    inFigure = cond13 | cond24;
    */


    //Абсолютна стойнст на число и минимумът на 2 числа, ползвайки ?:
    int num1, num2;
    cout << "Enter two numbers. We'll call them num1 and num2: ";
    cin >> num1 >> num2;

    cout << "The absolute value of num1 is ";
    num1 > 0 ? cout << num1 : cout << -num1;
    cout << endl;

    cout << "The minimum of num1 and num2 is ";
    num1 < num2 ? cout << num1 : cout << num2;
    cout << endl;


    //Дали едно число е положително или отрицателно? Броим 0 за положително
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int mask = 1;

    mask <<= 31; //Проверяваме най-левия бит, който помним, че определя знака

    cout << "Its sign is ";
    n & mask ? cout << "negative.\n" : cout << "positive.\n";


    //Дали едно число е четно или нечетно
    int num;
    cout << "Enter a number: "
    cin >> num;
    int mask1 = 1; //Проверяваме най-десния бит

    cout << "The number you entered is "
    num & mask1 ? cout << "odd." : cout << "even.";
    cout << endl;


    //Дали две числа са с различни знаци
    int n1, n2;
    int mask2 = 1;
    cout << "Enter two numbers. We'll call them n1 and n2: ";
    cin >> n1 >> n2;

    mask2 <<= 31;

    cout << "The sings of n1 and n2 are ";
    (n1 & mask2) != (n2 & mask2) ? cout << "different." : cout << "the same.";
    cout << endl;

    return 0;
}
