#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
//printf("¸Þ´º ¼±ÅÃ\n");
//printf("1. ÇÐ»ý Á¤º¸/Á¡¼ö ÀÔ·ÂÇÏ±â\n");
//printf("2. ÇÐ»ý Á¤º¸ Ãß°¡ÇÏ±â\n");
//printf("3. ÇÐ»ý Á¤º¸ ¼öÁ¤ÇÏ±â\n");
//printf("4. ÇÐ»ý Á¤º¸ »èÁ¦ÇÏ±â\n");
typedef struct SubScore {
	int kor;	//±¹¾î
	int eng;	//¿µ¾î
	int mat;	//¼öÇÐ
	int sci;	//°úÇÐ
}SubScore;
typedef struct StdInfo {
	int stdNum;				//¹øÈ£
	char name[10];			//ÀÌ¸§
	int age;				//³ªÀÌ
	char gender;			//¼ºº°
	char comment[1024];		//ÄÚ¸àÆ®
	SubScore p;				//¼ºÀû
	struct StdInfo *prev;	//ÀÌÀü ³ëµå
	struct StdInfo *next;	//´ÙÀ½ ³ëµå
}StdInfo;
void showStdInfo(StdInfo **current, StdInfo **head);
//void backMenu() {
//	getchar();
//	char exit = ' ';
//	puts("\t   ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");
//	puts("\t   ¦­\t   ÀÌÀü ¸Þ´º·Î ÀÌµ¿ÇÏ½Ã·Á¸é q¸¦ ´­·¯ÁÖ¼¼¿ä     \t¦­");
//	puts("\t   ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
//	printf("\t    ÀÔ·Â : "); scanf("%c", &exit);
//	if (exit == 'q') {
//		system("cls");
//		main();
//	}
//}


int callMenu(StdInfo **current, StdInfo **head) {
	int choiceNum = 0;
	printf("¸Þ´º ¼±ÅÃ\n");
	printf("1. ÇÐ»ý Á¤º¸ Ãß°¡ÇÏ±â\n");
	printf("2. ÇÐ»ý Á¤º¸ ¼öÁ¤ÇÏ±â\n");
	printf("3. ÇÐ»ý Á¤º¸ »èÁ¦ÇÏ±â\n");
	printf("4. ¼±ÅÃ ÇÐ»ý Á¤º¸ Ãâ·ÂÇÏ±â\n");
	printf("5. ÀüÃ¼ ÇÐ»ý Á¤º¸ Ãâ·ÂÇÏ±â\n");
	printf("0. Á¾·á ÇÏ±â\n");
	scanf("%d", &choiceNum);
	return choiceNum;
}
void inputStdInfo(StdInfo **current, StdInfo **head,StdInfo **new_node) {
	int input = 0;
	int cnt = 0;
	system("cls");
	printf("¸î ¸íÀÇ µ¥ÀÌÅÍ¸¦ ÀÔ·ÂÇÏ½Ã°Ú½À´Ï±î? : "); scanf("%d", &input); getchar();
	//ÀÔ·Â
	for (int i = 0; i < input; i++) {
		*new_node = (StdInfo *)malloc(sizeof(StdInfo));
		printf("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬ %d¹ø ÇÐ»ý Á¤º¸ ÀÔ·Â ¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯\n", ++cnt);
		printf("\tÀÌ¸§À» ÀÔ·ÂÇÏ¼¼¿ä : "); gets((*new_node)->name);
		printf("\t³ªÀÌ¸¦ ÀÔ·ÂÇÏ¼¼¿ä : "); scanf("%d", &(*new_node)->age);	getchar();
		printf("\t¼ºº°À» ÀÔ·ÂÇÏ¼¼¿ä(³²:M/¿©:F) : "); scanf("%c", &(*new_node)->gender);
		printf("\t±¹¾îÁ¡¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä : "); scanf("%d", &(*new_node)->p.kor);
		printf("\t¿µ¾îÁ¡¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä : "); scanf("%d", &(*new_node)->p.eng);
		printf("\t¼öÇÐÁ¡¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä : "); scanf("%d", &(*new_node)->p.mat);
		printf("\t°úÇÐÁ¡¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä : "); scanf("%d", &(*new_node)->p.sci); getchar();
		printf("\tÄÚ¸àÆ®¸¦ Àû¾îÁÖ¼¼¿ä : "); gets((*new_node)->comment);
		puts("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
		(*new_node)->stdNum = cnt;
		(*new_node)->next = NULL;
		if (*head == NULL) {
			*head = (*new_node);
			*current = *head;
		}
		else {
			(*current)->next = *new_node;
			(*new_node)->prev = (*current);
			*current = (*new_node);
		}//end if
	}//end for
	puts("\t   ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");
	printf("\t   ¦­\t      %d¸íÀÇ ÇÐ»ýµéÀÇ Á¤º¸¸¦ ÀÔ·ÂÇß½À´Ï´Ù.  \t¦­\n", input);
	puts("\t   ¦­\t          ÀÌÀü ¸Þ´º·Î µ¹¾Æ°©´Ï´Ù.   \t\t¦­");
	puts("\t   ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
	Sleep(2000);
	system("cls");
}
void main() {
		  
		 StdInfo *head, *new_node, *current;
		 head = new_node = current = NULL;

		 //ÇÐ»ý Á¤º¸ ÀÔ·Â
		 //head ³ëµå »ý¼º & ÃÊ±âÈ­
		 // Ãß°¡
		 inputStdInfo(&head,&new_node,&current);
		 showStdInfo(&current,&head);
		 //callMenu(current,&head);

		//ÀüÃ¼ ÇÐ»ý Ãâ·Â
		
}
void showStdInfo(StdInfo **current, StdInfo **head) {
	if (*current != NULL) {
		puts("\t   ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");
		puts("\t   ¦­\t   ÀÔ·ÂµÈ ÇÐ»ýµéÀÇ Á¤º¸¸¦ ¸ðµÎ Ãâ·ÂÇÕ´Ï´Ù.     \t¦­");
		puts("\t   ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
		puts("¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");
		puts("\t¹øÈ£\tÀÌ¸§\t³ªÀÌ\t¼ºº°\t±¹¾î\t¿µ¾î\t¼öÇÐ\t°úÇÐ\tÄÚ¸àÆ®");
		(*current) = *head;
		while ((*current) != NULL) {
			printf("\t%d¹ø\t%s\t%d»ì\t%c\t%2dÁ¡\t%2dÁ¡\t%2dÁ¡\t%2dÁ¡\t%s\n", (*current)->stdNum, (*current)->name, (*current)->age, toupper((*current)->gender), (*current)->p.kor, (*current)->p.eng, (*current)->p.mat, (*current)->p.sci, (*current)->comment);
			(*current) = (*current)->next;
		}
		puts("¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
	}
	else {
		puts("\t   ¦®¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¯");
		puts("\t   ¦­\t      ÀÔ·ÂµÈ ÇÐ»ýµéÀÇ Á¤º¸°¡ ¾ø½À´Ï´Ù.  \t¦­");
		puts("\t   ¦­\t     ¸ÕÀú ÇÐ»ýµéÀÇ Á¤º¸¸¦ ÀÔ·ÂÇØÁÖ¼¼¿ä.   \t¦­");
		puts("\t   ¦±¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦¬¦°");
		Sleep(2000);
		system("cls");
		main();
	}
}