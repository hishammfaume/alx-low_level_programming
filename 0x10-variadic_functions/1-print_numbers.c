#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pa;
	va_start (pa,n);
	if (separator == NULL)
		separator = "";
	 for (i = 0; i < n; i++)
	 {
		 printf("%d", va_arg(pa,int));
		 if (i < n-1)
			 printf("%s", separator);
	 }
	 printf("\n");
	 va_end(pa);
}
