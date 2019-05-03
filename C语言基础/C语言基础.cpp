// C语言基础.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 

#pragma warning(disable:4996)
#include "pch.h" 
#include <stdio.h>
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define Max 100
void method18() {
	printf("");
}
//字符串输入输出
void method_17() {
	char a[100];
	printf("请输入字符串\n");
	scanf("%s", a);//不用取地址 数组名是首元素地址  本来就是一个地址
	printf("a = %s", a);

}
//打印数组快捷方法
/**
参数说明：
	a[]数组
	n:数组大小
*/
void printArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d ,", a[i]);
	}
	printf("\n");
}
//字符数组和字符串
void method_16() {
	//C语言没有字符串类型  用字符数组模拟
	char a[] = { 'a','y', 'a','y' };
	//字符串一定是字符数组 反之不成立
	//如果字符数组是以'\0'(等价于数字0)这个字符数组就是字符串
	char b[10] = { 'a','y', 'a','y', '\0' };
	char c[10] = { 'a','y', 'a','y', '0' };
	char d[10] = { 'a','y', 'a','y', 0 };
	//自动在结尾添加\0
	char e[100] = "辣鸡C语言";
	char f[] = { '\0' };
	char g[10] = "asf\0dfe";
	printf("%s \n", a);
	printf("%s \n", b);
	printf("%s \n", c);
	printf("%s \n", d);
	printf("%s \n", e);
}
//冒泡排序
void method_13() {
	int a[] = { 1,2,5,6,8,9,55,89,5,6,55,88,44,356,56 };
	int n = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int j = 0;
	int temp;
	printArray(a, n);
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - 1; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printArray(a, n);
}
//二维数组初始化
void method_15() {
	int a[3][4] = { {1,2,3,4} ,{5,6,7,8}, {9,10,11,12} };
	int b[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int c[][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int d[][4] = { 1,2,3,4,5,6 };
	int e[][4] = { 0 };
	printf("------aaaa------");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", b[i][j]);
		}
		printf("\n");
	}

	printf("------bbbb------");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", b[i][j]);
		}
		printf("\n");
	}
	printf("------cccc------");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", c[i][j]);
		}
		printf("\n");
	}
	printf("------dddd------");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", d[i][j]);
		}
		printf("\n");
	}

	printf("------eeee------");
	printf("\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", e[i][j]);
		}
		printf("\n");
	}

	printArray(a[0], 4);

}
//二维数组定义和使用
void method_14() {
	//1:[]的数量标志数组维数
	//理解为m行n列
	int a[3][4];
	int num = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			a[i][j] = num++;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d  ", a[i][j]);
		}
		printf("\n");
	}
}
//数组逆转
void method_12() {
	int a[] = { 1,2,3,4,5,6,7,8,9 };
	int n = sizeof(a) / sizeof(a[0]);
	int i = 0;
	int j = n - 1;
	int temp;
	while (i < j) {
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
//数组的使用
void method_11() {
	int size = 1;
	printf("输入数组大小：\n");
	scanf("%d", &size);
	int arr[100];
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}
	for (int i = 0; i < size; i++) {
		printf("%d ,", arr[i]);
	}
}
//CONTINUE
void method_10() {
	int ii = 0;
	for (int i = 0; i < ii; i++)
	{
		if (i == 3) {
			printf("4444444");
			continue;
		}
		printf("");
	}
}
//for循环
void method_9() {
	printf("输入循环次数：\n");
	int time = 0;
	scanf("%d", &time);
	for (int i = 1; i <= time; i++) {
		printf("[%4d] ---- %d\n", time, time);
		time--;
	}
}
//while循环代码
void method_8() {
	printf("输入循环次数：\n");
	int time = 0;
	scanf("%d", &time);
	while (time != 0) {
		printf("[%4d] ---- %d\n", time, time);
		time--;
	}

}
void method_7() {
	printf("请输入要查询的代码：\n");
	int type = 0;
	scanf("%d", &type);
	printf("输入的数字是：%d\n", type);
	switch (type)
	{
	case 1:
		printf("111");
		break;
	case 2:
		printf("222");
		break;
	default:
		break;
	}
}
void method_6() {
	int a = 5;
	int b = 2;
	float c = a / b;
	printf("%f", c);

}
void method_5() {
	char a;
	printf("请输入字符\n");
	scanf("%c", &a);
	printf("%d\n", a);
	printf("请输入字符\n");
	//要注意的是在上一个输入的时候所有的读入的字符
	//被放在缓冲区  包括一个回车键  
	//所以在使用一次getchar
	char b;
	b = getchar();
	a = getchar();
	printf("%d\n", a);


}
void method_4() {
	int a;
	printf("[0]请输入a\n");
	scanf("%d", &a);
	printf("[1]%d\n", a);
	int b, c;

	printf("[2]请输入b c:");
	scanf("%d %d", &b, &c);
	printf("[3]b=%d c=%d\n", b, c);


}
void method_3() {
	int a = 123;
	printf("a1 = %d\n", a);
	//以四个字输出对齐
	printf("a2 = '%4d\n'", a);
	//没有的字符用0补充
	printf("a3 = '%04d\n'", a);
	double b = 1.3;
	printf("b = %8.3f", b);
	char c = 'c';
	putchar(c);


}
void method_1() {
	//const 可以修改变量为只读模式
	//不可以再修改
	const int a = 100;
	printf("hellow c语言");
	int a2;
	a2 = 012;
	printf("[10] a = %d\n", a2);
	//八进制打印
	printf("[11] a = %o\n", a2);
	//十六进制打印
	printf("[12] a = %x\n", a2);
	char a3 = 0x81;
	printf("[14] %d\n", a3);
	//%u类型代表这是一个字节
	printf("[15] sizeof(int) = %u 字节\n", sizeof(int));
	int a4;
	printf("[16] 请输入a\n");
	scanf("%d", &a4);
	printf("%d\n", a4);

}
void method_2() {
	printf("[0] chars = %s\n", "asc");
	int a = 10;
	printf("&a = %p\n", &a);
}
//随机数的产生
void method_18() {
	//先设置一次种子（一次即可）
	//如果种子一样  则随机数是一样的
	//srand(100);//无符号数
	//获取系统当前时间 生成不同的种子
	srand( (unsigned int)time(NULL) );
	int times = 0;
	printf("输入需要生成的次数:\n");
	scanf("%d",&times);
	int i = 0;
	int a[3];
	while (times > 0) {
		for (i = 0; i < 3; i++) {
			a[i] = rand();//产生随机数
		}
		for (int j = 0; j < sizeof(a) / sizeof(a[0]); j++) {
			printf("第%d个数字是：%d \n", j, a[j]);
		}
		times--;
	}
}
//字符串处理函数
//scanf的使用
void method_19() {
	char buf[100] = { 0 };
	printf("请输入字符串: \n");
	scanf("%s",buf);//默认以空格分开
	printf(buf);
	printf("\n");
	char tmp[100] = { 0 };
	printf("请输入字符串tmp：\n");
	scanf("%s", tmp);//默认以空格分开
	printf(tmp);
	printf("\n");
	//scanf的缺陷  不会做越界检查
	printf("请输入字符串str：\n");
	char str[10];
	scanf("%s", str);//默认以空格分开
	printf(str);
}
//介绍gets() 被弃用了不建议
//fgets
void method_20() {
	//可以输入空格
	char buf[100];
	//从键盘读取字符串放在指定的数组
//不做越界检查//gets(buf);
	
	//fgets 安全 也可以用空格  
	//【注】：会留一个位置给\0

	//从stdin（标准输入，键盘），读取内容
	//读取的内容如果大于sizeof（buf）-1 只取大小减一
	//会把换行符也读进去
	printf("请输入字符串\n");
	fgets(buf,sizeof(buf),stdin);
	printf("'%s'", buf);
}
//字符串输出
void method_21() {
	char buf[100] = "abcdefghijklmnopqrstuvwsyz";
	//puts
	printf("printf: %s\n",buf);
	//输出到屏幕  在屏幕加换行  字符串本身没变
	printf("puts: ");
	puts(buf);

}
void method_22() {
	char buf[100] = "abcdefghijklmnopqrstuvwsyz";
	//向stdout（屏幕，标准输出）输出buf的内容
	fputs(buf,stdout);
}
//字符串长度测试strlen  要求string.h
void way_23() {
	char buf[] = "abcdefghijklmnopqrstuvwsyz";
	//需要使用字符串长度
	//从首元素开始到结束符的长度  遇到\0 \0不算
	int len = strlen(buf);
	printf("%d\n",strlen(buf));
	char buf1[] = "\0ass";//结果 == 0
	printf("%d\n", strlen(buf1));
	printf("%d\n", sizeof(buf1));//结果 == 5 '\0' 'a' 's' 's' '\0'
	

}
//字符串拷贝
void way_24() {
	char buf[100] = "abcdefghijklmnopqrstuvwsyz";
	char buf2[100];
	//把buf拷贝到buf1
	strcpy(buf2, buf);//拷贝到\0为止 中间有就会终止 后边的不再读取
	fputs(buf2, stdout);
	//strncpy不会因为\0而终止
	strncpy(buf2, buf, 27);
	printf("----%s",buf2+7);
}
//数组越界检测
void way_25() {
	char src[] = "aaaaaaaa";
	char dst[10];
	strcpy(dst, src);
}
//字符串比较 按照asicc码大小进行比较
void way_26() {
	char s1[] = "abc";
	char s2[] = "abcd";
	/*
		参数说明：s1 s2 需要比较的字符串 4需要比较的字符串的字符个数
	*/
	int flag = strncmp(s1, s2, 4);
	if (flag>0) {
		printf("[%s] > [%s]",s1,s2);
	}
	else if (flag<0) {
		printf("[%s] > [%s]", s2, s1);
	}

	else {
		printf("[%s] = [%s]", s1, s2);
	}
}
//字符串追加（连接）
void way_27() {
	char src[] = "hello mike";
	char dst[] = "abc";
	strcat(dst, src);
	printf("src = [%s]\n",src);
	//strcpy(dst, src);
	//指定长度追加
	strncpy(dst,src,strlen(src));
	//copy会直接覆盖掉字符串 
	printf("dst = [%s]",dst);
}
//_sprintf()
void way_28() {
	int a = 10;
	char ch = 'd';
	char buf[] = "hello";
	//格式化 一个字符串 把这个字符串输出到屏幕
	//保存到一个指定的数组
	char dst[100];
	sprintf(dst,"a = %d,ch = %c,buf = %s", a, ch, buf);
	//格式化 一个字符串 把这个字符串输出到屏幕
	printf("a = %d,ch = %c,buf = %s",a,ch,buf);
	
	printf("[%s]", dst);
}
//sscanf
void way_29() {
	//提取整形变量最方便
	char src[] = "a = 1, b = 2, c = 3";
	int a, b, c;
	sscanf(src,"a = %d, b = %d, c = %d",&a,&b,&c);
	printf("%d  %d  %d \n", a, b, c);
	char str2[] = "3,3,3";
	sscanf(str2, "%d,%d,%d", &a, &b, &c);
	printf("%d  %d  %d \n", a, b, c);
	//如果提取字符串默认以空格分割
	//不识别','等
	char tmp[] = "I'm a fucking genius";
	char m[10], n[10], p[10], q[10];
	sscanf(tmp,"%s %s %s %s",m,n,p,q);
	printf("%s，%s，%s，%s \n", m, n, p, q);
	
	printf("请输入以空格分割的整数：\n");
	char str[30];
	fgets(str, sizeof(str), stdin);
	int num = 0;
	int strlengh = 0;
	for (int i = 0; i < strlen(str);i++) {
		char tmp = str[i];
		if (tmp=='\0') {
			break;
		}
		else {
			strlengh++;
		}
		if (tmp==' ') {
			num++;
		}
	}
	printf("字符串中含有 %d 个整数",num);



}
//字符串查询
void way_30() {
	char buf[] = "abcdefg";
	//在字符串中查找指定的字符
	//如果找到就返回字符所在的地址 该字符以及其后的字符
	//查询失败返回 NULL（数字0）
	char *p = strchr(buf,'d');
	if (p == NULL) {
		printf("查询失败");
	}
	else {
		printf("查询成功 --Address:%s",p);
	}
	//在指定的字符串中寻找对应的字符串
	char *q = strstr(buf,"abc");
	if (q == NULL) {
		printf("查询失败");
	}
	else {
		printf("查询成功 --Address:%s", q);
	}
}
//字符串切割
void way_31() {
	char buf[] = "1 2 3 4 5 6 4 55";
	//第一次调用：
	//第一个参数：源字符串
	//切割字符
	//返回值 ： 切割后的字符串，在匹配切割字符
	//的地方换成结束符
	//使用strtok会破坏源字符串的结构
	//没有切割成功返回空
	char *p = strtok(buf," ");
	printf("p = %s\n", p);
	printf("buf = %s",buf);
	printf("-------------------------\n");
	//第二次调用 第一个参数要写空
	p = strtok(NULL, " ");
	printf("p = %s\n", p);
	printf("buf = %s", buf);
	printf("-------------------------\n");
	char buf2[] = "1 2 3 4 5 6 4 55";
	char *w;
	w = strtok(buf2," ");
	while (w != NULL) {
		printf("w = %s\n",w);
		w = strtok(NULL," ");
	}
}
//转换字符串为数字
void way_32() {
	//跳过 空格 直到遇到数字或者+-  遇到\0 结束
	char num_string[] = "-100";
	//atof （浮点） atol（长整形）
	int num = atoi(num_string);
	printf("%d\n",num);
}
//数字转字符串
void way_33() {
	char buf[20];
	int a = 2345;
	sprintf(buf,"%d",a);
	printf(buf);
}
//函数
/*
函数的定义就是把写在main函数的代码换到代码之中
*/
//没有返回值用void修饰 
//没有参数 可以用void 或者空（不写修饰符）
//同一个文件不能出现同名的函数
void way_34() {//等价于 way_34()
	
}
int main()
{
	way_34();
}



