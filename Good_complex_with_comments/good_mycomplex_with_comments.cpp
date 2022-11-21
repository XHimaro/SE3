#include <iostream>
#include <cmath>
#include "good_mycomplex_with_comments.h"

using namespace std;

/** @brief Конструктор класса Complex
    @param a_real - действительная часть комплексного числа типа double
    @param a_imag - мнимая часть комплексного числа типа double
*/
Complex::Complex (double a_real, double a_imag)
{
    real = a_real;
    imag = a_imag;
}

/** @brief Конструктор класса Complex
    @param complex_number - ссылка на объект типа Complex
*/
Complex::Complex (const Complex & complex_number)
{
    real = complex_number.real;
    imag = complex_number.imag;
}

/// @brief деструктор класса Complex
Complex::~Complex()
{
    real = 0.0;
    imag = 0.0;
}

/** @brief Определение функции записи действительной и мнимой части
    @param a_real - действительная часть комплексного числа типа double
    @param a_imag - мнимая часть комплексного числа типа double
*/
void Complex::Set (double a_real, double a_imag)
{
    real = a_real;
    imag = a_imag;
}

/** @brief Переопределение оператора double
    @return возвращает переменную типа double
*/
Complex::operator double()
{
    return abs();
}

/** @brief Расчет модуля числа
    @return Возвращает корень из суммы квадратов действительной и мнимой части
*/
double Complex::abs()
{
    return sqrt (real*real + imag*imag);
}

/** @brief Переопределение оператора "+"
    @param complex_number - ссылка на объект типа Complex
    @return Указатель на объект типа Complex
*/
Complex Complex::operator + (const Complex & complex_number)
{
    Complex result;
    result.real = real + complex_number.real;
    result.imag = imag + complex_number.imag ;
    return result;
}

/** @brief Переопределение оператора "-"
    @param complex_number - ссылка на объект типа Complex
    @return Указатель на объект типа Complex
*/
Complex Complex::operator - (const Complex & complex_number)
{
    Complex result;
    result.real = real - complex_number.real;
    result.imag = imag - complex_number.imag;
    return result;
}

/** @brief Переопределение оператора "+"
    @param real_val - ссылка на число типа double
    @return Указатель на объект типа Complex
*/
Complex Complex::operator + (const double & real_val)
{
    Complex result;
    result.real = real + real_val;
    result.imag = imag;
    return result;
}

/** @brief Переопределение оператора "-"
    @param real_val - ссылка на число типа double
    @return Указатель на объект типа Complex
*/
Complex Complex::operator - (const double & real_val)
{
    Complex result (*this);
    result.real = real - real_val;
    return result;
}

/** @brief Переопределение оператора "*"
    @param complex_number - ссылка на объект Complex
    @return Указатель на объект типа Complex
*/
Complex Complex::operator * (const Complex & complex_number)
{
    Complex result;
    result.real = real*complex_number.real - imag*complex_number.imag;
    result.imag = real*complex_number.imag + imag*complex_number.real;
    return result;
}

/** @brief Переопределение оператора "*"
    @param real_val - ссылка на число типа double
    @return Указатель на объект типа Complex
*/
Complex Complex::operator * (const double & real_val)
{
    Complex result;
    result.real = real*real_val;
    result.imag = imag*real_val;
    return result;
}

/** @brief Переопределение оператора "/"
    @param real_val - ссылка на число типа double
    @return Указатель на объект типа Complex
*/
Complex Complex::operator / (const double & real_val)
{
    Complex result;
    result.real = real/real_val;
    result.imag = imag/real_val;
    return result;
}

/** @brief Переопределение оператора "+="
    @param complex_number - ссылка на объект Complex
    @return Указатель на объект типа Complex
*/
Complex & Complex :: operator += (const Complex & complex_number)
{
    real += complex_number.real;
    imag += complex_number.imag;
    return *this;
}

