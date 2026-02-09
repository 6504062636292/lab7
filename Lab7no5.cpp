#include<stdio.h>

long convert(long h, long m, long s){
	return (h*3600)+(m*60)+s;
}

int main(){
	int h,m,s;
	scanf("%d %d %d",&h,&m,&s);
	
	int sec = convert(h,m,s);
	printf("%d ",sec);
}

