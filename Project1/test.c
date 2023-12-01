

//int main()
//{
//
//	int a = 10;
//	printf("a=%d\n", a);
//
//	return 0;
//}
//
//inmain()
//{
//
// int num = 20;
//
//	num = 10;
//	printf("%d", num);
//
//	return 0;
//
//}t 

//#include <stdio.h>
//int add(int a, int b)
//{
//
//	return a + b;
//}
//int main()
//{
//	int result;
//	result = add(2, 3);
//	printf("%d", result);
//	return 0;
//		
//}
//
//int main()
//{
//	float a = 1.2345678909090;
//	printf("%f", a);
//	return 0;
//}



//
//int main()
//{
//	printf("%d", 'c');
//	return 0;
//}

//
//int main()
//{
//	printf("hell\0owworld");
//	return 0;
//}

//int main()
//{
//
//	int i = 1,sum = 0; 
//	while (i <= 100)
//	{
//		sum = i + sum;
//		i++;
//
//	}
//	printf("%d,%d", i, sum);
//		return 0;
//}


//int main()
//{
//
//
//while(2)
//
//{
//	printf("hello");
//}
//return 0;
//}
//

//
//int main()
//{
//	for (int i = 1, sum = 0; i <= 100; sum = i + sum, i++)
//	{
//		printf("%d,%d", i, sum);
//	}
//
//	return 0;
//}
//
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d", a);
//}
//
//
//
//
//int main()
//{ 
//	int i = 1;
//	while (i <10 )
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//
//int a = 1;


//int main()
//{
//	int a = 10;
//	return 0;
//}

//
//int main()
//{
//	int i = 1;
//	while (i <=  100,  i % 2 == 1, i++)
//		printf("%d", i);
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	while (a <= 10 )
//	{
//
//		printf("%d", a);
//		a++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10;i++)
//
//	{printf("%d", i);
//
//	 }
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	int a = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//
//		int a = 1;
//		for (i = 1; i <= n; i++)
//		{
//			a *= i;
//			e
//		}
//		sum += a;
//	}
//
//
//	printf("%d", sum);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0)
//
//		{
//			printf("登陆成功");
//			break;
//		}
//		else
//
//		{
//			printf("登陆失败");
//		}
//	
//	}
//	if (i == 3)
//
//	{
//		printf("登陆失败，退出程序");
//	}
//
//
//	return 0;
//}
/*s*//*um(void)
{
	int x, y, b;
	x = 0; y = 0;
	b = x + y;
	return b;

}

int main()
{
	int a;
	int sum;
	printf("请输入一个整数");
	scanf("%d", &a);
	sum = a + 12;
	printf("%d", sum);



	return 0;
}*/

//
//int main()
//{
//	puts("天");
//	puts("地");
//	puts("人");
//
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	int sum;
//	printf("请输入两个整数\n");
//	puts("整数1");
//	scanf("%d", &a);
//	puts("整数2");
//	scanf("%d", &b);
//	
//	sum = a * b;
//
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	int a;
//	int b;
//	int c;
//	int sum;
//
//	puts("请输入三个整数");
//	printf("整数1:");
//	scanf("%d", &a);
//	printf("整数2:");
//	scanf("%d", &b);
//	printf("整数3:");
//	scanf("%d", &c);
//
//	sum = a + b + c;
//	printf("它们的和是%d", sum);
//
//
//
//	return 0;
//}
//
// main()
//{
//	printf("haun");
//
//	return 0;
//
//}
////int main()
////{
////	printf("请输入一个三位数");
////	unsigned int a, b, c, d,x;
////	
////	scanf_s("%d", &a);
////	b = a / 100;
////	c = (a - b * 100) / 10;
////	d = a % 10;
////	x = d * 100 + c * 10 + b;
////		printf("%d", x)  

//
//#include <stdio.h>

//
//int main()
//
//{
//	char a;
//	a = getchar();
//	a = a - 32;
//	printf("%c,%d", a, a);
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	char kl;
//	kl = getchar();
//	if ((kl >= 65 && kl <= 90) || (kl >= 97 && kl <= 122))//筛选字母
//	{
//		if (kl >= 65 && kl <= 90)//大写字母
//		{
//
//			kl = kl + 32;
//			printf("%c", kl);
//
//		}
//	
//
//
//		else//小写字母
//		{
//			kl =kl - 32;
//			printf("%c,%d", kl,kl);
//		}
//	}
//	else printf("%d",kl);
//}

