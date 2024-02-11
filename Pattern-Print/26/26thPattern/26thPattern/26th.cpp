#include<stdio.h>
#include<conio.h>
void main(){
	int i,j,k,n;
	printf("Enter how many rows you want to print\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		k=1;
		for(j=n;j>=1;j--){
			if(j<=i){
				printf("%d",k);
				k++;
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	getch();
}