#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//全局变量不初始化，默认值为0
//int main()
//{
//	int* p;//局部变量不初始化，里面默认放的是一个随机值
//	*p = 20;
//	return 0; 
//}
//对于这个代码来说，p是一个非法的地址，找到的内存块不是你的，相当于非法访问内存了


//如何避免野指针
//指针初始化
//小心指针越界
//指针指向空间释放即设置为NULL
//指针使用之前检查有效性





//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//
//输入：1729，输出：19
//首先应该实现的是得到它的每一位
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


//编写一个函数实现n的k次方，使用递归实现。



//计算斐波那契数
//
//作业内容
//递归和非递归分别实现求第n个斐波那契数
//
//例如：
//
//输入：5  输出：5
//
//输入：10， 输出：55
//
//输入：2， 输出：1
//
//
//答题

//1 1 2 3 5 8 13 21 ....
////非递归方式 循环的方式来实现
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1; // 把c初始化为1就很好的解决了当n<=2的时候 需要返回1的问题
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

//递归的方式
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
//你会发现对于一个斐波那契数来说，当输入的数字小的时候还是很容易求出来的，但是当编导50以上的时候就会很困难，速度极慢


//编写一个函数 reverse_string(char * string)（递归实现）
//
//实现：将参数字符串中的字符反向排列。
//
//要求：不能使用C函数库中的字符串操作函数。
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

//递归的方式来实现字符串的逆转好难呀这道题
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
