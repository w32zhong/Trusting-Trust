#include <stdio.h>
main()
{
	char n='\n';
	const char *s="#include <stdio.h>%cmain()%c{%c"
	              "char n='%cn';%cconst char *s=%c"
	              "%s%c;%cprintf(s, n, n, n, 92, n"
	              ", 34, s, 34, n);return 0;}";
	printf(s, n, n, n, 92, n, 34, s, 34, n);return 0;}
