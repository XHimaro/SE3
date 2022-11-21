#include <iostream>
#include "good_mycomplex.h"


using namespace std;


int main() //тестирование класса комплексных чисел
{
    Complex A;
    Complex B(-4);
    Complex C(23.0, 45.9);
    Complex D;
    Complex M=B-C;

    cout << A << "," << B << "," << C << endl;
    A = B + C;

    cout << "A=B+C,A=" << A << endl;
    cout << "M = B - C, M = " << M << endl;
    cout << "M*A=" << M*A << endl;
    cout << "M/4.45=" << M / 4.45 << endl;
  	cout << "Enter complex number D = ";
  	cin >> D;

    A += C + D;
    cout << "D = " << D << "\nA = " << A << endl;

    return 0;
}
