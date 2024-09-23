#include <stdio.h> 
#include <string.h> 
 
int main(){
	int a;
	printf("请输入一个正偶数："); 
	scanf("%d",&a);
//	return　1;
	if(a%2==0){
		printf("输入正确\n"); 
	}
	else{
		printf("您输入的不是正偶数！！\n"); 
	} 
	int j=1;
	while(!(a/2==1)){
		a=a/2;
		if(a%2!=0){
			printf("你输入的数不是2的次幂！！");
//			return　0;
		}
		j++;
	}
	printf("%d\n",j);
//	return　0; 
}
