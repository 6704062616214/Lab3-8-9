#include<stdio.h>
int main(){
	int h,m,s,n;
	
	scanf("%d:%d:%d",&h,&m,&s);
	printf("Hour: %d \nMinute: %d \nSecond: %d\n",h,m,s);
	
	printf("Next minute: ");
	scanf("%d",&n);
	
	if (((m + next) / 60) < 1){
        m = (m + n);
    }else{
        h = h + (((m + n) / 60));
        h = h % 24;
        m = (m + n) % 60;
    }
	
	printf("Hour: %d \nMinute: %d \nSecond: %d",h,m,s);
}
