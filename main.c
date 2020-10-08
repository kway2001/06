#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int get_integer() //정수 입력
{
	int x;
	
	printf("input a number: ");
	scanf("%i", &x);
	
	return x;
}

int factorial(int n) //팩 계산
{
	int i, result=1;
	for(i=1; i<=n; i++)
		{
			result = result * i;
		}
	return result;
}

int combination(int n, int r) // c 계산 
{
	int x, y, z; //x가 분자 y,z가 분모
	x = factorial(n);
	y = factorial(n-r);
	z = factorial(r);
	
	return (x/y/z); 
}


int main(int argc, char *argv[]) {
	
	//변수 선언 
	int n, r, result;
	//n,r 입력 
	n = get_integer(n);
	r = get_integer(r);
	
	result = combination(n,r);
	
	printf("result is %i", result);
		
	return 0;
}
