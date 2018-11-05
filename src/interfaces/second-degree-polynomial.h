#pragma once

#include <iostream>
#include <cmath>
#include "../../cpm_modules/complex-number/src/interfaces/complex.h"

class SecondDegreePolynomial
{
  public:
    SecondDegreePolynomial();

  private:
    double FindDelta(const double a, const double b, const double c);
    void FindAnswers(double a, double b, double c, Complex& r1, Complex& r2);
    void PrintResult(Complex r1, Complex r2);
};