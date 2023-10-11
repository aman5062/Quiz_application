#include<stdio.h>
#include<conio.h>
#define clrscr(); system("cls");
#include <stdlib.h>
int p=0;
void main(){
	int i=0;
     while(i<=7){
     clrscr();
     printf("Loading......");
     i++;      
     }
     clrscr();
     sleep(1);
     printf("Quiz is going to start...");
     sleep(1);
     clrscr();
     printf("3");
	 sleep(1);
     clrscr();
     printf("2");
     sleep(1);
     clrscr();
     printf("1");
     sleep(1);
     start();
	getch();
}
int start(){
	int k;
	clrscr();
	printf("\t\t\t\t\t-----------Welcome to My Quiz----------\n");
	printf("\t\t\t\t\t---------------------------------------\n");
	printf("\t\t\t\t\tMentions\n");
	printf("\t\t\t\t\t1)This quiz is for entertainment purpose.\n");
	printf("\t\t\t\t\t2)please open in full screen for beter \n\t\t\t\t\texperience\n");
	printf("\n\n");
	printf("\t\t\t\t\t\t\t\tWhite Devil\n");
	printf("\t\t\t\t\t-----------------------------------------\n");
	printf("\t\t\t\t\tpress 1 and tab Enter to continue....\n\t\t\t\t\t");
	scanf("%d",&k);
	if (k==1){
		quiz();
		
	}	
	else{
		clrscr();
		printf("\t\t\t\t\t\tBye....\n");
		sleep(1);
		printf("\t\t\t\t\t\tEnter any key to exit..");
	}
getch();
}
int quiz(){
	int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\tQ)Who developed C language?\n");
	printf("\t\t\t\t\t\t1)Steve Jobs.\n");
	printf("\t\t\t\t\t\t2)james Gosling.\n");
	printf("\t\t\t\t\t\t3)Dennis Ritchie.\n");
	printf("\t\t\t\t\t\t4)Rasmus Lerdorf.\n");
	printf("\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==3){
		p++;
		q2();
	}
	else{
	wrong();
	}
}
int q2(){
	int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\t\tQ)Which of the following is not a valid C variable name?\n");
	printf("\t\t\t\t\t\t\t1)int number;.\n");
	printf("\t\t\t\t\t\t\t2)float rate;.\n");
	printf("\t\t\t\t\t\t\t3)int variable_count;.\n");
	printf("\t\t\t\t\t\t\t4)int $main;.\n");
	printf("\t\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==4){
		p++;
		q3();
	}
	else{
	wrong();
	}
}
int q3(){
int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\t\tQ)What is #include<stdio.h>?\n");
	printf("\t\t\t\t\t\t\t1)Preprocessor directive.\n");
	printf("\t\t\t\t\t\t\t2)Inclusion directive.\n");
	printf("\t\t\t\t\t\t\t3)File inclusion directive.\n");
	printf("\t\t\t\t\t\t\t4)None of the above.\n");
	printf("\t\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==1){
		p++;
		q4();
	}
	else{
	wrong();
	}	
}
int q4(){
	int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\t\tQ)Which of the following are C preprocessors?\n");
	printf("\t\t\t\t\t\t\t1)#ifdef.\n");
	printf("\t\t\t\t\t\t\t2)#define.\n");
	printf("\t\t\t\t\t\t\t3)#endif.\n");
	printf("\t\t\t\t\t\t\t4)all of the above.\n");
	printf("\t\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==4){
		p++;
		q5();
	}
	else{
	wrong();
	}
}
int q5(){
	int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\t\tQ)Which of the following return-type cannot be used for a function in C?\n");
	printf("\t\t\t\t\t\t\t1)Char*.\n");
	printf("\t\t\t\t\t\t\t2)struct.\n");
	printf("\t\t\t\t\t\t\t3)void.\n");
	printf("\t\t\t\t\t\t\t4)None of the above.\n");
	printf("\t\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==4){
		p++;
		q6();
	}
	else{
	wrong();
	}	
}
int q6(){
	int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\t\tQ)scanf() is a predefined function in_______ header file.\n");
	printf("\t\t\t\t\t\t\t1)stdlib.h\n");
	printf("\t\t\t\t\t\t\t2)ctype.h\n");
	printf("\t\t\t\t\t\t\t3)stdio.h\n");
	printf("\t\t\t\t\t\t\t4)stdarg.h\n");
	printf("\t\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==3){
		p++;
		q7();
	}
	else{
	wrong();
	}	
}
int q7(){
	int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\t\tQ)All keywords in C are in______\n");
	printf("\t\t\t\t\t\t\t1)LowerCase letters\n");
	printf("\t\t\t\t\t\t\t2)UpperCase letters\n");
	printf("\t\t\t\t\t\t\t3)CamelCase letters\n");
	printf("\t\t\t\t\t\t\t4)None of the above\n");
	printf("\t\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==1){
		p++;
		q8();
	}
	else{
	wrong();
	}
}
int q8(){
	int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\t\tQ)Which of the following cannot be a variable name in C?\n");
	printf("\t\t\t\t\t\t\t1)volatile\n");
	printf("\t\t\t\t\t\t\t2)true\n");
	printf("\t\t\t\t\t\t\t3)friend\n");
	printf("\t\t\t\t\t\t\t4)export\n");
	printf("\t\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==1){
		p++;
		q9();
	}
	else{
	wrong();
	}	
}
int q9(){
	int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\t\tQ)What is short int in C programming?\n");
	printf("\t\t\t\t\t\t\t1)The basic data type of C\n");
	printf("\t\t\t\t\t\t\t2)Qualifier\n");
	printf("\t\t\t\t\t\t\t3)Short is the qualifier and int is the basic data type\n");
	printf("\t\t\t\t\t\t\t4)All of the above\n");
	printf("\t\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==3){
		p++;
		q10();
	}
	else{
	wrong();
	}	
}
int q10(){
	int ans;
	clrscr();
	score();
	printf("\t\t\t\t\t\t\tQ)In which header file is the NULL macro defined?\n");
	printf("\t\t\t\t\t\t\t1)stdio.h\n");
	printf("\t\t\t\t\t\t\t2)stddef.h\n");
	printf("\t\t\t\t\t\t\t3)stdio.h and stddef.h\n");
	printf("\t\t\t\t\t\t\t4)math.h\n");
	printf("\t\t\t\t\t\t\t----------------------------\n");
	printf("\n\t\t\t\t\t\t\tAnswer:- ");
	scanf("%d",&ans);
	if(ans==3){
		p++;
		win();
	}
	else{
	wrong();
	}	
}
int playagain(){
	clrscr();
	printf("\t\t\t\t\t\t\tWelcome back......");
	sleep(1);
	clrscr();
	p=0;
	start();
}

