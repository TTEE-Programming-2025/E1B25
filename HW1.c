#include<stdio.h>
#include<stdlib.h>
int main(void){
	int a,i;
	char ch;
	srand(time(NULL)); 
    int times = rand() % 10 + 1; 
    for ( i = 0; i < times; i++) {
    printf("***************\n");
    printf(" *************\n");
    printf("  ***********  \n");
    printf("   *********   \n");
    printf("    *******    \n");
    printf("     *****     \n");
    printf("      ***     \n");
    printf("       *   \n");
	}

	system("pause");
	system("CLS");
	printf("輸入 4 個數字的密碼:");
	scanf("%d",&a);
	if(a==2024){
		printf("歡迎\n");
		system("pause");
		system("CLS");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("|  'A'......'Z' : Uppercase  |\n");
		printf("|  'a'......'z' : Lowercase  |\n");
		printf("|  '0'......'9' : Digit      |\n");
		printf("|   Otherwise   : Your name  |\n");
		printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
		printf("輸入1個字元:");
		fflush(stdin);
		scanf("%c",&ch);
		if(ch>='A'&&ch<='Z'){
			printf("Uppercase");
			system("pause");
		}
		else if(ch>='a'&&ch<='z'){
			printf("Lowercase");
			system("pause");
		}
		else if(ch>='0'&&ch<='9'){
			printf("Digit");
			system("pause");
		}
		else{
			printf("E1B25何弘煒");
			system("pause");
		}
	}
	else{
		printf("輸入錯誤");
	}
	return 0;
} 
