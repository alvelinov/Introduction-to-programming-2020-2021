#include <iostream>
#include <limits>

using namespace std;

int main()
{
    int i1 = 3, i2 = 5;
    double d1 = 3.1, d2 = 5.2;

    // Goofing off and seeing what happens. Int and double edition
    cout << "Addition, subtraction, multiplication and division with ints and doubles:" << endl;

    cout << "(i1+i2, d1+d2, i1+d1): ";
    cout << "(" << i1 + i2 << ", " << d1 + d2 << ", " << i1 + d1 << ")" << endl;

    cout << "(i1-i2, d1-d2, i1-d1): ";
    cout << "(" << i1 - i2 << ", " << d1 - d2 << ", " << i1 - d1 << ")" << endl;

    cout << "(i1*i2, d1*d2, i1*d1): ";
    cout << "(" << i1 * i2 << ", " << d1 * d2 << ", " << i1 * d1 << ")" << endl;

    cout << "(i1/i2, d1/d2, i1/d1): ";
    cout << "(" << i1 / i2 << ", " << d1 / d2 << ", " << i1 / d1 << ")" << endl;
    cout << endl;

    // Overflow and underflow of int
    unsigned un = 0;
    cout << "int and unsigned int overflow and underflow:" << endl;
    cout << "Max int + 1: " << INT_MAX + 1 << endl;
    cout << "Min int - 1: " << INT_MIN - 1 << endl;
    cout << "Max unsigned int + 1: " << UINT_MAX + 1 << endl;
    cout << "Min unsigned int - 1: " << un - 1 << endl;
    cout << endl;

    // The swap operation
    cout << "Swap a=10 and b=3: " << endl;
    int a=10, b=3;
    int c;
    c = a;
    a = b;
    b = c;
    cout << "New values are a=" << a << " and b=" << b << endl;
    cout << endl;

    // Temperature shenanigans
    cout << "Converting temperature scales:" << endl;
    cout << "We'll use 30 degrees Celsius and 80 Kelvin." << endl;
    int cel = 30, kel = 80;
    cout << "30 Celsius is " << (9.0 / 5) * cel + 32 << " Fahrenheit." << endl;
    cout << "80 Kelvin is " << (9.0 / 5) * (kel - 273.15) + 32 << " Fahrenheit." << endl;
    cout << endl;

    // And I thought I'll never need to know how to calculate the volume of a sphere... Go figure
    cout << "The volume of a sphere with a radius of 6 is equal to " << (4 * 3.14 * 6 * 6 * 6)/3 << endl;
    cout << endl;

    // Remainder exercise
    cout << "Please enter two whole numbers separated by a \"space\": ";
    int n1, n2;
    cin >> n1 >> n2;

    cout << "Now I ask of you to do the same thing only one more time: ";
    int n3, n4;
    cin >> n3 >> n4;

    cout << "Your efforts will be rewarded with the whole part and the remainder of their mean." << endl;
    cout << "The whole part: " << (n1 + n2 + n3 + n4) / 4 << endl;
    cout << "The remainder: " << (n1 + n2 + n3 + n4) % 4 << endl;
    cout << endl;

    // Square with stars
    cout << "Make a 4x4 square using only the '*' character:" << endl;
    char ch = '*';
    char space = ' ';
    cout << ch << ch << ch << ch << endl;
    cout << ch << space << space << ch << endl;
    cout << ch << space << space << ch << endl;
    cout << ch << ch << ch << ch << endl;
    cout << endl;

    // The final boss: a dot inside a square. The ?: operator
    cout << "Is a dot inside a square with a side length of 6 and a center located at (0, 0)?" << endl;
    cout << "Now we need two floating point numbers for the coordinates of our dot." << endl;
    cout << "Enter them here, separated by a space: ";
    float f1, f2;
    cin >> f1 >> f2;
    cout << "Does the square contain our dot? ";
    (f1 >= -3 && f1 <= 3 && f2 >= -3 && f2 <= 3) ? cout << "Yes." : cout << "No.";

    return 0;
}
