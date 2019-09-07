#include "libft.h"
#include <stdio.h>

int main()
{
	//memset
	
	unsigned char src[15] = "1234567890";
	memset(src, '1', 10);
	printf("memset sys: %s\n", src);

	/*ft_memset(src, '2', 10);
	printf("memset my:", src);*/

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
	char catapp[40] = "First l\0ine";
	char catdst[40] = "Second line";
	ft_strcat(catdst, catapp);
	printf("strcat my: %s\n", catdst);

	//strncat
	char catnapp[20] = "0123456789";
	char catndst[40] = "000";
	ft_strncat(catndst, catnapp, 23);
	printf("strncat my: %s\n", catndst);

	return (0);
}
