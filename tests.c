#include "libft.h"
#include <stdio.h>

int main()
{
	//memset
	
	unsigned char src[15] = "0123456789";
	memset(src, '2', 10);
	printf("memset sys: %s\n", src);

	ft_memset(src, '2', 10);
	printf("memset my: %s\n", src);

	//strlen
	
	char strlentest[] = "Hello World!";
	printf("strlen sys: %lu\n", strlen(strlentest));
	printf("strlen my: %lu\n", ft_strlen(strlentest));

	//strdup
	
	char dupt[] = "Hello bruh";
	char *dupt1;
	dupt1 = strdup(dupt);
	printf("strdup sys: %s\n", dupt1);
	char *d2;
	d2 = strdup(dupt);
	printf("strdup my: %s\n", d2);
	
	//strcpy
	char cpysrc[] = "First line \0 bruh";
	char cpydst[15];
	char cpydst2[15];
	strcpy(cpydst, cpysrc);
	printf("strcpy sys: %s\n", cpydst);
	ft_strcpy(cpydst2, cpysrc);
	printf("strcpy my: %s\n", cpydst2);
	
	//strncpy
	/*char cpynsrc[10] = "12345\0006789";
	char cpyndst1[10] = "1111111111";
	char cpyndst2[10] = "1111111111";
	strncpy(cpyndst1, cpynsrc, 2);
	printf("strncpy sys: %hu\n", (unsigned short)cpyndst1);
	ft_strncpy(cpyndst2, cpynsrc, 2);
	printf("strncpy my: %hu\n", (unsigned short)cpyndst2);*/

	//strcat
	char catapp[40] = "First line";
	char catdst[40] = "Second line";
	ft_strcat(catdst, catapp);
	printf("strcat my: %s\n", catdst);

	//strncat
	char catnapp[20] = "0123456789";
	char catndst[40] = "000";
	ft_strncat(catndst, catnapp, 3);
	printf("strncat my: %s\n", catndst);

	//strchr
	char chrstr[] = "01232456789";
	int chrch = '6';
	char *ach;
	ach = strchr(chrstr, chrch);
	printf("strch sys: %ld\n", (ach - chrstr + 1));

	//ft_atoi
	char testat[] = "12q3";
	printf("atoi sys: %d\n", atoi(testat));
	printf("atoi mys: %d\n", ft_atoi(testat));

	return (0);
}