//
//#include<stdio.h>
//int main()
//{
//	char ch;
//	printf("请输入一个字符");
//	scanf_s("%c", &ch);
//	if (ch >= '0' && ch <= '9')
//		printf("输入的是一个数字");
//	else if (ch >= 'a' && ch <= 'z')
//		printf("输入的是一个小写字母");
//	else if (ch >= 'A' && ch <= 'Z')
//		printf("输入的是一个大写字母");
//	else if (ch == ' ')
//		printf("输入的是一个空格");
//	else
//		printf("输入的是其它字符");
//
//
//
//}
//
//#include<stdio.h>
//int main()
//{
//	int score;
//	printf("请输入成绩");
//	scanf_s("%d", &score);
//	
//	if (score >= 0 && score < 60)
//		putchar('E');
//	else if (score >= 60 && score < 70)
//		putchar('D');
//	else if (score >= 70 && score < 80)
//		putchar('C');
//	else if (score >= 80 && score < 90)
//		putchar('B');
//	else if (score >= 90 && score <= 100)
//		putchar('A');
//	else
//		printf("输入成绩格式错误");
//}
//
//#include<stdio.h>
//int main()
//{
//	int a=0, b=0, c=0, d=0,x,y;
//	scanf_s("%d,%d,%d,%d,", a, b, c, d);
//	x = a / b, y = c / d;
//	if (x >= y)
//	    printf("x");
//	else if (x <= y)
//		printf("y");
//	else
//		printf("x==y");
//	return 0;
//
//}
//
//#include<stdio.h>
//int main()
//{
//	int a,month;
//	printf("Please input year and ");
//	scanf_s("%d", &a);
//	scanf_s("%d", &month);
//		switch (month)
//		{
//		case 1:printf("31 days");
//			break;
//		case 2:
//			{   if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
//				printf("29 days");
//			else
//				printf("28 days");
//			}
//			break;
//		case 3:printf("31 days");
//			break;
//		case 4:printf("30 days");
//			break;
//		case 5:printf("31 days");
//			break;
//		case 6:printf("30 days");
//			break;
//		case 7:printf("31 days");
//			break;
//		case 8:printf("31 days");
//			break;
//		case 9:printf("30 days");
//			break;
//		case 10:printf("31 days");
//			break;
//		case 11:printf("30 days");
//			break;
//		case 12:printf("31 days");
//			break;
//		default:printf("input error");
//
//
//		}
//	return 0;
//}


//身高预测
//
//#include<stdio.h>
//
//int main()``
//{
//	char sex, sports, diet;//定义性别，是否热爱运动，是否健康饮食，自己身高 父母身高
//	float myHeight, faHeight, moHeight;
//	printf("input your sex F or M");
//	scanf_s(" %c", &sex);  //在%c前加空格用于回车读入
//	printf("your parents'hight first fa");
//	scanf_s("%f,%f", &faHeight, &moHeight);
//	printf("Dou you love sports, Y or N");
//	scanf_s("%d", &sports);
//	printf("Do  you dite helthy, Y or N");
//	scanf_s("%d", &diet);
//	if (sex == 'M' || sex == 'm')
//		myHeight = (faHeight + moHeight) * 0.54;
//	else
//		myHeight = (faHeight * 0.923 + moHeight) / 2;
//	if (sports == 'Y' || sports == 'y')
//		myHeight = (1 + 0.02) * myHeight;
//	if (diet == 'Y' || diet == 'y')
//		myHeight = (1 + 0.015) * myHeight;
//	printf("身高%f(cm)	1", myHeight);
//	return 0;
//
//}



//阶乘算法
//
//#include<stdio.h>
//
//
//
//long Fact(int n)
//{
//	int i;
//	long ret = 1;
//	for (i = 2; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf_s("%d", &c);
//	for (a = 1; a <= c; a++)
//	{
//		b = Fact(a);
//		printf("%d!=%d\n", a, b);
//
//	}
//	return 0;
//}


//7.6
//#include<stdio.h>
//
//long Fact(int n)
//{
//	int i;
//	long ret = 1,sum=1;
//	for (i = 2; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	return sum;
//}
//
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	printf("%d", Fact(a));
//
//
//}

//