/** @brief Переопределение оператора "-="
    @param complex_number - ссылка на объект Complex
    @return Указатель на объект типа Complex
*/
Complex & Complex::operator -= (const Complex & complex_number)
{
    real -= complex_number.real;
    imag -= complex_number.imag;
    return *this;
}

/** @brief Переопределение оператора "*="
    @param complex_number - ссылка на объект типа Complex
    @return Указатель на объект типа Complex
*/
Complex & Complex::operator *= (const Complex & complex_number)
{
    double tmp_real = real;
    real = real*complex_number.real - imag*complex_number.imag;
    imag = imag*complex_number.real + tmp_real*complex_number.imag;
    return *this;
}

/** @brief Переопределение оператора "+="
    @param real_val - ссылка на число типа double
    @return Указатель на объект типа Complex
*/
Complex & Complex::operator += (const double & real_val)
{
    real += real_val;
    return *this;
}

/** @brief Переопределение оператора "-="
    @param real_val - ссылка на число типа double
    @return Указатель на объект типа Complex
*/
Complex & Complex::operator -= (const double & real_val)
{
    real -= real_val;
    return *this;
}

/** @brief Переопределение оператора "*="
    @param real_val - ссылка на число типа double
    @return Указатель на объект типа Complex
*/
Complex & Complex::operator *= (const double & real_val)
{
    real *= real_val;
    imag *= real_val;
    return *this;
}

/** @brief Переопределение оператора "/="
    @param real_val - ссылка на число типа double
    @return Указатель на объект типа Complex
*/
Complex & Complex::operator /= (const double & real_val)
{
    real /= real_val;
    imag /= real_val;
    return *this;
}

/** @brief Переопределение оператора "="
    @param complex_number - ссылка на объект типа Complex
    @return Указатель на объект типа Complex
*/
Complex & Complex::operator = (const Complex & complex_number)
{
    real = complex_number.real;
    imag = complex_number.imag;
    return *this;
}

/** @brief Переопределение оператора "="
    @param real_val - усслыка на число типа double
    @return Указатель на объект типа Complex
*/
Complex & Complex::operator = (const double & real_val)
{
    real = real_val;
    imag = 0.0;
    return *this;
}

/**
    @brief Переопределение оператора ">>"
    @param stream - ссылка на поток ввода
    @param complex_number - ссылка на объект типа Complex
    @return ссылка на поток
*/
istream & operator >> (istream & stream, Complex & complex_number)
{
    char tmp[256];
    stream >> complex_number.real >> complex_number.imag >> tmp;
    return stream;
}

/**
    @brief Переопределение оператора "<<"
    @param stream - ссылка на поток вывода
    @param complex_number - ссылка на объект типа Complex
    @return ссылка на поток

*/
ostream & operator << (ostream & stream, Complex & complex_number)
{
    stream << complex_number.real;
    if (! (complex_number.imag < 0)) stream << '+';
    stream << complex_number.imag << 'i';
    return stream;
}

/** @brief Переопределение оператора "+"
    @param real_val - сслыка на число типа double
    @param complex_number - сслыка объект типа Complex
    @return Указатель на объект типа Complex
*/
Complex operator + (const double & real_val, const Complex & complex_number)
{
    Complex result;
    result.real = real_val + complex_number.real;
    result.imag = complex_number.imag;
    return result;
}

/** @brief Переопределение оператора "-"
    @param real_val - сслыка на число типа double
    @param complex_number - сслыка объект типа Complex
    @return Указатель на объект типа Complex
*/
Complex operator - (const double & real_val, const Complex & complex_number)
{
    Complex result;
    result.real = real_val - complex_number.real;
    result.imag = - complex_number.imag;
    return result;
}

/** @brief Переопределение оператора "*"
    @param real_val - сслыка на число типа double
    @param complex_number - сслыка на объект типа Complex
    @return Указатель на объект типа Complex
*/
Complex operator * (const double & real_val, const Complex & complex_number)
{
    Complex result;
    result.real = real_val*complex_number.real;
    result.imag = real_val*complex_number.imag;
    return result;
}

