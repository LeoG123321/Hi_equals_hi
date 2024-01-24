/*
    Leonardo Gonzalez   1/23/2024

    "Hi" == "hi"?

    Write a function that allows case-insensitive comparison (a.k.a. ordering) of two strings.
*/

#include <iostream>
#include "strcmp.h"
using namespace std;

int main()
{
    //Differnce in ASCII: 32

	cout << strcmp_case_insensitive("Hello", "heLLO");
	return 0;

}

