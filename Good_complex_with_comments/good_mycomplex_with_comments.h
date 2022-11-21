#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_

#include <iostream>

using namespace std;

/** @brief создание класса
    @class Complex - имя класса
*/
class Complex
{
    double real;
    double imag;

public:
        ///@brief конструктор класса Complex
    Complex (double a_real = 0, double a_imag = 0);
        ///@brief конструктор класса Complex
    Complex (const Complex &);
        ///@brief деструктор класса Complex
    ~Complex();

    Complex operator + (const Complex &);
    Complex operator - (const Complex &);
    Complex operator * (const Complex &);

    Complex operator + (const double &);
    Complex operator - (const double &);
    Complex operator * (const double &);
    Complex operator / (const double &);

    Complex & operator += (const Complex &);
    Complex & operator -= (const Complex &);
    Complex & operator *= (const Complex &);
    Complex & operator  = (const Complex &);

    Complex & operator += (const double &);
    Complex & operator -= (const double &);
    Complex & operator *= (const double &);
    Complex & operator /= (const double &);
    Complex & operator  = (const double &);

        ///@brief Дружественные функции класса Complex
    friend istream & operator >> (istream &, Complex &);
    friend ostream & operator << (ostream &, Complex &);

    friend Complex operator + (const double &, const Complex &);
    friend Complex operator - (const double &, const Complex &);
    friend Complex operator * (const double &, const Complex &);

    void Set (double a_real, double a_imag = 0);
    operator double();
    double abs();
};
#endif