//
//#include<stdio.h>
//#define M 5
//#define N 10
//
//int Fact(int n)
//{
//	return 2 * n;
//
//}
//
//int main()
//{
//	int a = 1;
//	for (int i = 1; i < M; i++)
//	{
//		a = Fact(i);
//	}
//	a = a + 10;
//	printf("%d", a);
//	return 0;
//}
//
//#include <stdio.h>
//#define N 40
//void Readscore(int score[], int n);
//void Textscore(int score[], int n);
//
//int main()
//{
//	int score[N], n;
//	printf("input n");
//	scanf_s("%d", & n);
//	Readscore(score, n);
//	Textscore(score, n);
//	return 0;
//
//
//}
//
//void Readscore(int score[], int n)   //输入学生成绩
//{
//	int i;
//	printf("Input score;");
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &score[i]);
//	}
//
//}
//
//void Textscore(int score[], int n)   //检验是否合格
//{
//	int i ,counter=0;
//	for (i = 0; i < n; i++)
//	{
//		if (score[i] < 60 && score[i] >= 0)
//			counter++;
//	}
//	printf("%d", counter);
//}
//
//#include <stdio.h>
//#define N 40
//int Readscore(int score[]);
//int Average(int score[], int n);
//int Counter(int score[], int n);
//
//int main()
//{
//	int n, score[N];
//	n = Readscore(score);
//	printf("%d", Counter(score, n));
//	return 0;
//}
//
//
//int Readscore(int score[])  //输入学生成绩
//{
//	int i=-1;
//	printf("input score:");
//	do
//	{
//		i++;
//		scanf_s("%d", &score[i]);
//
//	} while (score[i] >= 0);
//	return i ;
//	
//}
//int Average(int score[], int n)         //计算平均值
//{
//	int i,sum=0;
//	for (i = 0; i < n; i++)
//	{
//		sum += score[i];
//
//	}
//	return n > 0 ? sum / n: -1;
//
//}
//
//int Counter(int score[], int n)           //计算人数
//{
//	int counter = 0, i = 0;
//	for (; i < n; i++)
//	{
//		if (score[i] > Average(score,n))
//		{
//			counter++;
//		}
//
//	}
//	return counter;
//}

