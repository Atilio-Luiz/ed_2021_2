#include <iostream>
#include <stack>
#include <cctype>
#include <cstdlib>
#include <string>

using namespace std;

// Supoe que 'posfix' contem expressao posfixa valida
double calculaPosfixa(std::string posfix) {
    double a, b;
    stack<double> pilha;
	
    for(unsigned i = 0; i < posfix.size(); i++) {
        if( isdigit(posfix[i]) ) {
            char ch = posfix[i];   
            pilha.push( atof(&ch) );
        }
        else {
            a = pilha.top(); pilha.pop();
            b = pilha.top(); pilha.pop();
            switch(posfix[i]) {
                case '+': pilha.push(b + a); break;
                case '-': pilha.push(b - a); break;
                case '*': pilha.push(b * a); break;
                case '/': pilha.push(b / a); break;
            }
        }	
    }
    return pilha.top();
}

/**
 * Funcao que converte uma expressao aritmetica
 * completamente parentizada para uma expressao
 * equivalente na notacao posfixa (polonesa reversa).
 * Supomos que cada operando eh um digito entre 0..9
 * e que os operadores sao +, -, * e /
 * A funcao tambem supoe que a expressao passada por
 * parametro esta corretamente parentizada.
 */
std::string ParentizadaParaPosfixa(std::string exp) { 
    std::string posfix; 
    stack<char> pilha; // guarda os operadores
	
    for(int i = 0; i < exp.size(); i++) {
        switch(exp[i]) {
            case '(': break;
            case ')': posfix += pilha.top(); 
                      pilha.pop();
                      break;
            case '+':
            case '-':
            case '*':
            case '/': pilha.push(exp[i]);
                      break;
            default : posfix += exp[i];
        }	
    }
    return posfix;
}

// Supoe que 'posfix' contem expressao posfixa valida
// os inteiros podem ser quaisquer numeros inteiros nao negativos
// e os simbolos estao separados por espacos
double calculaPosfixa2(std::string posfix) {
    double a, b;
    stack<double> pilha;
	
    for(unsigned i = 0; i < posfix.size(); i++) {
        if( isdigit(posfix[i]) ) {
            pilha.push(0);
            while( isdigit(posfix[i]) ) {
                char ch = posfix[i]; 
                double t = 10*pilha.top();
                pilha.pop();
                pilha.push( t + atof(&ch) );
                i++;
            }
        }
        else if(!isspace(posfix[i])) {
            a = pilha.top(); pilha.pop();
            b = pilha.top(); pilha.pop();
            switch(posfix[i]) {
                case '+': pilha.push(b + a); break;
                case '-': pilha.push(b - a); break;
                case '*': pilha.push(b * a); break;
                case '/': pilha.push(b / a); break;
            }
        }	
    }
    return pilha.top();
}

std::string ParentizadaParaPosfixa2(std::string exp) { 
    std::string posfix; 
    stack<char> pilha; // guarda os operadores
	
    for(int i = 0; i < exp.size(); i++) {
        switch(exp[i]) {
            case '(': break;
            case ')': posfix += " ";
                      posfix += pilha.top(); 
                      pilha.pop();
                      break;
            case '+':
            case '-':
            case '*':
            case '/': pilha.push(exp[i]);
                      posfix += " ";
                      break; 
            default : posfix += exp[i];
                      break; 
        }	
    }
    return posfix;
}

int main() {
    std::string expression;
    std::string posfixa;
	getline(cin, expression);
   
    posfixa = ParentizadaParaPosfixa2(expression);
	cout << calculaPosfixa2(posfixa) << endl;

	return 0;
}