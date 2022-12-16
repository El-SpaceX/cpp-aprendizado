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

		false - sгo diferentes
		true - sгo iguais
		
		*/



		// verifica se o tamanho das string sгo diferentes(se for diferente obviamente nгo sгo iguais)
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

				// verifica se o caracter na posiзгo tal й o mesmo da outra string, caso nгo seja retorna false
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
			case 'Г': return 'г';
			case 'В': return 'в';
			case 'А': return 'а';
			case 'Б': return 'б';
			case 'Е': return 'е';
			case 'Д': return 'д';


			// E
			case 'Й': return 'й';
			case 'К': return 'к';
			case 'Л': return 'л';
			case 'И': return 'и';

			// I - Н О П М
			case 'Н': return 'н';
			case 'О': return 'о';
			case 'П': return 'П';
			case 'М': return 'м';


			// O
			case 'У': return 'у';
			case 'Ф': return 'ф';
			case 'Т': return 'т';
			case 'Х': return 'х';
			case 'Ц': return 'ц';

			// U - ЪЫЩЬ
			case 'Ъ': return 'ъ';
			case 'Ы': return 'ы';
			case 'Щ': return 'щ';
			case 'Ь': return 'ь';


			// N
			case 'С': return 'с';


			// Y 
			case 'Э': return 'э';
			case 'џ': return 'я';



			//Especiais
			case 'З': return 'з';
			case 'Ж': return 'ж';
			case 'Ш': return 'ш';

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
			else if (string[i] >= 'З' && string[i] <= 'Й' || string[i] >= 'ф' && string[i] <= 'Ь') {
				i++;
				continue;
			}
			else if (string[i] >= 'б' && string[i] <= 'С' || string[i] >= 'Б' && string[i] <= 'А') {
				i++;
				continue;
			}
			else if (string[i] >= 'К' && string[i] <= 'П' || string[i] >= 'Ф' && string[i] <= 'Х') {
				i++;
				continue;
			}
			else if (string[i] >= 'Ъ' && string[i] <= 'Э' || string[i] == 'г' || string[i] == 'Г' || string[i] == 'У') {
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

