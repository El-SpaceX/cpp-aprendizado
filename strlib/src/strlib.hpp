#pragma once

namespace strlib {
	int strlen(const char* string);
	bool strcmp(const char* string, const char* string2, bool ignorecase = false);


	bool isNumeric(const char* string);
	bool isAlfabetic(const char* string);

	char lowerChar(char caracter);
	void toLower(char* string);
	void replaceChar(char* string, const char oldChar, const char newChar);

	
	void strcat(char* dest, const char* source, int maxlength);
	void strcpy(char* dest, const char* source, int maxlength);

}

