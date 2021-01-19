#include <iostream>

using namespace std;

/*
    С помощта на подходяща структура, реализирайте функции събиране, изваждане, умножение и деление на рационални числа.
*/

struct Fraction {
    int numerator;
    int denominator;
};

// Euclidean algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

void fixSigns(Fraction &fr) {
    if (fr.denominator < 0){
        fr.denominator = -fr.denominator;
        fr.numerator = -fr.numerator;
    }
}

Fraction sumFractons(const Fraction &fr1, const Fraction &fr2){
    Fraction sum;

    if (fr1.denominator == fr2.denominator) {
        sum.numerator = fr1.numerator + fr2.numerator;
        sum.denominator = fr1.denominator;
    } else {
        int gcdOfDenominators = gcd(fr1.denominator, fr2.denominator);
        sum.denominator = fr1.denominator* fr2.denominator / gcdOfDenominators;
        sum.numerator = (sum.denominator / fr1.denominator) * fr1.numerator +
                (sum.denominator / fr2.denominator) * fr2.numerator;
    }

    return sum;
}

Fraction multFractions(const Fraction &fr1, const Fraction &fr2) {
    Fraction mult;

    mult.numerator = fr1.numerator * fr2.numerator;
    mult.denominator = fr1.denominator * fr2.denominator;

    int endDivisor = gcd(mult.numerator, mult.denominator);
    mult.numerator /= endDivisor;
    mult.denominator /= endDivisor;

    return mult;
}

Fraction diffOfFractions(const Fraction &fr1, const Fraction &fr2) {
    Fraction _fr2;
    _fr2.numerator = -fr2.numerator;
    _fr2.denominator = fr2.denominator;

    return sumFractons(fr1, _fr2);
}

Fraction quotientOfFractions(const Fraction &fr1, const Fraction &fr2) {
    Fraction _fr2;

    if (fr2.numerator == 0){
        cout << "Can't divide by zero!\n";
        _fr2.numerator = 0;
        _fr2.denominator = 0;
        return _fr2;
    }

    _fr2.numerator = fr2.denominator;
    _fr2.denominator = fr2.numerator;
    fixSigns(_fr2);

    return multFractions(fr1, _fr2);
}

int main()
{
    Fraction fr1, fr2;

    cin >> fr1.numerator >> fr1.denominator;
    cin >> fr2.numerator >> fr2.denominator;

    if (fr1.denominator == 0 || fr2.denominator == 0) {
        cout << "One of the fractions has 0 as a denominator!" << endl;
        return -1;
    }

    fixSigns(fr1);
    fixSigns(fr2);
    Fraction sum = sumFractons(fr1, fr2);
    cout << "Sum: " << sum.numerator << "/" << sum.denominator << endl;

    Fraction diff = diffOfFractions(fr1, fr2);
    cout << "Difference: " << diff.numerator << "/" << diff.denominator << endl;

    Fraction mult = multFractions(fr1, fr2);
    cout << "Product: " << mult.numerator << "/" << mult.denominator << endl;

    Fraction quotient = quotientOfFractions(fr1, fr2);
    cout << "Quotient: " << quotient.numerator << "/" << quotient.denominator << endl;

    return 0;
}
