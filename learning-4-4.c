#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

// std --stdard ��׼
// i--input ����
// o--output ���
// stdio.h ��׼������������ͷ�ļ��ļ�
//
// 
// c���ԵĴ�����һ��Ҫ��main����
//������
// c�������Թ涨
// main�����ǳ�������
// ����ֻ��һ��main����
// 
// printf��һ���⺯��
// --ר��������ӡ�����
// 
// vs2019����������д���:
// ctrl + f5
// ������о���ctrl + fn +f5
// ��׼д�� int main

//int main()
//{
//	int a = 7;
//	scanf("%d", &a);
//	printf("Hello,world%d\n", a);
//	return 0;
//}


//����д��--���Ƽ�
// void main()

//int main()
//{
//	printf("%d\n", sizeof(int)); //4 use %su to print sizeof( type ),which is truly accurate.
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	printf("%d\n", sizeof(char));//1
//
//	return 0;
//}


// �����ͳ����ĸ���
// ������Ϊ��
// �ֲ�������{ } �ڶ���ı���
// ȫ�ֱ�����{ } �ⶨ��ı���

//int main()
//{
//	short age = 19; // age
//	int hight = 177; // higth
//	float weight = 52.7; // weight
//	//���Ǿֲ�����
//	
//	return 0;
//}


//int a = 100; //ȫ�ֱ���
//int main()
//{
//	int a = 10; //�ֲ�����
//	// ��ȫ�ֱ����;ֲ�����������ͬ������£��ֲ����ȣ�
////	// �ֲ�������ʱ������
////	// ���ǲ�����ȫ�ֺ;ֲ�������������ͬ
////	// int a=100; 
////	printf("a=%d\n", a);
////	return 0;
//}
////�������䷶Χ�ڲ����ظ����壬�ᱨ��
////�������䷶Χ��������


//дһ�����롣����������֮��
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//��ʼ��
//	return 0;
//}
//
//int main()
//{
//    printf("Hello,world!");
//
//    return 0;
//}

#include <stdio.h>
int main()
{
	printf("char�ֽ�����%d\n", sizeof(char));
	printf("short�ֽ�����%d\n", sizeof(short));
	printf("int�ֽ�����%d\n", sizeof(int));
	printf("long�ֽ�����%d\n", sizeof(long));
	printf("long long�ֽ�����%d\n", sizeof(long long));
	printf("float�ֽ�����%d\n", sizeof(float));
	printf("double�ֽ�����%d\n", sizeof(double));
	printf("long double�ֽ�����%d\n", sizeof(long double));
	return 0;
}