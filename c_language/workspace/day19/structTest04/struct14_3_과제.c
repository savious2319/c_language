#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
//printf("詭景 摹鷗\n");
//printf("1. з儅 薑爾/薄熱 殮溘ж晦\n");
//printf("2. з儅 薑爾 蹺陛ж晦\n");
//printf("3. з儅 薑爾 熱薑ж晦\n");
//printf("4. з儅 薑爾 餉薯ж晦\n");
typedef struct SubScore {
	int kor;	//措橫
	int eng;	//艙橫
	int mat;	//熱з
	int sci;	//婁з
}SubScore;
typedef struct StdInfo {
	int stdNum;				//廓��
	char name[10];			//檜葷
	int age;				//釭檜
	char gender;			//撩滌
	char comment[1024];		//囀詮お
	SubScore p;				//撩瞳
	struct StdInfo *prev;	//檜瞪 喻萄
	struct StdInfo *next;	//棻擠 喻萄
}StdInfo;
void showStdInfo(StdInfo **current, StdInfo **head);
//void backMenu() {
//	getchar();
//	char exit = ' ';
//	puts("\t   旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
//	puts("\t   早\t   檜瞪 詭景煎 檜翕ж衛溥賊 q蒂 揚楝輿撮蹂     \t早");
//	puts("\t   曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
//	printf("\t    殮溘 : "); scanf("%c", &exit);
//	if (exit == 'q') {
//		system("cls");
//		main();
//	}
//}


int callMenu(StdInfo **current, StdInfo **head) {
	int choiceNum = 0;
	printf("詭景 摹鷗\n");
	printf("1. з儅 薑爾 蹺陛ж晦\n");
	printf("2. з儅 薑爾 熱薑ж晦\n");
	printf("3. з儅 薑爾 餉薯ж晦\n");
	printf("4. 摹鷗 з儅 薑爾 轎溘ж晦\n");
	printf("5. 瞪羹 з儅 薑爾 轎溘ж晦\n");
	printf("0. 謙猿 ж晦\n");
	scanf("%d", &choiceNum);
	return choiceNum;
}
void inputStdInfo(StdInfo **current, StdInfo **head,StdInfo **new_node) {
	int input = 0;
	int cnt = 0;
	system("cls");
	printf("賃 貲曖 等檜攪蒂 殮溘ж衛啊蝗棲梱? : "); scanf("%d", &input); getchar();
	//殮溘
	for (int i = 0; i < input; i++) {
		*new_node = (StdInfo *)malloc(sizeof(StdInfo));
		printf("旨收收收收收收收收收收收 %d廓 з儅 薑爾 殮溘 收收收收收收收收收收收旬\n", ++cnt);
		printf("\t檜葷擊 殮溘ж撮蹂 : "); gets((*new_node)->name);
		printf("\t釭檜蒂 殮溘ж撮蹂 : "); scanf("%d", &(*new_node)->age);	getchar();
		printf("\t撩滌擊 殮溘ж撮蹂(陴:M/罹:F) : "); scanf("%c", &(*new_node)->gender);
		printf("\t措橫薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &(*new_node)->p.kor);
		printf("\t艙橫薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &(*new_node)->p.eng);
		printf("\t熱з薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &(*new_node)->p.mat);
		printf("\t婁з薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &(*new_node)->p.sci); getchar();
		printf("\t囀詮お蒂 瞳橫輿撮蹂 : "); gets((*new_node)->comment);
		puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
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
	puts("\t   旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	printf("\t   早\t      %d貲曖 з儅菟曖 薑爾蒂 殮溘ц蝗棲棻.  \t早\n", input);
	puts("\t   早\t          檜瞪 詭景煎 給嬴骨棲棻.   \t\t早");
	puts("\t   曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
	Sleep(2000);
	system("cls");
}
void main() {
		  
		 StdInfo *head, *new_node, *current;
		 head = new_node = current = NULL;

		 //з儅 薑爾 殮溘
		 //head 喻萄 儅撩 & 蟾晦��
		 // 蹺陛
		 inputStdInfo(&head,&new_node,&current);
		 showStdInfo(&current,&head);
		 //callMenu(current,&head);

		//瞪羹 з儅 轎溘
		
}
void showStdInfo(StdInfo **current, StdInfo **head) {
	if (*current != NULL) {
		puts("\t   旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
		puts("\t   早\t   殮溘脹 з儅菟曖 薑爾蒂 賅舒 轎溘м棲棻.     \t早");
		puts("\t   曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
		puts("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
		puts("\t廓�αt檜葷\t釭檜\t撩滌\t措橫\t艙橫\t熱з\t婁з\t囀詮お");
		(*current) = *head;
		while ((*current) != NULL) {
			printf("\t%d廓\t%s\t%d髦\t%c\t%2d薄\t%2d薄\t%2d薄\t%2d薄\t%s\n", (*current)->stdNum, (*current)->name, (*current)->age, toupper((*current)->gender), (*current)->p.kor, (*current)->p.eng, (*current)->p.mat, (*current)->p.sci, (*current)->comment);
			(*current) = (*current)->next;
		}
		puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
	}
	else {
		puts("\t   旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
		puts("\t   早\t      殮溘脹 з儅菟曖 薑爾陛 橈蝗棲棻.  \t早");
		puts("\t   早\t     試盪 з儅菟曖 薑爾蒂 殮溘п輿撮蹂.   \t早");
		puts("\t   曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
		Sleep(2000);
		system("cls");
		main();
	}
}