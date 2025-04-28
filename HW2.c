#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a,i=0,n,l=0;
	char ch,ch1,j,k,ch2;
	while(i<=1){
	
	printf("    **   **   \n");
    printf(" *************  \n");
    printf("***************\n");
    printf(" *************\n");
    printf("  ***********  \n");
    printf("   *********   \n");
    printf("    *******    \n");
    printf("     *****     \n");
    printf("      ***     \n");
    printf("       *   \n");
    i++;
	}
	system("pause");
	system("CLS");
	for(i=1;i<=3;i++){
		printf("輸入 4 個數字的密碼(2025):");
		scanf("%d",&a);
		if(a==2025){
			
			printf("密碼正確.\n");
			break;
			
		}
		else{
			printf("密碼錯誤.\n");
			
		}
	}
	if(a==2025){
		Start:
			printf("~~~~~~~~~~~~~~~~~~~\n");
			printf("|  a. 畫出三角形  |\n");
			printf("|  b. 顯示乘法表  |\n");
			printf("|  c. 結束        |\n");
			printf("~~~~~~~~~~~~~~~~~~~\n");
			fflush(stdin);
			scanf("%c",&ch);
			if(ch=='A'||ch=='a'){
				printf("輸入一個a到n的字元:");
				fflush(stdin);
				scanf("%c",&ch1);
				while(ch1<'a'||ch1>'n'){
					printf("輸入一個a到n的字元:");
					fflush(stdin);
					scanf("%c",&ch1);
				}
				if(ch1>='a'&&ch1<='n'){
					
					for(k=ch1;k>='a';k--){
						
						for(j=ch1;j>=k;j--){
							printf("%c",j);
						}
						printf("\n");
					
					}
					system("pause");
					system("CLS");
				}
				
				
			}
			else if(ch=='B'||ch=='b'){
				printf("輸入1~9的整數:");
				fflush(stdin);
				scanf("%d",&n);
				while(n<1||n>9){
					printf("輸入1~9的整數:");
					fflush(stdin);
					scanf("%d",&n);
				}
				if(n>=1&&n<=9){
					
					for(i=1;i<=n;i++){
						
						for(l=1;l<=i;l++){
							printf("%d*%d=%d ",i,l,i*l);
						}
						printf("\n");
					
					}
					system("pause");
					system("CLS");
				}
				
			}
			else if(ch=='C'||ch=='c'){
				printf("'Continue? (y/n)'");
				fflush(stdin);
				scanf("%c",&ch2);
				while(ch2!='Y'&&ch2!='y'&&ch2!='N'&&ch2!='n'){
					printf("輸入錯誤，重新輸入");
					fflush(stdin);
					scanf("%c",&ch2);
				}
				if(ch2=='Y'||ch2=='y'){
					goto Start;
				}
				
				
			}
			
	}
	system("pause");
	return 0;
}


