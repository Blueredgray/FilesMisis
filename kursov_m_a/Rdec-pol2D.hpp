#pragma once

#include <iosfwd>
//#include <iostream>
//#include <cmath>
//#include <limits>



struct Rdec {
    double x = 0.0;
    double y = 0.0;
};

struct Rpol {
    double r = 0.0;
    double f = 0.0;
};



std::ostream& operator<<(std::ostream& ostrm, const Rdec& d);

Rdec operator-(const Rdec& d);

Rdec& operator+=(Rdec& lhs, const Rdec& rhs);

Rdec operator+(const Rdec& lhs, const Rdec& rhs);

Rdec operator-(const Rdec& lhs, const Rdec& rhs);

Rdec operator*(const Rdec& d, const double n);

Rdec operator*(const double n, const Rdec& d);

Rdec operator/(const Rdec& d, const double n);

Rdec ToDec(Rpol p);

double Dot(Rdec d1, Rdec d2);

double Dot(Rdec d, Rpol p);

double Dot(Rpol p, Rdec d);

double Dot(Rpol p, Rpol p1);

double Norm(Rdec d);

bool operator==(const Rdec& lhs, const Rdec& rhs);

bool operator==(const Rdec& lhs, const Rpol& p);

bool operator==(const Rpol& p, const Rdec& rhs);

bool operator==(const Rpol& p, const Rpol& p1);

bool operator!=(const Rdec& lhs, const Rdec& rhs);

bool operator!=(const Rdec& lhs, const Rpol& p);

bool operator!=(const Rpol& p, const Rdec& rhs);

bool operator!=(const Rpol& p, const Rpol& p1);

//
std::ostream& operator<<(std::ostream& ostrm, const Rpol& p);

Rpol operator-(const Rpol& p);

Rpol& operator+=(Rpol& lhs, const Rpol& rhs);

Rpol operator+(const Rpol& lhs, const Rpol& rhs);

Rpol operator-(const Rpol& lhs, const Rpol& rhs);

Rpol operator*(const Rpol& p, const double n);

Rpol operator*(const double n, const Rpol& p);

Rpol operator/(const Rpol& p, const double n);

Rpol ToPol(Rdec d);

double Norm(Rpol p);

