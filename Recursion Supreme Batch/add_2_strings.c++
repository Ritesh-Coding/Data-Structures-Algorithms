// C program to concatenate two
// strings with the help of
// recursion
#include <stdio.h>
#include <string.h>

void concatenate_string(char* s, char* s1)
{

	static int i = 0;
	static int j = strlen(s);

	if (i>=strlen(s1)) {
		s1[i] = '\0';
	}
	else {
		s[i + j] = s1[i];
		i++;
		concatenate_string(s, s1);
	}
}
int main()
{

	char s[6] = "Geeks";
	
	char s1[9] = "forGeeks";

	// function concatenate_string
	// called and s1 and s2 are
	// passed
	concatenate_string(s, s1);

	printf("\nConcatenated String is: '%s'\n", s);

	return 0;
}
