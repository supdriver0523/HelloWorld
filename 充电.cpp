#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>
#include <string.h>
int main()
{
	char arr_up[] = "==================";
	char arr_mid[] = "=*****************||";
	char arr_emp[] = "=                 ||";
	int len = strlen(arr_up) - 1;
	int i = 1;
	//��ʾ�յ��
	printf("%s\n", arr_up);
	printf("%s\n", arr_emp);
	printf("%s\n", arr_emp);
	printf("%s\n", arr_up);
	printf("�������㣬�������");
	Sleep(1000);
	for (i; i < len; i++)
	{
		system("cls");
		arr_emp[i] = arr_mid[i];
		printf("%s\n", arr_up);
		printf("%s\n", arr_emp);
		printf("%s\n", arr_emp);
		printf("%s\n", arr_up);
		Sleep(1000);

	}
	printf("������");
	return 0;
}