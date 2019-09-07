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
	return (0);
}
