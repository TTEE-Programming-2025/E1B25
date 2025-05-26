#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct std {
		char name[10];
		int number;
		int m;
		int p;
		int e;
		float avg;
	}st[10];
	int n=0;
void a(void){
	int i;
	printf("請輸入整數(5~10):");
	fflush(stdin);
	scanf("%d",&n);
	while(n<5||n>10){
		printf("輸入錯誤，請輸入整數(5~10):");
		fflush(stdin);
		scanf("%d",&n);
	}
	
	for(i=0;i<n;i++){
		
		fflush(stdin);
		printf("學生姓名:");
		fgets(st[i].name,10,stdin);
		st[i].name[strcspn(st[i].name, "\n")] = '\0';
		printf("學生學號:");
		fflush(stdin);
		scanf("%d",&st[i].number);
		while(st[i].number<100000||st[i].number>999999){
			printf("輸入錯誤，請改正:");
			scanf("%d",&st[i].number);
		}
		printf("數學成績:");
		fflush(stdin);
		scanf("%d",&st[i].m);
		while(st[i].m>100||st[i].m<0){
			printf("輸入錯誤，請改正:");
			scanf("%d",&st[i].m);
		}
		printf("物理成績:");
		fflush(stdin);
		scanf("%d",&st[i].p);
		while(st[i].p>100||st[i].p<0){
			printf("輸入錯誤，請改正:");
			scanf("%d",&st[i].p);
		}
		printf("英文成績:");
		fflush(stdin);
		scanf("%d",&st[i].e);
		while(st[i].e>100||st[i].e<0){
			printf("輸入錯誤，請改正:");
			scanf("%d",&st[i].e);
		}
		
		
	}
	
	printf("\n資料輸入完成，請按任意鍵回主選單...\n");
    getchar(); 
    getchar(); 
	return;
}

void b(void){
	int i;
	if (n == 0) {
        printf("目前尚無學生資料！\n");
        printf("請按任意鍵返回主選單...\n");
        getchar();
        getchar(); 
        return;
    }
	for(i=0;i<n;i++){
		printf("學生姓名:%s ",st[i].name);
		printf("學生學號:%d ",st[i].number);
		printf("數學成績:%d ",st[i].m);
		printf("物理成績:%d ",st[i].p);
		printf("英文成績:%d ",st[i].e);
		st[i].avg = (st[i].m + st[i].p + st[i].e) / 3.3f;
		printf("平均為:%.2f\n",st[i].avg);
	}
	getchar();
    getchar();
	return ;
}
int main(void){
	int i=0,w=0,j,p;
	char ch;
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
		scanf("%d",&p);
		if(p==2025){
			
			printf("密碼正確.\n");
			printf("Welcome\n");
			break;
			
		}
		else{
			printf("密碼錯誤.\n");
			w++;	
		}
	}
	system("pause");
	system("CLS");
	if(w==3){
		return 0;
	}
	Start:
	system("CLS");
	printf("------------[Grade System]------------\n");
	printf("|  a. Enter student grades           |\n");
	printf("|  b. Display student grades         |\n");
	printf("|  c. Search for student grades      |\n");
	printf("|  d. Grade ranking                  |\n");
	printf("|  e. Exit system                    |\n");
	printf("--------------------------------------\n");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='a'||ch=='A'){
		a();
		goto Start;
	}
	if(ch=='b'||ch=='B'){
    	b();
    	goto Start;
	}
	if(ch=='c'||ch=='C'){
		
		
	}
	if(ch=='d'||ch=='D'){
		
	} 
	
	
	return 0;
	}
	
	

