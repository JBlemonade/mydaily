
#include <stdio.h>

void author_log(void);

int main(void)
{
	int max_value;

	max_value = max(555, 666);
	printf("%d\n", max_value);
	author_log();

	getchar();
	return 0;
}

/* giao */
void author_log(void)
{
	printf("author name: dingyc  \n");
	printf("author email: dingyc_ee@yeah.net  \n");
}







