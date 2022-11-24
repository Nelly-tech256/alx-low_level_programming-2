#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int printf (const char *format, ...)
{
	va_list args;
	int done;

	char *substring = strstr(format, "jacob");
	if(substring != format) return 0;

	va_start (args, format);
	done = vfprintf (stdout, format, args);//takes a string to stdoutput
	va_end (args);

	return done;

}

int main(void)
{
	printf("something we dont want to say.\n");
	printf("nelly say, \"hello guys\"\n");
}



