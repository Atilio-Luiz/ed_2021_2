#include <string>
#include <iostream>
#include <cctype>
#include <stack>
using namespace std;

bool bemFormada(string exp) {
    stack<char> pilha;

    for(unsigned i = 0; i < exp.size(); ++i) {
        switch(exp[i]) {
            case '(': 
            case '[': pilha.push(exp[i]);
                      break;
            case ')': if(!pilha.empty() && pilha.top() == '(') pilha.pop();
                      else return false;
                      break;
            case ']': if(!pilha.empty() && pilha.top() == '[') pilha.pop();
                      else return false;
                      break;
            default : return false;
        }
    }
    return pilha.empty();
}

// estou supondo que a string é válida
double calculaPosfixa(string posfixa) {
    stack<double> pilha;

    for(unsigned i = 0; i < posfixa.size(); ++i) {
        if(isdigit(posfixa[i])) {
            char ch = posfixa[i];
            pilha.push( atof(&ch) );
        }
        else {
            double a = pilha.top(); pilha.pop();
            double b = pilha.top(); pilha.pop();
            switch(posfixa[i]) {
                case '+': pilha.push(b + a); break;
                case '-': pilha.push(b - a); break;
                case '*': pilha.push(b * a); break;
                case '/': pilha.push(b / a); break; 
            }
        }
    }
    return pilha.top();
}

string parentizadaParaPosfixa(string exp) {
    stack<char> pilha;
    string posfixa;

    for(unsigned i = 0; i < exp.size(); ++i) {
        switch(exp[i]) {
            case '(': break;
            case ')': posfixa += pilha.top();
                      pilha.pop();
                      break;
            case '+':
            case '*':
            case '/':
            case '-': pilha.push(exp[i]);
                      break;
            default : posfixa += exp[i];
        }
    }

    return posfixa;
}


int main() {
    string expressao;
    getline(cin, expressao);

    string posfixa = parentizadaParaPosfixa(expressao);
    cout << posfixa << endl;

    cout << calculaPosfixa(posfixa) << endl;

    return 0;
}