int exitgame(){
	clrscr();
	printf("\t\t\t\t\t\t\tExiting quiz......");
	sleep(1);
	clrscr();
	printf("\t\t\t\t\t\t\tBye...\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t-----------------------------\n");
	printf("\t\t\t\t\t\t\tpress any key to exit....");
	return 0;
}
int win(){
	int n;
		clrscr();
		printf("\t\t\t\t\t\tYou Win......\n");
		printf("\t\t\t\t\t\tCongratulations.........\n");
		sleep(1);
		printf("\t\t\t\t\t\tYour score: %d",p);
		sleep(1);
		printf("\t\t\t\t\t\t\t-----------------------------");
		printf("\t\t\t\t\t\t\tpress any key to exit....");
		return 0;
}

int wrong(){
		int n;
		clrscr();
		printf("\t\t\t\t\t\tWrong Answer......");
		sleep(1);
		clrscr();
		printf("\t\t\t\t\t\tYour score: %d",p);
		sleep(1);
		clrscr();
		printf("\t\t\t\t\t\t\tDo you want to play again?\n");
		printf("\t\t\t\t\t\t\t1)yes\n");
		printf("\t\t\t\t\t\t\t2)No\n");
		printf("\t\t\t\t\t\t\tAnswer: ");
		scanf("%d",&n);
		if(n==1){
		playagain();	
		}
		else if(n==2){
		exitgame();
		}
		
}
int score(){
	printf("Score: ");
	printf("%d",p);
	printf("\n");
}