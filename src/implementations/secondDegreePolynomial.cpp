#include "../interfaces/secondDegreePolynomial.h"

SecondDegreePolynomial::SecondDegreePolynomial()
{
    double a = 0;
    std::cout << "Olá, digite o primeiro coeficiente da equação de segundo grau" << std::endl;
    std::cin >> a;
    std::cout << std::endl;

    double b = 0;
    std::cout << "Olá, digite o segundo coeficiente da equação de segundo grau" << std::endl;
    std::cin >> b;
    std::cout << std::endl;

    double c = 0;
    std::cout << "Olá, digite o terceiro coeficiente da equação de segundo grau" << std::endl;
    std::cin >> c;
    std::cout << std::endl;

    Complex r1;
    Complex r2;

    FindAnswers(a, b, c, r1, r2);
    PrintResult(r1, r2);
};

double SecondDegreePolynomial::FindDelta(const double a, const double b, const double c){
    double delta = std::pow(b, 2) - (4* (a * c));
    return delta;
};

void SecondDegreePolynomial::FindAnswers(double a, double b, double c, Complex &r1, Complex &r2)
{
    double delta = FindDelta(a, b, c);

    if (delta > 0)
    {
        r1 = Complex((-b + delta) / (2 * a));
        r2 = Complex((-b - delta) / (2 * a));
    }
    else if (delta < 0)
    {
        double getImaginaryNumber = std::sqrt(std::abs(delta));
        r1 = Complex(-b / (2 * a), getImaginaryNumber / (2 * a));
        r2 = Complex(-b / (2 * a), -getImaginaryNumber / (2 * a));
    }
    else
    {
        r1 = Complex(-b / (2 * a));
        r2 = Complex(-b / (2 * a));
    }
};

void SecondDegreePolynomial::PrintResult(Complex r1, Complex r2)
{
    std::cout << "Raiz 1:" << std::endl;
    std::cout << r1.GetRealNumber() << " + " << r1.GetImaginaryNumber() << "i" << std::endl;
    std::cout << std::endl;

    std::cout << "Raiz 2:" << std::endl;
    std::cout << r2.GetRealNumber() << " + " << r2.GetImaginaryNumber() << "i" << std::endl;
    std::cout << std::endl;
};