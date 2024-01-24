#pragma once
#include <iostream>
using namespace std;
class strcmp
{
	int strcmp_case_insensitive(string string_1, string string_2) {			//
		
		int limit;

		if (string_1.size() > string_2.size()) {
			limit = string_2.size();
		}
		else if (string_1.size() < string_2.size(0)) {
			limit = string_1.size();
		}
		else {
			limit = string_1.size();
		}

		for (int i = 0; i < limit; i++) {
			if (string_1[i] > string_2[i]) {
				return 1;
			}
			else if (string_1[i] < string_2[i]) {
				return -1;
			}
		}
		return 0;
	}
};

