#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a,i=0;
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
			printf("~~~~~~~~~~~~~~~~~~~\n");
			printf("|  a. �e�X�T����  |\n");
			printf("|  b. ��ܭ��k��  |\n");
			printf("|  c. ����        |\n");
			printf("~~~~~~~~~~~~~~~~~~~\n");
			
	}
	system("pause");
	return 0;
}


