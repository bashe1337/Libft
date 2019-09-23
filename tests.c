#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	//memset
	
	unsigned char src[15] = "0123456789";
	bzero(src, 10);
	printf("memset sys: %s\n", src);

	ft_memset(src, '2', 10);
	printf("memset my1: %s\n", src);

	//strlen
	


	//strdup
	
	char dupt[] = "lorem ipsum dolor sit amet";
	char *dupt1;
	dupt1 = strdup(dupt);
	printf("strdup sys: %s\n", dupt1);
	char *d2;
	d2 = ft_strdup(dupt);
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
	char cpynsrc[10] = "123456789";
	char cpyndst1[10] = "1111111111";
	char cpyndst2[10] = "1111111111";
	strncpy(cpyndst1, cpynsrc, 2);
	printf("strncpy sy: %s\n", cpyndst1);
	ft_strncpy(cpyndst2, cpynsrc, 2);
	printf("strncpy my: %s\n", cpyndst2);

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
	char testat[] = "-248524528529852820902342903249";
	printf("atoi sys: %d\n", atoi(testat));
	printf("atoi mys: %d\n", ft_atoi(testat));

	//memcpy
	unsigned char src1337[10]= "";
	
	// Массив приемник данных
	unsigned char dst1337[10]= "";

	// Копируем 6 байт из массива src в массив dst
	ft_memcpy(((void *)0), ((void *)0), 3);

	// Вывод массива dst на консоль
	printf ("dst: %s\n",dst1337);

	//memccpy

	unsigned char memcs[30] = "espkghmsfgkhmdfkghm";
	unsigned char memcd[30] =  "espkghmsfgkhmdfkghm";
	unsigned char memcd1[30] = "espkghmsfgkhmdfkghm";
	ft_memccpy(memcd, memcs, 'f', 20);
	memccpy(memcd1, &memcs, 'f', 20);
	printf("memccpy: %s\n", memcd);
	printf("memccpy: %s\n", memcd1);

	char *strr;
	char *strr1;
  	strr = strnstr("lorem ipsum dolor sit amet", "dolor", 18);
  	printf("%s\n", strr);
	strr1 = ft_strnstr("lorem ipsum dolor sit amet", "dolor", 18);
	printf("%s\n", strr1);

	printf("sqr %d", ft_sqr(2, 10));
	
	return (0);
}
