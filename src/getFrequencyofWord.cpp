/*

Problem : Return the Count of how many times the word occurred in given string in two ways
Way1: Not using Recursion
Way2:Using Recursion [Optional]

Input : "Hello HelloAgain HelloAGAINAGAIN commonItsHelloagain","Hello"
Output : 4

Note: Dont modify original str or word,Just return count ,Spaces can also be part of words like "ab cd" in "ab cd ab cd" returns 2
*/

#include <stdlib.h>

int count_word_in_str_way_1(char *str, char *word){
	if (str == NULL || word == NULL)
		return 0;
	int cnt = 0;

	for (int i = 0; str[i] != '\0' ; i++){
		int j;
		for (j = 0; word[j] != '\0'; j++)
			if (str[i + j] != word[j])
				break;
		if (word[j] == '\0')
			cnt++;
	}
	return cnt;
}

int count_word_int_str_way_2_recursion(char *str, char *word) {
	int i = 0;
	if (str[i] == '\0')
		return 0;
	
	while (word[i] != '\0') {
		if ((str[i] == '\0') || (word[i] != str[i]))
			return count_word_int_str_way_2_recursion(str + 1, word);
		i++;
	}
	return 1 + count_word_int_str_way_2_recursion(str + 1, word);
}