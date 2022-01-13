#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Esta funcao devolve true se exp contiver uma
// sequencia bem-formada de parenteses e chaves e 
// devolve false se a sequencia estiver malformada.
bool bemFormada(std::string exp) {
	std::stack<char> pilha;
	
	for(int i = 0; i < exp.size(); i++) {
		switch (exp[i]){
		case ')': if(!pilha.empty() && pilha.top() == '(')
						pilha.pop();
				  else return false;
				  break;
		case ']': if(!pilha.empty() && pilha.top() == '[')
						pilha.pop();
				  else return false;
				  break;
		default : pilha.push(exp[i]);
			break;
		}
	}
	return pilha.empty();
}

int main() {
	std::string expression;
	getline(cin, expression);

	cout << boolalpha << bemFormada(expression) << endl;

	return 0;
}
