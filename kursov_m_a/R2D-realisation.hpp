#pragma once
#include "Rdec-pol2D.hpp"
#include <iostream>
#include <cmath>
#include <limits>

const double kEps = std::numeric_limits<double>::epsilon() * 2.0;

std::ostream& operator<<(std::ostream& ostrm, const Rdec& d) {
    return ostrm << '(' << d.x << ',' << d.y << ')';
}

Rdec operator-(const Rdec& d) {
    return { -d.x, -d.y };
}

Rdec& operator+=(Rdec& lhs, const Rdec& rhs) {
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    return lhs;
}

Rdec operator+(const Rdec& lhs, const Rdec& rhs) {
    Rdec res = lhs;
    res += rhs;
    return res;
}

Rdec operator-(const Rdec& lhs, const Rdec& rhs) {
    return { lhs.x - rhs.x, lhs.y - rhs.y };
}

Rdec operator*(const Rdec& d, const double n) {
    return { d.x * n, d.y * n };
}

Rdec operator*(const double n, const Rdec& d) {
    return { d.x * n, d.y * n };
}

Rdec operator/(const Rdec& d, const double n) {
    return { d.x / n, d.y / n };
}

Rdec ToDec(Rpol p) {
    double x = sqrt(pow(p.r, 2) / (1 + pow(p.f, 2)));
    double y = sqrt(pow(p.r, 2) - pow(x, 2));
    Rdec d{ x, y };
    return d;
}

double Dot(Rdec d1, Rdec d2) {
    //p.f = sqrt(1 / 1 +pow(p.f, 2)) ;
    /*double c = ((x * d.x / 2) + (y * d.y / 2)) / (sqrt(x * x + y * y) * sqrt(d.x / 2 + d.y / 2));
    return abs(r) * abs(p.r) * c;*/
    return d1.x * d2.x + d1.y * d2.y;
}

double Dot(Rdec d, Rpol p) {
    Rdec d2 = ToDec(p);
    return d.x * d2.x + d2.y * d.y;
}

double Dot(Rpol p, Rdec d) {
    Rdec d2 = ToDec(p);
    return d.x * d2.x + d2.y * d.y;
}

double Dot(Rpol p, Rpol p1) {
    Rdec d = ToDec(p);
    Rdec d1 = ToDec(p1);
    return d.x * d1.x + d.y * d1.y;
}

double Norm(Rdec d) {
    return sqrt(d.x * d.x + d.y * d.y);
}

bool operator==(const Rdec& lhs, const Rdec& rhs) {
    return (std::abs(lhs.x - rhs.x) < kEps &&
        std::abs(lhs.y - rhs.y) < kEps);
}

bool operator==(const Rdec& lhs, const Rpol& p) {
    Rdec rhs = ToDec(p);
    return (std::abs(lhs.x - rhs.x) < kEps &&
        std::abs(lhs.y - rhs.y) < kEps);
}

bool operator==(const Rpol& p, const Rdec& rhs) {
    Rdec lhs = ToDec(p);
    return (std::abs(lhs.x - rhs.x) < kEps &&
        std::abs(lhs.y - rhs.y) < kEps);
}

bool operator==(const Rpol& p, const Rpol& p1) {
    Rdec lhs = ToDec(p);
    Rdec rhs = ToDec(p1);
    return (std::abs(lhs.x - rhs.x) < kEps &&
        std::abs(lhs.y - rhs.y) < kEps);
}

bool operator!=(const Rdec& lhs, const Rdec& rhs) {
    return (std::abs(lhs.x - rhs.x) > kEps ||
        std::abs(lhs.y - rhs.y) > kEps);
}

bool operator!=(const Rdec& lhs, const Rpol& p) {
    Rdec rhs = ToDec(p);
    return (std::abs(lhs.x - rhs.x) > kEps ||
        std::abs(lhs.y - rhs.y) > kEps);
}

bool operator!=(const Rpol& p, const Rdec& rhs) {
    Rdec lhs = ToDec(p);
    return (std::abs(lhs.x - rhs.x) > kEps ||
        std::abs(lhs.y - rhs.y) > kEps);
}

bool operator!=(const Rpol& p, const Rpol& p1) {
    Rdec lhs = ToDec(p);
    Rdec rhs = ToDec(p1);
    return (std::abs(lhs.x - rhs.x) > kEps ||
        std::abs(lhs.y - rhs.y) > kEps);
}

//

std::ostream& operator<<(std::ostream& ostrm, const Rpol& p) {
    return ostrm << '(' << p.r << ',' << p.f << ')';
}

Rpol operator-(const Rpol& p) {
    return { -p.r, -p.f };
}

Rpol& operator+=(Rpol& lhs, const Rpol& rhs) {
    lhs.r += rhs.r;
    lhs.f += rhs.f;
    return lhs;
}

Rpol operator+(const Rpol& lhs, const Rpol& rhs) {
    return { lhs.r + rhs.r, lhs.f + rhs.f };
}

Rpol operator-(const Rpol& lhs, const Rpol& rhs) {
    return { lhs.r - rhs.r, lhs.f - rhs.f };
}

Rpol operator*(const Rpol& p, const double n) {
    return { p.r * n, p.f * n };
}

Rpol operator*(const double n, const Rpol& p) {
    return { p.r * n, p.f * n };
}

Rpol operator/(const Rpol& p, const double n) {
    return { p.r / n, p.f / n };
}

Rpol ToPol(Rdec d) {
    double r = sqrt(pow(d.x, 2) + pow(d.y, 2));
    double f = (d.y / d.x);
    Rpol p{ r, f };
    return p;
}

double Norm(Rpol p) {
    Rdec d = ToDec(p);
    return sqrt(d.x * d.x + d.y * d.y);
}

