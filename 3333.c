#include<stdio.h>

int main()
{
	int a;
	int b;
	printf("请输入身高_英尺_英寸：");
	scanf("%d %d",&a,&b);
	int height=(a+b/12.0)*0.3048;
	printf("身高为%f米\n",height);
	return 0;
}	
	
	
