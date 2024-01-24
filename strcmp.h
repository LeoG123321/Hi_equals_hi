#pragma once
#include <iostream>
using namespace std;
class strcmp
{
	char lowerCase(char letter) {			//Puts letters in upper case to lower case
		if (static_cast<int>(letter) >= 65 && static_cast<int>(letter) <= 90){	//Checks for the ACSII values that have uppercase letters
			return (static_cast<int>(letter) + 32);			//Changes the ACSII of the letter to find it's lower case version of the upper case letter
		}
		else {
			return letter;		//Returns lower case letters that were inputed
		}
	}

	int strcmp_case_insensitive(string string_1, string string_2) {			//compares 2 strings while being case insensitive
		
		int limit;

		if (string_1.size() > string_2.size()) {			//finds which string is a smaller size
			limit = string_2.size();
		}
		else if (string_1.size() < string_2.size()) {
			limit = string_1.size();
		}
		else {
			limit = string_1.size();
		}
											//Sets the loop to stop at the end of the smallest string
		for (int i = 0; i < limit; i++) {			//Loops to compare two strings 
			if (lowerCase(string_1[i]) > lowerCase(string_2[i])) {
				return 1;							//String 1 is larger
			}
			else if (lowerCase(string_1[i]) < lowerCase(string_2[i])) {
				return -1;							//String 2 is larger
			}
		}
		return 0;									//Both string are the same
	}
};

