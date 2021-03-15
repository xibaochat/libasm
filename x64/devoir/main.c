#include <stdio.h>
#include <string.h>

int ft_strlen(char* addr);

int main() {
	char *s1 = "xibaochat";
	char *s2 = "xibaochat0";
	char *s3 = "xibaochat01";
	char *s4 = "xibaochat02";
	char *s5 = "xibaochat023";
	char *s6 = "";
	char *s7 = "xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023xibaochat023";
    printf("%d %d\n", ft_strlen(s1), (int)strlen(s1));
	printf("%d %d\n", ft_strlen(s2), (int)strlen(s2));
	printf("%d %d\n", ft_strlen(s3), (int)strlen(s3));
    printf("%d %d\n", ft_strlen(s4), (int)strlen(s4));
	printf("%d %d\n", ft_strlen(s5), (int)strlen(s5));
	printf("%d %d\n", ft_strlen(s6), (int)strlen(s6));
	printf("%d %d\n", ft_strlen(s7), (int)strlen(s7));

}
