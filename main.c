#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int get_integer() //���� �Է�
{
	int x;
	
	printf("input a number: ");
	scanf("%i", &x);
	
	return x;
}

int factorial(int n) //�� ���
{
	int i, result=1;
	for(i=1; i<=n; i++)
		{
			result = result * i;
		}
	return result;
}

int combination(int n, int r) // c ��� 
{
	int x, y, z; //x�� ���� y,z�� �и�
	x = factorial(n);
	y = factorial(n-r);
	z = factorial(r);
	
	return (x/y/z); 
}


int main(int argc, char *argv[]) {
	
	//���� ���� 
	int n, r, result;
	//n,r �Է� 
	n = get_integer(n);
	r = get_integer(r);
	
	result = combination(n,r);
	
	printf("result is %i", result);
		
	return 0;
}
