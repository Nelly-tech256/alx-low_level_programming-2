/**
 * check_specifier - check that character is valid specifier and
 *                   assigns an appropiate function for its printing.
 * @format: the specifier (char*0
 *
 * return: pointer to functin
 */

int (*check_specifier(char *format))(va_list)
{
	int i;

	func_t my_array[4] = {
		{'c', print_char},
		{'s',print_str},
	   	{'%',print_pcent},
	  	{NULL, NULL}};

	for (i = 0; my_array[i].t != NULL; i++)//t is the character pointer
		                                //from our header file
	{
		if (my_array[i] == *format)
		{
			return (my_array[i].f);//f is the function func ptr from the header file

	}
		return (NULL);
}

