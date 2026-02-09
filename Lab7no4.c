#include<stdio.h>
int checkNumber(int n1, int n2);
int multiply(int n1, int n2);

void main() {
	int data1,data2;
	scanf("%d %d",&data1,&data2);
	int total = checkNumber(data1,data2);
	if(total!=0){
		printf("%d",total);
	}
	
}
int checkNumber(int n1,int n2){
	if(n1>20 && n1<60 && n2>20 && n2<60){
		return multiply(n1,n2);
	}
	else{
		return 0;
	}
}
int multiply(n1,n2){
	int total = n1*n2;
	return total;
}



