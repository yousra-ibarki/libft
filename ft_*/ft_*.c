/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_*.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoibarki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:56:15 by yoibarki          #+#    #+#             */
/*   Updated: 2022/10/11 15:56:46 by yoibarki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//function 1 = isalpha
/*int	ft_islower(unsigned char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isupper(unsigned char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	unsigned char a;
	a = (unsigned char) c;
	//a = c + '0';
	if (ft_isupper(a) || ft_islower(a))
		return (1);
	else
		return (0);
}

int main()
{
	unsigned char a = '[';
	printf("%d", ft_isalpha(a));
}*/
//function 2 = isdigit
/*int	ft_isdigit(int c)
{
	unsigned char a;

	a = c + '0';
	if (a >= '0' && a <= '9')		
		return (1);
		return (0);
}
int main()
{
	int c = 9;
	printf("%d", ft_isdigit(c));
}*/
//function 3 = isalnum
/*int	ft_islower(unsigned char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}

int	ft_isupper(unsigned char a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_isalpha(int c)
{
	unsigned char	a;
	
	a = (unsigned char)c;
	if (ft_isupper(a) || ft_islower(a))
		return (1);
	else
		return (0);
}

int	ft_isdigit(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int c)
{
	unsigned char	a;

	a = (unsigned char) c;
	if (ft_isalpha(a) || ft_isdigit(a))
		return (1);
	else
		return (0);
}

int main()
{
	printf("%d", ft_isalnum('['));
}*/
//function 4 = isascii
/*int	ft_isascii(int c)
{
	unsigned char	a;

	a = (unsigned char)c;
	if(a >= 0 && a <= 127)
		return (1);
	else
		return (0);
}

int main()
{
	printf("%d", ft_isascii(128));
}*/
//function 5 = isprint
/*int	ft_isprint(int c)
{
	unsigned char	a;
	
	a = (unsigned char)c;
	if(a >= 32 && a <=126)
		return (1);
	else
		return (0);
}
int main()
{
	printf("%d", ft_isprint('5'));
}*/
//function 6 = strlen
/*size_t	ft_strlen(const char *s)
{
	int i;
	i = 0;
	while(s[i])
	{
		i++;
	}
	return i;
}*/
//function 7 = memset
/*void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*t;

	t = (unsigned char *)b;
	while (len > 0)
	{
		*t = c;
		t++;
		len--;
	}
	return (b);
}

int main()
{
	void	*s;

	ft_memset(s, 89, 5);
	printf("%s", s);
	return 0;
}*/
//function 8 = bzero
/*void	ft_bzero(void *s, size_t n)
{
	char *l;

	l = (char *)s;
	while(n > 0)
	{
		*l = '\0';
		l++;
		n--; 
	}
}
int main()
{
	void *s;
	ft_bzero(s, 8);
	printf("%s", s);
	return 0;
}*/
//function 9 = memcpy
/*void *ft_memcpy(void *dst, const void *src, size_t n)
{
	char *dest;
	char *sr;

	dest = (char *)dst;
	sr = (char *)src;
	while(n > 0)
	{
		*dest = *sr;
		dest++;
		sr++; 
		n--;
	}
	return dest;
}
int main()
{
	
	char s[] = "heo";
	char d[] = "word";

	printf("%s", (char *)ft_memcpy(d, s, 1));
}*/
//function 10 = memmove 	
/*void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest = (char *)dst;
	const char	*sr = (const char *)src;
	if (dst == src)
	{
		return (dst);
		}
		else if (dst > src)// overlapping
		{
			while(len--)
			{
				dest[len] = sr[len];
			}//  *dest = '\0';
				return (dst);
		}
		while (len--)
		*dest++ = *sr++;// *dest = '\0';
		return (dst);
}

int main()
{
	char s[] = "world";
	printf("%s\n", (char *)ft_memmove(s+2, s, 3));
	//printf("%s", (char *)memmove(s+2, s, 3));

	return 0;
}*/
//function 11 = strlcpy
/*size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int i = 0;
	size_t lens = strlen(src);

	if (dstsize == 0)
	return (lens);
	else 
	{
		while(i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
			dst[i] = '\0';
			//printf("%s\n", dst);
			return (lens);
	}
}
int main()
{
	char d[] = "hello";
	char s[] = "wd";
	printf("%zu\n", ft_strlcpy(d, s, 3));
	printf("%lu", strlcpy(d, s, 3));
}*/
//function 12 = strlcat
/*size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i, j;
    size_t lend = strlen(dst);
    size_t lens = strlen(src);
    i = 0;
    j = lend;
    if(dstsize == 0)
    return lend;
    else if(dstsize < lens)
    return (lend + dstsize);
    if(dstsize > lens)
    {
        while(src[i] && lend + i > dstsize)
        {
            dst[j] = src[i];
            j++;
            i++;
        }
    }
    if(j + i > dstsize && j < dstsize)
    dst[j-1] = '\0';
    else
    dst[j] = '\0';
    return (lend + lens);
    
}
int main()
{
    char dst[] = "hello";
    char src[] = "world";
    printf("%ld", ft_strlcat(dst, src, 3));
    printf("%ld", strlcat(dst, src, 3));
    return 0;
}
*/
//function 13 = toupper
/*int	ft_toupper(int c)
{
	unsigned char a;

	a = (unsigned char)c;
	if (a > 96 && a < 123)
	return (a -= 32);
	else
	return (c);
}
int main()
{
	printf("%d", ft_toupper('a'));
}*/
//function 14 = tolower
/*int	ft_tolower(int c)
{
	unsigned char a;

	a = (unsigned char)c;
	if (a > 64 && a < 91)
	return (a += 32);
	else
	return (c);
}
int main()
{
	printf("%d", ft_tolower('B'));
}*/
//function 15 = strchr
/*char *ft_strchr(const char *s, int c)
{
	int i;
	
	i = 0;
	while(s[i])
	{
		if(s[i] == c)
		{
			return ((char *)s + i);
		}
		i++;
	}
	if(s[i] == '\0')
	return ((char *)s + i);
	return 0;
}

int main()
{
	char tab[] = "hello";

	printf("%s\n", ft_strchr(tab, 'e'));
   printf("%s", strchr(tab, 'e'));
	return 0;
}*/
//function 16 = strrchr
/*char *ft_strrchr(const char *s, int c)
{
	//char cc = (char) c;
	int lens = strlen(s);
	while(s[lens] || s[lens] == '\0')
	{
		if(s[lens] == c)
		return (char *)s + lens;
		lens--;
	}
	return 0;
}
int main()
{
	char s[] = "helloee";
	printf("%s\n", ft_strrchr(s, 'e'));
	printf("%s", strrchr(s, 'e'));
}*/
//function 17 = strncmp
/*int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i = 0;
	while(i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
		
	return s1[i] - s2[i];
}
int main()
{
	char s1[] = "gello";
	char s2[] = "hello";
	printf("%d", ft_strncmp(s1, s2, 3));

	return 0;
}*/
//function 18 = memchr
/*void *ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *ss;
	i = 0;
	ss = (unsigned char *)s;
	while(i < n)
	{
		if(ss[i] == c)
		return (unsigned char *)(s + i);
		else if(ss[i] == '\0')
		return (unsigned char *)(s + i);
		i++;
	}
	return 0;
}
int main()
{
	char tab[] = "hello";
	printf("%s\n", ft_memchr(tab, 'e', 3));
	printf("%s", memchr(tab, 'e', 3));
	return 0;
}*/
//function 19 = memcmp
/*int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *ss;
	const unsigned char *sss;
	size_t i = 0;

	ss = (unsigned char *)s1;
	sss = (unsigned char *)s2;
	while(i < n && ss[i] && sss[i] && ss[i] == sss[i])
	i++;
	int result = ss[i] - sss[i];
	return (result);
}
int main()
{
	char s[] = "hfllo";
	char ss[] = "hello";
	printf("%d\n", ft_memcmp(s, ss, 3));
	printf("%d", memcmp(s, ss, 3));
}*/
//function 20 = strnstr
/*char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;
    size_t j = 0;
    char *rephay = (char *)haystack;
    if(*needle == '\0')
    return (rephay);
    while(haystack[i] && i < len)
    {
        while(haystack[i+j] && needle[j] && haystack[i+j] == needle[j] && i + j < len)
        {
            j++;
        }
        if(needle[j]=='\0')
            return rephay +i;
        i++;
    }
    return 0;
}
int main()
{
    char h[]="home sweet home";
    char n[]="sweet";
    printf("%s", ft_strnstr(h, n, 9));

    return 0;
}*/
//function 21 = atoi
/*int ft_atoi(const char *str)
{
    int out = 0;
    int i = 0;
    int sign = 1;
    if(str[i] <= 32)
    i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        sign = -1;
        i++;
    }
    while(str[i] > '0' && str[i] < '9' && str[i])
    {
        out *= 10;
        out += str[i] - '0';
        i++;
    }
    return (out * sign);
}
int main()
{
    char str[]="--123";
    printf("%d\n", ft_atoi(str));
    printf("%d", atoi(str));

    return 0;
}*/
//function 22 = calloc
/*void *ft_calloc(size_t count, size_t size)
{
    void *p;
    p = malloc(count * size);
    if(p == NULL)
    return NULL;
    bzero(p, count);
    return p;
}

int main()
{
    printf("%s", (char *)ft_calloc(0, 0));

    return 0;
}*/

