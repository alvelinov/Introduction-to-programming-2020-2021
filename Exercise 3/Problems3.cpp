#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    /*
    1.Дадени са три двойки числа с плаваща точка – координати на три точки в равнината.
    Проверете дали трите точки лежат на една права. Изведете "Yes" ако лежат и "No" ако не лежат.
    */
    float x1, x2, y1, y2, z1, z2;
    cout << "Enter the coordinates of point x: ";
    cin >> x1 >> x2;
    cout << "Enter the coordinates of point y: ";
    cin >> y1 >> y2;
    cout << "Enter the coordinates of point z: ";
    cin >> z1 >> z2;

    if ( (y3 - y2)/(x3 - x2) == (y2 - y1)/(x2 - x1) )
        cout << "Yes." << endl;
    else
        cout << "No." << endl;



    /*
    2.Подава ви се символ. Изведете дали е буква, цифра или специален символ.
    Приемаме за специален символ всичко, което е различно от буква или цифра.
    */
    char c;
    cout << "Enter a character: ";
    cin >> c;

    cout << "The character is ";
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
        cout << "a letter." << endl;
    else if (c >= '0' && c <= '9')
        cout << "a number." << endl;
    else
        cout << "special." << endl;



    /*
    3. Подава ви се буква. Изведете дали е гласна или съгласна.
    */
    char letter;
    cout << "Enter a letter:";
    cin >> letter;

    if ( !(letter >= 'a' && letter <= 'z' || letter >= 'A' && letter <= 'Z' ) ){
        cout << "That's not a letter" << endl;
        return 0;
    }

    switch (letter){
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'o':
    case 'O':
    case 'y':
    case 'Y':
    case 'u':
    case 'U':
    case 'i':
    case 'I':
        cout << "It's a vowel." << endl;
        break;
    default:
        cout << "it's a consonant." << endl;
    }



    /*
    4. Въведете номер на месец. Програмата трябва да изведе колко дни има в този месец. Приемаме, че годината не е високосна.
    */
    int month;
    cout << "Enter the number of a month: "
    cin >> month;

    switch (month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "That month has 31 days." << endl;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << "That month has 30 days." << endl;
        break;
    case 2:
        cout << "That month has 30 days." << endl;
        break;
    default:
        cout << "That's not a valid month." << endl;
    }



    /*
    5. Въведете от стандартния вход оценките по 6 учебни предмета. Да се изведе средната оценка с думи и цифри.
    Приемаме, че подадените оценки са валидни
    */
    float g1, g2, g3, g4, g5, g6, mean;

    cout << "Въведете 6 оценки: ";
    cin >> g1 >> g2 >> g3 >> g4 >> g5 >> g6;

    mean = (g1 + g2 + g3 + g4 + g5 + g6) / 6;

    if (mean <= 2.49)
        cout << "слаб " << mean << endl;
    else if (mean > 2.49 && mean <= 3.49)
        cout << "среден " << mean << endl;
    else if (mean > 3.49 && mean <= 4.49)
        cout << "добър " << mean << endl;
    else if (mean > 4.49 && mean <= 5.49)
        cout << "много добър " << mean << endl;
    else
        cout << "отличен " << mean << endl;



    /*
    6. Напишете програма, която по подадени 3-те коефициента на квадратно уравнение намира неговите корени, ако има такива.
    */
    float a, b, c, discr;

    cout << "Enter the 3 coefficients of a quadratic equation: ";
    cin >> a >> b >> c;

    if (a == 0) {
        cout << "That's not a quadratic equation." << endl;
        return 0;
    }
    discr = b*b - 4*a*c;

    if (discr == 0) {
        cout << "Dual root: " << -b/(2*a) << endl;
    }
    else if (discr > 0) {
        cout << "The first root is " << (-b + sqrt(discr)) / (2*a) << endl;
        cout << "The second root is " << (-b - sqrt(discr)) / (2*a) << endl;
    }
    else
        cout << "There are no roots." << endl;



    /*
    7. Подават ви се дължините на страните на триъгълник. Проверете дали е валиден. Ако е, изведете дали е остроъгълен,
    правоъгълен или тъпоъгълен. Ако не е валиден, изведете подходящо съобщение.
    */
    float a, b, c;
    cout << "Enter the length of 3 lines: ";
    cin >> a >> b >> c;

    if ( a > b+c || b > a+c || c > a+b )
        cout << "The lines can't form a triangle." << endl;
    else if ( a*a < b*b + c*c )
        cout << "The triangle is acute." << endl;
    else if ( a*a == b*b + c*c )
        cout << "The triangle is right." << endl;
    else
        cout << "The triangle is obtuse." << endl;


    return 0;
}
