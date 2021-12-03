#include <stdexcept>
#include <iostream>

class Fraction {
private:
    int m_numerator;
    int m_denominator;

public:
    // Default constructor
    Fraction(int numerator=0, int denominator=1) {
        if(denominator == 0)
            throw std::runtime_error("fail: denominator não pode ser igual a 0");

        m_numerator = numerator;
        m_denominator = denominator;
    }

    friend std::ostream& operator<<(std::ostream& out, const Fraction& f1);
};

std::ostream& operator<<(std::ostream& out, const Fraction& f1)
{
	out << f1.m_numerator << "/" << f1.m_denominator;
	return out;
}

int main() {
    Fraction f1(6,7); // 6/7
    Fraction f2(8,3); // 8/3
    std::cout << f1 << std::endl; // 6/7
    std::cout << f2 << std::endl; // 8/3

    f1 = f2;
    std::cout << f1 << std::endl; // 8/3
    std::cout << f2 << std::endl; // 8/3
    return 0;
}