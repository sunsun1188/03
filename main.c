#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char c;
	int i;
	
	printf("input a number :");
	scanf("%c", &c);
	
	i=c-'0';  //c�� ����� ���� ���� ���ڷ� ��ȯ�ϴ� �� 
	printf("The input number ASCII is %i\n",c);
	printf("The input number is %i\n", i);
	
	system("Pause");
	return 0;
}
