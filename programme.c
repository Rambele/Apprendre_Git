#include <stdlib.h>

void hello()
{
	printf("Hello word !\n");
}

int addition(int a,int b)
{
	return a+b;
}

int main()
{
	hello();
	int a=5,b=6;
	printf("le resultat est : %d\n",addition(a,b));
	return 0;
}