//#include <stdio.h>
//#define N 40
//void Maxdate(int score[], long num[], int n);
//int Readscore(int score[], long num[]);
//
//int main()
//{
//	int n, score[N];
//	long num[N];
//	n = Readscore(score, num);
//	Maxdate(score, num,n);
//	printf("最高成绩及其学生号为：%4d%10ld", score[0],num[0]);
//	return 0;
//
//}
//
//void Maxdate(int score[], long num[],int n)
//{
//	int i;
//	for (i = 1; i < n; i++)
//	{
//		if (score[0] < score[i])
//		{
//			score[0] = score[i];
//			num[0] = num[i];
//		}
//	}
//
//}
//
//
//int Readscore(int score[], long num[])
//{
//	int i;
//	i = -1;
//	do {
//		i++;
//		printf("input students'ID and score:");
//		scanf_s("%ld%d", &num[i], &score[i]);
//	} while (num[i] > 0 && score[i] >= 0);
//	return i;
//}
//
//#include<stdio.h>
//#define STUD_N 40
//#define COUR_N 3
//
//void Readscore(int score[][COUR_N], long num[], int n)
//{
//	int i, j;
//	printf("input students'ID and score as ; MT EN PH;\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%ld", &num[i]);
//		for (j = 0; j < COUR_N; j++)
//		{
//			scanf_s("%d", &score[i][j]);
//		}
//
//	}
//
//
//#include<stdio.h>
//#define M 40
//#define N 11
//
//int main()
//{
//	int feedback[M],i, j, count[N] = { 0 }, grade;
//	printf("input the feedback of 40 students;\n");
//	for (i =0 ; i < M; i++)
//	{
//		scanf_s("%d", &feedback[i]);
//	}
//	for(i = 0; i < M; i++)
//		switch (feedback[i])
//		{
//		case 1: count[1]++;
//			break;
//		case 2: count[2]++;
//			break;
//		case 3: count[3]++;
//			break;
//		case 4: count[4]++;
//			break;
//		case 5: count[5]++;
//			break;
//		case 6: count[6]++;
//			break;
//		case 7: count[7]++;
//			break;
//		case 8: count[8]++;
//			break;
//		case 9: count[9]++;
//			break;
//		case 10: count[10]++;
//			break;
//		default:printf("input error!\n");
//		
//		}
//	printf("Feedback\tCount\tHistogram\n");
//	for (grade= 1; grade <= N-1; grade++)
//	{
//		printf("%8d\t%3d\t", grade, count[grade]);
//		for (j = 0; j < count[grade]; j++)
//		{
//			printf("%c", '*');
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//#include <stdio.h>
//#define M 40
//#define N 11
//void DateSort(int arr[], int n);
//long Mean(int arr[], int n);
//long Median(int arr[], int n);
//int Mode(int arr[], int n);
//void input(int arr[], int n);
//
//int main()
//{
//	int arr[M];
//	printf("input the feedbacks of 40students :\n");
//	input(arr, M);
//	DateSort(arr,M);
//	printf("平均数=%ld", Mean(arr, M));
//	printf("中位数=%ld", Median(arr, M));
//	printf("众数=%d", Mode(arr, M));
//	return 0;
//}
//
//void input(int arr[],int n)
//
//{
//	int i;
//	for (i = 1; i <= n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//	}
//
//}
//
////排序函数
//void DateSort(int arr[], int n)
//{
//	int i, j, tem;
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 1;j < n; j++)
//		{
//			if (arr[j] > arr[i])
//			{
//				tem = arr[j];
//				arr[j] = arr[i];
//				arr[i] = tem;
//			}
//		}
//	}
//}
////平均数
//long Mean(int arr[], int n)
//{
//	int i,sum=0;
//	for (i = 0; i <= n; i++)
//	{
//		sum += arr[i];
//	}
//
//	return n>0? sum / n : -1;
//
//	
//
//}
////中位数
//long Median(int arr[], int n)
//{
//	DateSort(arr, n);
//	if (n % 2 == 0)
//	{
//		return (arr[n / 2] + arr[n / 2 + 1]) / 2;
//	}
//	else
//		return arr[n / 2];
//}
////众数
//int Mode(int arr[], int n)
//{
//	int i, grade, max = 0, modeValue = 0, count[N] = { 0 },tem;
//	for (i = 0; i < n; i++)
//	{
//		count[arr[i]]++;
//	}
//	for (grade = 1; grade <= n - 1; grade++)
//	{
//		if (count[grade] > max)
//		{
//			max =count[grade];
//			modeValue = grade;
//		}
//	}
//
//	return modeValue;
//
//
//	}
// 
//#include<stdio.h>
//#define N 10
//void Swap(int *x, int *y)
//{
//	int tem;
//	tem = *x;
//	*x = *y;
//	*y = tem;
//}
//
//void Read(int a[],int b[],int n)
//{
//	int i,j;
//	printf("input a[]");
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &a[i]);
//	}
//	printf("input b[]");
//	for (j = 0; j < n; j++)
//	{
//		scanf_s("%d", &b[j]);
//	}
//
//}
//
//int main()
//{
//	int a[N], b[N],n,i;
//	scanf_s("%d", &n);
//	Read(a, b, n);
//	for (i = 0; i < n; i++)
//	{
//		printf("%d%d", a[i], b[i]);
//	}
//	for (i = 0; i < n; i++)
//	{
//		Swap(&a[i], &b[i]);
//
//	}
//	for (i = 0; i < n; i++)
//	printf("a=%d\nb=%d", a[i], b[i]);
//	return 0;
//}
//
//
//#include <stdio.h>
//#include <string.h>
//#define N 10
//
//int main()
//{
//	char* p = NULL;
//	char s[] = "abc";
//	strcpy_s(p, s);
//	printf("%s", p);
//	return 0;
//}
//
//#include <stdio.h>
//
//
//int main()
//{
	
//#include <stdio.h>
//
//int main()
//{
//	int a = 1, b = 2;
//	char c = 'A';
//	int* pa = &a;
//	printf("a=%d,&a=%p,pa=%p,*pa=%d", a, &a, pa,*pa);
//	return 0;
//}
//
//char str[] = "hello";
//
//
//#define N 12
//int main()
//{
//	char name[N];
//	char *ptr = name;
	/*printf("Eneten your nme");
	gets(name);
	printf("hello %s!\n", name);
	return 0;*/
	//gets(name);

	//printf("hello %s!,%p,%d",ptr,ptr,*ptr);q
	//return 0;

//	//fgets(name, sizeof(name), stdin);//限制类输入
//}
//#include <stdio.h>
//
//
//main() { char* a = "main(){char * a=%a%s%c;printf(a,34,a,34);}"; printf(a, 34, a, 34);
//
//#include <stdio.h>
//
//int main()
//{
//
//
//}