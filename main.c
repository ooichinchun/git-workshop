#include <stdio.h>
#include <stdlib.h>

void hello1(void)
{
printf(stdout,"This is displayed\n");
}


void hello2(void)
{
printf(stdout,"This is also displayed\n");
}

int main(void)
{
hello1();
return EXIT_SUCCESS;
}

