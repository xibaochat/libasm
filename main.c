#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
#include <fcntl.h>
#include <errno.h>

size_t ft_strlen(const char *s);
char *ft_strcpy(char* s1, char *s2);
int ft_strcmp(char* s1, char *s2);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);
char *ft_strdup(const char *s);

void test_ft_strlen()
{
	char *s = "sesamel=meilvmaobemiao";
	char *s1 = "xibaochat00";
	char *s2 = "xibaochat0";
	char *s3 = "xibaochat01";
	char *s4 = "xibaochat02";
	char *s5 = "xibaochat023";
	char *s6 = "";
	char *s7 = "xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023";
	char *s8 = "abc";
	char *s9 = "abd";

	printf("\n================================\n");
	printf("========== FT_STRLEN ===========\n");
	printf("================================\n\n");
	printf("my str:%ld|machine:%ld|\n\n", ft_strlen(s1), strlen(s1));
    printf("my str:%ld|machine:%ld|\n\n", ft_strlen(s2), strlen(s2));
    printf("my str:%ld|machine:%ld|\n\n", ft_strlen(s3), strlen(s3));
    printf("my str:%ld|machine:%ld|\n\n", ft_strlen(s4), strlen(s4));
    printf("my str:%ld|machine:%ld|\n\n", ft_strlen(s5), strlen(s5));
    printf("my str:%ld|machine:%ld|\n\n", ft_strlen(s6), strlen(s6));
    printf("my str:%ld|machine:%ld|\n\n", ft_strlen(s7), strlen(s7));
    printf("my str:%ld|machine:%ld|\n\n", ft_strlen(s8), strlen(s8));
	printf("strlen test is finished\n");

}

void test_ft_strcpy()
{
	char s[200];
	char *s1 = "xibaochat00";
	char *s2 = "xibaochat0";
	char *s3 = "xibaochat01";
	char *s4 = "xibaochat02";
	char *s5 = "xibaochat023";
	char *s6 = "";
	char *s7 = "xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023";
	char *s8 = "abc";
	char *s9 = "abd";

	printf("\n================================\n");
	printf("========== FT_STRCPY ===========\n");
	printf("================================\n\n");
	printf("my str:%s|machine:%s\n\n", ft_strcpy(s, s1), strcpy(s, s1));
	printf("my str:%s|machine:%s\n\n", ft_strcpy(s, s2), strcpy(s, s2));
	printf("my str:%s|machine:%s\n\n", ft_strcpy(s, s3), strcpy(s, s3));
    printf("my str:%s|machine:%s\n\n", ft_strcpy(s, s4), strcpy(s, s4));
	printf("my str:%s|machine:%s\n\n", ft_strcpy(s,s5), strcpy(s, s5));
	printf("my str:%s|machine:%s\n\n", ft_strcpy(s,s6), strcpy(s, s6));
	printf("my str:%s|machine:%s\n\n", ft_strcpy(s,s7), strcpy(s, s7));
}

void test_ft_strcmp()
{
	char *s = "sesamel=meilvmaobemiao";
	char *s1 = "xibaochat00";
	char *s2 = "xibaochat0";
	char *s3 = "xibaochat01";
	char *s4 = "xibaochat02";
	char *s5 = "xibaochat023";
	char *s6 = "";
	char *s7 = "xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023";
	char *s8 = "abc";
	char *s9 = "abd";

	printf("\n================================\n");
	printf("========== FT_STRCMP ===========\n");
	printf("================================\n\n");

	printf("%d %d \n", strcmp(s, s1), ft_strcmp(s, s1));
	printf("%d|%d\n", strcmp(s1, s2), ft_strcmp(s1, s2));
	printf("my return value:%d|machine:%d\n\n",strcmp(s, s6), ft_strcmp(s, s6));
	printf("my return value:%d|machine:%d\n\n", ft_strcmp(s3, s4), strcmp(s3, s4));
	printf("my return value:%d|machine:%d\n\n", ft_strcmp(s8, s9), strcmp(s8, s9));
}

void test_ft_write()
{

	printf("\n================================\n");
	printf("========== FT_WRITE ===========\n");
	printf("================================\n\n");
	int a;
	int b;
	printf("=============FST ERROR TEST===========\n");
	a = write(FOPEN_MAX + 1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	perror("write errno");
	errno = 100;
    b = ft_write(FOPEN_MAX + 1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	perror("\nft_write errno");
    printf("\nmachine return  write = %d\nmy return ft_write = %d\n", a, b);


	printf("=============FST ERROR TEST===========\n");
	a = write(FOPEN_MAX + 1,NULL, 27);
	perror("write errno");
	errno = 100;
    b = ft_write(FOPEN_MAX + 1, NULL, 27);
	perror("ft_write errno");
    printf("return write = %d\nreturn ft_write = %d\n", a, b);

	a = write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
    b = ft_write(1, "abcdefghijklmnopqrstuvwxyz\n", 27);
	printf("machine return write = %d\nmy return ft_write = %d\n", a, b);

}

void test_ft_read()
{

	printf("\n================================\n");
	printf("========== FT_READ ===========\n");
	printf("================================\n\n");
	int a, b;
	int fd = open("cat.txt", O_RDONLY);
	char buffer[10];
	a = read(fd, buffer, 10);
	perror("read errno");
	printf("\nsys read:%d chars, they are :%s\n", a, buffer);

	b = ft_read(fd, buffer, 10);
	perror("\nft_read errno");
	printf("my libasm read:%d chars, they are :%s\n", b, buffer);

	close(fd);
}

void test_ft_strdup()
{

	printf("\n================================\n");
	printf("========== FT_STRDUP ===========\n");
	printf("================================\n\n");
	char *s = "sesamel=meilvmaobemiao";
	char *s1 = "xibaochat00";
	char *s2 = "xibaochat0";
	char *s3 = "xibaochat01";
	char *s4 = "xibaochat02";
	char *s5 = "xibaochat023";
	char *s6 = "";
	char *s7 = "xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023";
	char *s8 = "abc";
	char *s9 = "abd";
	printf("my str:%s|machine:%s|\n\n", ft_strdup(s1), strdup(s1));
    printf("my str:%s|machine:%s|\n\n", ft_strdup(s2), strdup(s2));
    printf("my str:%s|machine:%s|\n\n", ft_strdup(s3), strdup(s3));
    printf("my str:%s|machine:%s|\n\n", ft_strdup(s4), strdup(s4));
    printf("my str:%s|machine:%s|\n\n", ft_strdup(s5), strdup(s5));
    printf("my str:%s|machine:%s|\n\n", ft_strdup(s6), strdup(s6));
    printf("my str:%s|machine:%s|\n\n", ft_strdup(s7), strdup(s7));
    printf("my str:%s|machine:%s|\n\n", ft_strdup(s8), strdup(s8));

}

int main()
{
	test_ft_strlen();
	test_ft_strcpy();
	test_ft_strcmp();
	test_ft_write();
	test_ft_read();
	test_ft_strdup();
	return (0);
}
