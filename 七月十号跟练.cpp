#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()      //ʹ���ж����
//{
//	int Inpute = 0;
//
//	printf("�Ƿ�������(1/0)\n");
//	scanf("%d", &Inpute);
//	if (Inpute == 1)
//	{
//		printf("�����۸߳ɱ�\n");
//	}
//	else
//	{
//		printf("�����۵ͳɱ�\n");
//	}
//
//
//	return 0;
//}


//int main()               //ѭ�����
//{
//	int line = 0;
//	while (line < 200)
//	{
//		printf("\"д����\"%d\n", line);
//		line++;
//	}
//	if (line == 200);
//	{
//		printf("��óɾͣ���ѧ��");
//	}
//
//	return(0);
//
//}


//int ADD(int Num1, int Num2)//ʹ�ú���
//{
//	return Num1 + Num2;
//}
//
//
//int main()
//{
//	int Num1=0, Num2=0;
//	scanf("%d %d", &Num1, &Num2);
//	int Output = ADD(Num1, Num2);
//	printf("%d\n", Output);
//	return 0;
//}


////����
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,9,20 };
//	char ch1[5] = { 'a','b','c' };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr1[i]);
//		i++;
//	}
//	return 0;
//}

//������
//����sizeof��������Ԫ�ظ���
//int main()
//{
//	int arr[20] = { 0 };
//	int Size = 0;
//	Size = sizeof(arr) / sizeof(arr[0]);
//	printf("�����Ԫ�ظ���Ϊ%d\n", Size);
//	return 0;
//}


////��λȡ��1001>>0110>>0101>>1010==-2
//int main()
//{
//	int a = 1;
//	printf("%d\n", ~a);
//	
//	return 0;
//
//}


//��Ŀ������---a/b�еĽϴ���
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	max = a > b ? a : b;
//	printf("%d\n", max);
//
//
//	return 0;
//}

//��ʱ����
//{
//	int a = 10;//�������ű���a�Զ��������뿪�����Զ�����
//}
//


//����������
//typedef unsigned int u_int;
//int main()
//{
//	u_int Num1 = 0;
//	printf("%d\n", Num1);
//	return 0;
//}


//static����

//static int g_val = 0;//static����ʹȫ�ֱ���ֻ���ڱ�Դ�ļ�ʹ��
//
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("%d\n", a);
//
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//define�����
#define ADD(X,Y) ((X)+(Y))

int main()
{
	printf("%d\n", (4 * ADD(9, 3)));
	return 0;
}