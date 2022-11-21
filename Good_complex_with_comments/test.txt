#include <iostream>
#include "good_mycomplex_with_comments.h"


using namespace std;


int main() //тестирование класса комплексных чисел
{
    Complex A;
    Complex B(-4);
    Complex C(23.0, 45.9);
    Complex D;
    Complex M=B-C;

        ///@fn вывод чисел А, В, С
    cout << A << "," << B << "," << C << endl;

    A = B + C;

        ///@fn вывод суммы счиел В и С в чсило А
    cout << "A=B+C,A=" << A << endl;

    	///@fn вывод разности В, С в число М
    cout << "M = B - C, M = " << M << endl;

        ///@fn вывод произведения чисел М и А
    cout << "M*A=" << M*A << endl;

    	///@fn деление числа М на число 4.45
    cout << "M/4.45=" << M / 4.45 << endl;

  		///@fn вывод предложения ввести число D
  	cout << "Enter complex number D = ";

    	///@fn ввод числа D
  	cin >> D;

    A += C + D;

        /**@fn вывод введенного числа D и с новой строки
        вывод сумму чисел C и D сложенных с числом А*/
    cout << "D = " << D << "\nA = " << A << endl;

    return 0;
}
