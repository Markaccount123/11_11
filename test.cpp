#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//ȫ�ֱ�������ʼ����Ĭ��ֵΪ0
//int main()
//{
//	int* p;//�ֲ���������ʼ��������Ĭ�Ϸŵ���һ�����ֵ
//	*p = 20;
//	return 0; 
//}
//�������������˵��p��һ���Ƿ��ĵ�ַ���ҵ����ڴ�鲻����ģ��൱�ڷǷ������ڴ���


//��α���Ұָ��
//ָ���ʼ��
//С��ָ��Խ��
//ָ��ָ��ռ��ͷż�����ΪNULL
//ָ��ʹ��֮ǰ�����Ч��





//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//
//���룺1729�������19
//����Ӧ��ʵ�ֵ��ǵõ�����ÿһλ
//int DigitSum(int n)
//{
//	int ret = 0;
//	while(n!=0)
//	{
//		ret += n % 10;
//		n /= 10;
//	}
//	return ret;
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d",&n);
//	sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}
//1729
//172 +9
//17 + 2 + 9
//1 +7 +2 +9

//int DigitSum(int n)
//{
//	if (n < 10)
//		return n;
//	else
//		return DigitSum(n / 10) + n % 10;
//}
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	sum = DigitSum(n);
//	printf("%d\n", sum);
//	return 0;
//}


//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�



//����쳲�������
//
//��ҵ����
//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//
//���磺
//
//���룺5  �����5
//
//���룺10�� �����55
//
//���룺2�� �����1
//
//
//����

//1 1 2 3 5 8 13 21 ....
////�ǵݹ鷽ʽ ѭ���ķ�ʽ��ʵ��
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1; // ��c��ʼ��Ϊ1�ͺܺõĽ���˵�n<=2��ʱ�� ��Ҫ����1������
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = Fib(num);
//	printf("%d\n", ret);
//	return 0;
//}

//�ݹ�ķ�ʽ
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	scanf("%d", &num);
//	ret = Fib(num);
//	printf("%d\n", ret);
//	return 0;
//}
//��ᷢ�ֶ���һ��쳲���������˵�������������С��ʱ���Ǻ�����������ģ����ǵ��ർ50���ϵ�ʱ��ͻ�����ѣ��ٶȼ���


//��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
//
//ʵ�֣��������ַ����е��ַ��������С�
//
//Ҫ�󣺲���ʹ��C�������е��ַ�������������
//void reverse_string(char* string,int len)
//{
//	char* left = string;
//	char* right = string + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	reverse_string(arr,len);
//	printf("%s\n", arr);
//	return 0;
//}
//

//�ݹ�ķ�ʽ��ʵ���ַ�������ת����ѽ�����
void reverse_string(char* string)
{

}


int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s\n", arr);
	return 0;
}
