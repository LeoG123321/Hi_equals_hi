/*
    Leonardo Gonzalez   1/23/2024

    "Hi" == "hi"?

    Write a function that allows case-insensitive comparison (a.k.a. ordering) of two strings.

    Notes: Differnce in ASCII: 32
*/

#include <iostream>
#include "strcmp.h"
using namespace std;

int main()
{
    cout << "Lower Case 'a': " << lowerCase('a') << endl;
    cout << "Lower Case 'A': " << lowerCase('A') << endl;
    cout << "Lower Case 'm': " << lowerCase('m') << endl;
    cout << "Lower Case 'M': " << lowerCase('M') << endl;
    cout << "Lower Case 'z': " << lowerCase('z') << endl;
    cout << "Lower Case 'Z': " << lowerCase('Z') << endl;

    cout << "\n Comparing Strings" << endl;
    cout << "-1 == String Input 1 is alphabetically first" << endl;
    cout << "0 == String Input 1 & String Input 2 are the Same" << endl;
    cout << "1 == String Input 2 is alphabetically first\n" << endl;

	cout << "Comparing 'Hello' & 'heLLO': " << strcmp_case_insensitive("Hello", "heLLO") << endl;
    cout << "Output Should be 0" << endl;
    cout << "Comparing 'aHello' & 'heLLO': " << strcmp_case_insensitive("aHello", "heLLO") << endl;
    cout << "Output Should be -1" << endl;
    cout << "Comparing 'Hello' & 'AheLLO': " << strcmp_case_insensitive("Hello", "AheLLO") << endl;
    cout << "Output Should be 1" << endl;
    cout << "Comparing 'ZHello' & 'heLLO': " << strcmp_case_insensitive("ZHello", "heLLO") << endl;
    cout << "Output Should be 1" << endl;
	
    return 0;
}

