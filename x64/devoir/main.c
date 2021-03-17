#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <error.h>
#include <fcntl.h>
#include <errno.h>


char *ft_strcpy(char* s1, char *s2);
int ft_strcmp(char* s1, char *s2);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t ft_read(int fd, void *buf, size_t count);



int main() {
	char *s = malloc(1000);
	bzero(s, 1000);
	char *s1 = "xibaochat";
	char *s2 = "xibaochat0";
	char *s3 = "xibaochat01";
	char *s4 = "xibaochat02";
	char *s5 = "xibaochat023";
	char *s6 = "";
	char *s7 = "xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023";
	char *s8 = "abc";
	char *s9 = "abd";


//test_strcpy
	/* printf("%s|%s|\n", ft_strcpy(s, s1), strcpy(s, s1)); */
	/* printf("%s|%s|\n", ft_strcpy(s, s2), strcpy(s, s2)); */
	/* printf("%s|%s|\n", ft_strcpy(s, s3), strcpy(s, s3)); */
    /* printf("%s|%s|\n", ft_strcpy(s, s4), strcpy(s, s4)); */
	/* printf("%s|%s|\n", ft_strcpy(s,s5), strcpy(s, s5)); */
	/* printf("%s|%s|\n", ft_strcpy(s,s6), strcpy(s, s6)); */
	/* printf("%s|%s|\n", ft_strcpy(s,s7), strcpy(s, s7)); */
//test_strcmp
	/* printf("%d|%d|\n", ft_strcmp(s, s1), strcmp(s, s1)); */
	/* printf("%d|%d|\n", ft_strcmp(s1, s2), strcmp(s1, s2)); */
	/* printf("%d|%d|\n", ft_strcmp(s, s6), strcmp(s, s6)); */
	/* printf("%d|%d|\n", ft_strcmp(s3, s4), strcmp(s3, s4)); */
	/* printf("%d|%d|\n", ft_strcmp(s8, s9), strcmp(s8, s9)); */

	//test_ft_write
	int a;
	int b;
	/* a = write(FOPEN_MAX + 1, "abcdefghijklmnopqrstuvwxyz\n", 27); */
	/* perror("write errno"); */
	/* errno = 100; */
    /* b = ft_write(FOPEN_MAX + 1, "abcdefghijklmnopqrstuvwxyz\n", 27); */
	/* perror("ft_write errno"); */
    /* printf("return write = %d\nreturn ft_write = %d\n", a, b); */


	/* a = write(FOPEN_MAX + 1,NULL, 27); */
	/* perror("write errno"); */
	/* errno = 100; */
    /* b = ft_write(FOPEN_MAX + 1, NULL, 27); */
	/* perror("ft_write errno"); */
    /* printf("return write = %d\nreturn ft_write = %d\n", a, b); */

	/* a = write(1, "abcdefghijklmnopqrstuvwxyz\n", 27); */
    /* b = ft_write(1, "abcdefghijklmnopqrstuvwxyz\n", 27); */


	//test ft_read
	int fd = open("cat.txt", O_RDONLY);
	char buffer[10];
	a = read(fd, buffer, 10);
	perror("read errno");
	printf("sys read:%d chars, they are :%s\n", a, buffer);

	b = ft_read(fd, buffer, 10);
	perror("ft_read errno");
	printf("maobe read:%d chars, they are :%s\n", b, buffer);

	close(fd);
//test ft_strdup
	printf("my str:%s|machine:%s|\n", ft_strdup(s1), strdup(s1));
    printf("my str:%s|machine:%s|\n", ft_strdup(s2), strdup(s2));
    printf("my str:%s|machine:%s|\n", ft_strdup(s3), strdup(s3));
    printf("my str:%s|machine:%s|\n", ft_strdup(s4), strdup(s4));
    printf("my str:%s|machine:%s|\n", ft_strdup(s5), strdup(s5));
    printf("my str:%s|machine:%s|\n", ft_strdup(s6), strdup(s6));
    printf("my str:%s|machine:%s|\n", ft_strdup(s7), strdup(s7));
    printf("my str:%s|machine:%s|\n", ft_strdup(s8), strdup(s8));



}
