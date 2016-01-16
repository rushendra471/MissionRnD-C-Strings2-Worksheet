/*

Problem : Return the Last word in a string

Input : I will do this without using String Library
Output : Library

Note:Dont modify original string Neglect Spaces at the right end and at left end if required .
->Create a new string and return it , Use dynamic memory allocation .
*/
#include <stdlib.h>

char * get_last_word(char * str){
	if (str == NULL)
		return NULL;
	
	int start_ind = 0, cur_ind = 0;
	while (str[++cur_ind] != '\0')
		if (str[cur_ind - 1] == ' ' && str[cur_ind] != ' ')
			start_ind = cur_ind;
	
	char *last_word;
	last_word = (char *)malloc((cur_ind - start_ind) * sizeof(char));
	cur_ind = 0;
	
	while (str[start_ind] != '\0' && str[start_ind] != ' ')
		last_word[cur_ind++] = str[start_ind++];
	last_word[cur_ind] = '\0';
	
	return last_word;
}
