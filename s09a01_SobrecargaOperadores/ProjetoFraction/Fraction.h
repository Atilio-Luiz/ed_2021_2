#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>

class Fraction {
private:
    int numerator;
    int denominator;

public:
    /**
     * Construtor default, cria a fração 1/1
     */
    Fraction() 
        : Fraction(1,1) 
    {} // corpo vazio

    /**
     * Construtor com dois argumentos
     */
    Fraction(int num, int den) 
        : numerator(num), denominator(den)
    {
        reduce();
    }

    /**
     * Função recursiva que calcula o máximo divisor comum 
     * de dois inteiros a e b passados como argumento.
     */
    int gcd(int a, int b) {
        return (b == 0) ? std::abs(a) : gcd(b, a % b);
    }

    /**
     * Função que reduz o numerador e o denominador da fração
     * aos seus menores termos
     */
    void reduce() {
        int gcDivisor = gcd(numerator, denominator); 
        numerator /= gcDivisor;
        denominator /= gcDivisor;
    }

    // getters
    int getNumerator() const { return numerator; }
    int getDenominator() const { return denominator; }

    // setters
    void setNumerator(int num) { numerator = num; }
    void setDenominator(int den) { denominator = den; }

    // operadores aritméticos sobrecarregados como funções-membro
    Fraction operator+(const Fraction& f) const;
    Fraction operator-(const Fraction& f) const;
    Fraction operator*(const Fraction& f) const;
    Fraction operator/(const Fraction& f) const;

    // operador de extração (<<) e operador de inserção (>>) 
    // sobrecarregados de forma global como friend functions
    friend std::ostream& operator<<(std::ostream& out, const Fraction& f);
    friend std::istream& operator>>(std::istream& in, Fraction& f);

    // operadores relacionais sobrecarregados como funções-membro
    bool operator==(const Fraction& f) const;
    bool operator!=(const Fraction& f) const;
    bool operator<(const Fraction& f) const;
    bool operator<=(const Fraction& f) const;
    bool operator>(const Fraction& f) const;
    bool operator>=(const Fraction& f) const;

    /**
     * Operadores aritméticos sobrecarregados como funções globais 
     * usando friend functions. Esses operadores permitem fazer 
     * operações aritméticas entre objetos Fraction e int.
     */
    friend Fraction operator+(const Fraction& f, int k);
    friend Fraction operator-(const Fraction& f, int k);
    friend Fraction operator*(const Fraction& f, int k);
    friend Fraction operator/(const Fraction& f, int k);

    /**
     * Operadores aritméticos sobrecarregados como funções globais 
     * usando friend functions. Esses operadores permitem fazer 
     * operações aritméticas entre int e objetos Fraction.
     */
    friend Fraction operator+(int k, const Fraction& f);
    friend Fraction operator-(int k, const Fraction& f);
    friend Fraction operator*(int k, const Fraction& f);
    friend Fraction operator/(int k, const Fraction& f);

    // Operadores de incremento e decremento prefixados
    // sobrecarregados como funções membro
    Fraction& operator++();
    Fraction& operator--();

    // Operadores de incremento e decremento pós-fixados
    // sobrecarregados como funções-membro
    Fraction operator++(int);
    Fraction operator--(int);

    // Operadores += e -= sobrecarregados como funções-membro
    Fraction& operator+=(Fraction& f);
    Fraction& operator-=(Fraction& f);

    // Operadores += e -= sobrecarregados como funções-membro
    Fraction& operator+=(int k);
    Fraction& operator-=(int k);
};

/**************************************************
 * Implementação dos operadores sobrecarregados
 **************************************************/

Fraction Fraction::operator+(const Fraction& f) const {
    int num = this->numerator * f.denominator + 
                f.numerator * this->denominator;
    int den = this->denominator * f.denominator;
    return Fraction(num, den);
}

Fraction Fraction::operator-(const Fraction& f) const {
    int num = this->numerator * f.denominator - f.numerator * this->denominator;
    int den = this->denominator * f.denominator;
    return Fraction(num, den);
}

Fraction Fraction::operator*(const Fraction& f) const {
    int num = this->numerator * f.numerator;
    int den = this->denominator * f.denominator;
    return Fraction(num, den);
}

Fraction Fraction::operator/(const Fraction& f) const {
    int num = this->numerator * f.denominator;
    int den = this->denominator * f.numerator;
    return Fraction(num, den);
}

// Implementação do operador << como uma função global usando friend function
std::ostream& operator<<(std::ostream& out, const Fraction& f) {
    out << f.numerator << "/" << f.denominator;
    return out;
}

// Implementação do operador >> como uma função global usando friend function
std::istream& operator>>(std::istream& in, Fraction& f) {
    in >> f.numerator;
    in.ignore(); // ignora o separador '/'
    in >> f.denominator;
    f.reduce();
    return in;
}

bool Fraction::operator==(const Fraction& f) const {
    int a = this->numerator * f.denominator;
    int b = f.numerator * this->denominator;
    return a == b;
}

bool Fraction::operator!=(const Fraction& f) const {
    return !(*this == f);
}

bool Fraction::operator<(const Fraction& f) const {
    int a = this->numerator * f.denominator;
    int b = f.numerator * this->denominator;
    return a < b;
}

bool Fraction::operator<=(const Fraction& f) const {
    return (*this < f) || (*this == f);
}

bool Fraction::operator>(const Fraction& f) const {
    int a = this->numerator * f.denominator;
    int b = f.numerator * this->denominator;
    return a > b;
}

bool Fraction::operator>=(const Fraction& f) const {
    return (*this > f) || (*this == f);
}

Fraction operator+(const Fraction& f, int k) {
    int num = f.numerator + (k * f.denominator);
    return Fraction(num, f.denominator);
}

Fraction operator-(const Fraction& f, int k) {
    int num = f.numerator - (k * f.denominator);
    return Fraction(num, f.denominator);
}

Fraction operator*(const Fraction& f, int k) {
    return Fraction(f.numerator * k, f.denominator);
}
Fraction operator/(const Fraction& f, int k) {
    return Fraction(f.numerator, f.denominator * k);
}

Fraction operator+(int k, const Fraction& f) {
    int num = f.numerator + (k * f.denominator);
    return Fraction(num, f.denominator);
}

Fraction operator-(int k, const Fraction& f) {
    int num = f.numerator - (k * f.denominator);
    return Fraction(num, f.denominator);
}

Fraction operator*(int k, const Fraction& f) {
    return Fraction(f.numerator * k, f.denominator);
}

Fraction operator/(int k, const Fraction& f) {
    return Fraction(f.denominator * k, f.numerator);
}

Fraction& Fraction::operator++() {
    numerator = numerator + denominator;
    return *this; // retorno de referência para criar um lvalue
}

Fraction& Fraction::operator--() {
    numerator = numerator - denominator;
    return *this; 
}

Fraction Fraction::operator++(int) {
    Fraction temp(*this);
    ++(*this); // usa operador prefixado para incrementar
    return temp;
}

Fraction Fraction::operator--(int) {
    Fraction temp(*this);
    --(*this); // usa operador prefixado para decrementar
    return temp;
}

Fraction& Fraction::operator+=(Fraction& f) {
    *this = *this + f;
    return *this;
}

Fraction& Fraction::operator-=(Fraction& f) {
    *this = *this - f;
    return *this;
}

Fraction& Fraction::operator+=(int k) {
    *this = *this + k;
    return *this;
}

Fraction& Fraction::operator-=(int k) {
    *this = *this - k;
    return *this;
}

#endif