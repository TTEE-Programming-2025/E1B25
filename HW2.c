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
		printf("��J 4 �ӼƦr���K�X(2025):");
		scanf("%d",&a);
		if(a==2025){
			
			printf("�K�X���T.\n");
			break;
			
		}
		else{
			printf("�K�X���~.\n");
			
		}
	}
	if(a==2025){
		Start:
			printf("~~~~~~~~~~~~~~~~~~~\n");
			printf("|  a. �e�X�T����  |\n");
			printf("|  b. ��ܭ��k��  |\n");
			printf("|  c. ����        |\n");
			printf("~~~~~~~~~~~~~~~~~~~\n");
			fflush(stdin);
			scanf("%c",&ch);
			if(ch=='A'||ch=='a'){
				printf("��J�@��a��n���r��:");
				fflush(stdin);
				scanf("%c",&ch1);
				while(ch1<'a'||ch1>'n'){
					printf("��J�@��a��n���r��:");
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
				printf("��J1~9�����:");
				fflush(stdin);
				scanf("%d",&n);
				while(n<1||n>9){
					printf("��J1~9�����:");
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
					printf("��J���~�A���s��J");
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


