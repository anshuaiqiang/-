#include <stdio.h> 
#include <string.h> 
 
int main(){
	int a;
	printf("������һ����ż����"); 
	scanf("%d",&a);
//	return��1;
	if(a%2==0){
		printf("������ȷ\n"); 
	}
	else{
		printf("������Ĳ�����ż������\n"); 
	} 
	int j=1;
	while(!(a/2==1)){
		a=a/2;
		if(a%2!=0){
			printf("�������������2�Ĵ��ݣ���");
//			return��0;
		}
		j++;
	}
	printf("%d\n",j);
//	return��0; 
}
