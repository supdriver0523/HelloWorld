#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////ʹ��getchar��putchar
//int main()
//{
//	int ch = 0;
//
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������\n");
//	scanf("%s", password);//���߻������е�password
//	printf("��ȷ������(Y/N)\n");
//	
//	int tmp = 0;
//	while (( tmp = getchar()) != '\n')
//	{
//		;
//	}
//	int ch = getchar();
//	if ('Y' == ch)
//	{
//		printf("����ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��ʧ��");
//	}
//
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch >'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

////ʹ��forѭ��
//int main()
//{
//	for (int i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

////ʹ��do while
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//
//}

////����n�Ľ׳�
//int main()
//{
//	printf("������n��ֵ:");
//	int n_value = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (n ; n > 0; n--)
//	{
//		n_value = n_value * n;
//	}
//	printf("���Ϊ%d", n_value);
//	return 0;
//}

////1~10�Ľ׳˺�
//int fn(int a)     //���ڼ�������ֵ�Ľ׳�
//{
//	int op = 1;
//	for (a; a > 0; a--)
//	{
//		op = op * a;
//	}
//	return op;
//}
//
//int main()
//{
//	int i = 1;
//	int Sum = 0;
//	for (i = 1; i <=3; i++)//1~10�Ľ׳�
//	{
//		Sum += fn(i);
//	}
//	printf("���Ϊ%d", Sum);
//	return 0;
//}

////���ַ�
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 11;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1 ;
//	int mid = (left + right) / 2;
//
//	while (mid != key)
//	{
//		if (left > right)
//		{
//			printf("�Ҳ���");
//			return 0;
//		}
//		if (mid > key)
//		{
//			right -= 1;
//			mid = (left + right) / 2;
//		}
//		else
//		{
//			left += 1;
//			mid = (left + right) / 2;
//		}
//	}
//	printf("%d�ڵ�%d��", key, (mid + 1));
//	return 0;
//}
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "welcome to wonder land!!!";
	char arr2[] = "#########################";
	int left = 0;
	int right = sizeof(arr1) - 2;

	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
		Sleep(1000);//����һ��
		system("cls");//����
	}
	printf("%s\n", arr2);
	return 0;
}

