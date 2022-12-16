#include "strlib.hpp"


using namespace strlib;
namespace strlib {
	int strlen(const char* string) {
		/*
		retorna a quantidade de caracteres de uma string
		*/


		int i = 0;

		while (string[i] != '\0') {
			i++;
		}
		return i;
	}
	
	bool strcmp(const char* string, const char* string2, bool ignorecase) {
		/*
		Compara duas string.

		false - s�o diferentes
		true - s�o iguais
		
		*/



		// verifica se o tamanho das string s�o diferentes(se for diferente obviamente n�o s�o iguais)
		int tamanho = strlib::strlen(string);
		if (tamanho != strlib::strlen(string2)) {
			return false;
		}

		int i = 0;
		while (string[i] != '/0') {
			//compara se ja foi percorrido toda a string, caso ja tenha percorrido toda string, finaliza o loop e retorna true
			if (i == tamanho) {
				break;
			}


			// caso o ignorecase esteja como false
			if (!ignorecase) {

				// verifica se o caracter na posi��o tal � o mesmo da outra string, caso n�o seja retorna false
				if (string[i] != string2[i]) {
					return false;
				}
			}

			else if ((strlib::lowerChar(string[i])) != (strlib::lowerChar(string2[i]))) {
		
				return false;
			}
			i++;
		}
		return true;
	}

	char lowerChar(const char caracter) {
		//caso seja entre A-Z, adicionando 32, corresponde a mesma letra minuscula na tabela ASCII
		if (caracter >= 'A' && caracter <= 'Z') {
			return (caracter + 32);
		}
		switch (caracter) {

			//A
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';


			// E
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';

			// I - � � � �
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';


			// O
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';

			// U - ����
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';


			// N
			case '�': return '�';


			// Y 
			case '�': return '�';
			case '�': return '�';



			//Especiais
			case '�': return '�';
			case '�': return '�';
			case '�': return '�';

		}
		return caracter;
		
	}

	bool isNumeric(const char* string) {
		int i = 0;
		while (string[i] != '\0') {
			if (!(string[i] >= '0' && string[i] <= '9')) {
				return false;
			}
			i++;
		}
		return true;
	}

	bool isAlfabetic(const char* string) {
		int i = 0;

		while (string[i] != '\0') {

			if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z') {
				i++;
				continue;
			}
			else if (string[i] >= '�' && string[i] <= '�' || string[i] >= '�' && string[i] <= '�') {
				i++;
				continue;
			}
			else if (string[i] >= '�' && string[i] <= '�' || string[i] >= '�' && string[i] <= '�') {
				i++;
				continue;
			}
			else if (string[i] >= '�' && string[i] <= '�' || string[i] >= '�' && string[i] <= '�') {
				i++;
				continue;
			}
			else if (string[i] >= '�' && string[i] <= '�' || string[i] == '�' || string[i] == '�' || string[i] == '�') {
				i++;
				continue;
			}



			return false;
		}


		return true;
	}

	void toLower(char* string) {
		int i = 0;
		while (string[i] != '\0') {
			string[i] = lowerChar(string[i]);
			i++;
		}
	}


	void replaceChar(char* string, const char oldChar, const char newChar) {
		int i = 0;
		while (string[i] != '0') {
			if (string[i] == oldChar) {
				string[i] = newChar;
			}
			i++;
		}
	}
}

