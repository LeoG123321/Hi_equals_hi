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

	cout << strcmp_case_insensitive("Hello", "heLLO") << endl;
    cout << strcmp_case_insensitive("aHello", "heLLO") << endl;
    cout << strcmp_case_insensitive("Hello", "AheLLO") << endl;
    cout << strcmp_case_insensitive("ZHello", "heLLO") << endl;
	
    return 0;
}

