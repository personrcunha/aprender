#include <stdio.h>
void od(int num){
	printf("%d\n",num);
}


int fatorial(int num){
	int fat=num,i=num;
	for(i=num;i>0;i--){	
		printf("i=%d FAT=%d * %d \n",i,fat,num-1);
		fat=i*(num-1);
	}
	return fat;
}

int main(){
	printf("%d",fatorial(9));
}
