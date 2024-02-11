#include<stdio.h>
#include<conio.h>
void main(){
	char i,j,n;
	printf("Enter thr range of alphabet you want to print\n");
	scanf("%c",&n);
	for(i='A';i<=n;i++){
		for(j=n;j>='A';j--){
			if(j<=i){
				printf("%c",i);
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}