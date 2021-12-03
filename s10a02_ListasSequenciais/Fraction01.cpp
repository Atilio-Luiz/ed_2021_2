#include <stdexcept>
#include <iostream>

class Fraction {
private:
    int m_numerator;
    int m_denominator;

public:
    // Default constructor
    Fraction(int numerator = 0, int denominator = 1) {
        if(denominator == 0)
            throw std::runtime_error("fail: denominator não pode ser igual a 0");

        m_numerator = numerator;
        m_denominator = denominator;
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction& f1);
};

std::ostream& operator<<(std::ostream& out, const Fraction& f1)
{
	out << f1.m_numerator << "/" << f1.m_denominator;  // a/b
	return out;
}

int main() {
    Fraction f(6); // 6/1

    Fraction six(f); // eu não programei esse construtor -- copy constructor -- construtor de cópia

    std::cout << six << std::endl;
    return 0;
}