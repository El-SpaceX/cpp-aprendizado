#pragma once

namespace strlib {
	int strlen(const char* string);
	bool strcmp(const char* string, const char* string2, bool ignorecase = false);
	bool isNumeric(const char* string);
	char lowerChar(char caracter);
	void toLower(char* string);
	void replaceChar(char* string, const char oldChar, const char newChar);
	bool isAlfabetic(const char* string);
	
	
	// void strcat(char* string, char* source);
	// void strcpy(char* string, char* source);

}

