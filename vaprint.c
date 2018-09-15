#include <stdio.h>
#include <stdarg.h>

//function to explain about variable argument functions like printf()
void minprintf( char *fmt, ...)
{
	va_list ap;                 //variable-argument list variable
 	char *p, *sval;
	int ival;
	
	va_start(ap,fmt);           //second arg is first unnamed argument(fmt) 
	
	for( p = fmt; *p; p++) 
	{
		if( *p != '%')
		{
			putchar(*p);
			continue;
		}
		
		switch(*++p)
		{
			case 'd':
				ival = va_arg(ap,int);
				printf("%d", ival);
				break;
				
			case 's':
				for(sval = va_arg(ap,char *); *sval; sval++)
					putchar(*sval);
				break;
				
			default:
				putchar(*p);
				break;
		}
		
	}
	
	va_end(ap);                   // for cleaning up the va_ variables
}				
				

//main function
int main(int argc, char *argv)
{
	int i = 10;
	char *str = "Hello world";
	
	minprintf("The string is %s and the value is %d\n", str, i);
	
}
		
		
		
		
		
	
