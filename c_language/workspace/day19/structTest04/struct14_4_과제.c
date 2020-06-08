#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
/*
	薯濛 : 彌牖��
	輿薯 : 翱唸葬蝶お蒂 鱔и 罹ч婦葬 Щ煎斜極
	薯濛晦除 : 2020喇 06錯 1橾 ~ 06錯 3橾
	餌辨罐 : Visual Studio2015
	輿蹂 晦棟 : 掘褻羹, 翱唸葬蝶お, л熱, ん檣攪, 翕瞳й渡
	模蝶唸婁 : 詭賅濰縑 ル晦ц蝗棲棻.

	з儅 熱蒂 殮溘嫡嬴 з儅 熱虜躑曖 等檜攪蒂 殮溘, 餉薯, 熱薑, 鳶殮ж朝 Щ煎斜極擊 濛撩п爾懊蝗棲棻.
	з儅曖 等檜攪蒂 殮溘嫡擊 掘褻羹蒂 儅撩ж堅 陝 詹幗 滲熱蒂 儅撩ц蝗棲棻.
	斜葬堅 з儅葆棻 翕瞳 й渡戲煎 詭賅葬蒂 й渡嫡堅, 斜 詭賅葬縑 等檜攪蒂 盪濰ж朝 寞衝戲煎 掘⑷ц蝗棲棻.
	з儅菟郭葬曖 等檜攪朝, 檜醞 翱唸 葬蝶お蒂 檜辨п next,prev(濠晦 霤褻 掘褻羹)蒂 檜辨п 翱唸п爾懊蝗棲棻.
*/
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
//轎溘
void showStdInfo(StdInfo **head) {
	system("cls");
	puts("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	puts("早        殮溘脹 з儅菟曖 薑爾蒂 賅舒 轎溘м棲棻.     早");
	puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
	puts("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	puts("\t檜葷\t釭檜\t撩滌\t措橫\t艙橫\t熱з\t婁з\t囀詮お");
	StdInfo *current = *head;
	while (current != NULL) {
		printf("\t%s\t%d髦\t%c\t%2d薄\t%2d薄\t%2d薄\t%2d薄\t%s\n", current->name, current->age, toupper(current->gender), current->p.kor, current->p.eng, current->p.mat, current->p.sci, current->comment);
		current = current->next;
	}
	puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
}
//蹺陛
void addStdInfo(StdInfo **head) {
	int stdNum = 0;
	system("cls");
	puts("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	printf("      賃 貲曖 薄熱蒂 蹺陛ж衛啊蝗棲梱? : "); scanf("%d", &stdNum); getchar();
	puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");

	for (int i = 0; i < stdNum; i++) {
		StdInfo *new_node = (StdInfo *)malloc(sizeof(StdInfo));
		printf("旨收收收收收收收收收收收收收收  з儅 薑爾 殮溘 收收收收收收收收收收收收收收旬\n");
		printf("\t檜葷擊 殮溘ж撮蹂 : "); gets(new_node->name);
		printf("\t釭檜蒂 殮溘ж撮蹂 : "); scanf("%d", &(new_node->age));	getchar();
		printf("\t撩滌擊 殮溘ж撮蹂(陴:M/罹:F) : "); scanf("%c", &new_node->gender);
		printf("\t措橫薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &new_node->p.kor);
		printf("\t艙橫薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &new_node->p.eng);
		printf("\t熱з薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &new_node->p.mat);
		printf("\t婁з薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &new_node->p.sci); getchar();
		printf("\t囀詮お蒂 瞳橫輿撮蹂 : "); gets(new_node->comment);
		puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
		new_node->next = NULL;
		new_node->prev = NULL;
		if (*head == NULL) {		//head檣 唳辦
			*head = new_node;
		}
		else {
			StdInfo *current = (*head);
			while (current->next != NULL) {		//葆雖虞 喻萄 瓊晦 -> next陛 NULL檣 喻萄梱雖 瓊晦
				current = current->next;
			}
			current->next = new_node;
			new_node->prev = current;
		}//end if
	}//end for
}
//詭景 摹鷗
int selectMenu(int select) {
	puts("旨收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	printf("早\t  詭景 摹鷗       早\n");
	puts("曳收收收收收收收收收收收收收收收收收收收收收收收收收朽");
	printf("早  1. з儅 薑爾 蹺陛ж晦  早\n");
	printf("早  2. з儅 薑爾 鳶殮ж晦  早\n");
	printf("早  3. з儅 薑爾 熱薑ж晦  早\n");
	printf("早  4. з儅 薑爾 餉薯ж晦  早\n");
	printf("早  5. з儅 薑爾 轎溘ж晦  早\n");
	printf("早  0. 謙猿 ж晦           早\n");
	puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收旭");
	printf("  殮溘 : "); scanf("%d", &select);
	return select;
}
//鳶殮
void insStdInfo(StdInfo **head) {
	int insStdNum = 0;
	int count = 1;
	puts("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	printf("   賃 廓簞 嬪纂縑 等檜攪蒂 鳶殮ж衛啊蝗棲梱? : "); scanf("%d", &insStdNum); getchar();
	puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
	StdInfo *new_node = (StdInfo *)malloc(sizeof(StdInfo));
	printf("旨收收收收收收收收收收收  з儅 薑爾 鳶殮 收收收收收收收收收收收旬\n");
	printf("\t檜葷擊 殮溘ж撮蹂 : "); gets(new_node->name);
	printf("\t釭檜蒂 殮溘ж撮蹂 : "); scanf("%d", &new_node->age);	getchar();
	printf("\t撩滌擊 殮溘ж撮蹂(陴:M/罹:F) : "); scanf("%c", &new_node->gender);
	printf("\t措橫薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &new_node->p.kor);
	printf("\t艙橫薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &new_node->p.eng);
	printf("\t熱з薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &new_node->p.mat);
	printf("\t婁з薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &new_node->p.sci); getchar();
	printf("\t囀詮お蒂 瞳橫輿撮蹂 : "); gets(new_node->comment);
	puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL) {
		*head = new_node;
	}
	/*
	翱唸 牖憮陛 ж釭虜檜塭紫 澀跤腆唳辦 螃盟陛 嫦儅й 熱 氈蝗棲棻.
	試盪 晦襄曖 霤褻蒂 熱薑и菴, new_node蒂 翱唸п撿 м棲棻.
	current->next = new_node;
	new_node->prev = current;
	current->next->prev = new_node;
	new_node->next = current->next;
	*/
	else {
		StdInfo *current = *head;
		while (count != insStdNum) {		//葆雖虞 喻萄 瓊晦 -> next陛 NULL檣 喻萄梱雖 瓊晦
			current = current->next;
			count++;
		}
		if (current->next == NULL) {
			current->next = new_node;
			new_node->prev = current;
		}
		else {
			current->next->prev = new_node;
			new_node->next = current->next;
			new_node->prev = current;
			current->next = new_node;
		}
	}
	//
	//if (current->prev == NULL && current->next == NULL) {	//鳶殮й 嬪纂曖 喻萄陛 head檣 唳辦
	//	(current)->next = new_node;
	//	(new_node)->prev = current;
	//}
	//else {
	//		if (current->next == NULL) {							//鳶殮й 嬪纂曖 喻萄陛 tail檣 唳辦
	//			current->next = new_node;
	//			new_node->prev = current;
	//			new_node->next = NULL;
	//		}
	//		else {													//斜諼 
	//			while (count != insStdNum) {							//鳶殮й 嬪纂曖 喻萄 瓊晦
	//				current = current->next;
	//				count++;
	//			}
	//		(current)->next = new_node;
	//		(new_node)->prev = current;
	//		(current)->next->prev = new_node;
	//		(new_node)->next = (current)->next;
	//	}
	//}
}
//餉薯
void delStdInfo(StdInfo **head) {
	int delStdNum = 0;
	int count = 1;
	puts("旨收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旬");
	printf("    賃 廓簞 з儅曖 等檜攪蒂 餉薯ж衛啊蝗棲梱? : "); scanf("%d", &delStdNum); getchar();
	puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
	StdInfo *current = *head;
	while (count != delStdNum) {	//餉薯й 嬪纂曖 喻萄 瓊晦
		current = current->next;
		count++;
	}
	if (current->next == NULL && current->prev == NULL) {
		free(current);
		*head = NULL;
		return;
	}
	if (current == *head){			//餉薯й 喻萄陛 head檣 唳辦
		*head = current->next;
	}
	if (current->next != NULL) {	//餉薯й 喻萄曖 next陛 NULL檜 嬴棋 唳辦
		current->next->prev = current->prev;
	}
	else {
		current->prev->next = NULL;
	}
	if (current->prev != NULL) {	//餉薯й 喻萄曖 prev陛 NULL檜 嬴棋 唳辦
		current->prev->next = current->next;
	}
	free(current);
}
//熱薑
void editStdInfo(StdInfo **head) {
	int editStdNum = 0;
	int count = 1;
	printf("賃 廓簞 嬪纂縑 等檜攪蒂 熱薑ж衛啊蝗棲梱? : "); scanf("%d", &editStdNum); getchar();
	StdInfo *current = *head;
	//熱薑й 嬪纂曖 喻萄 瓊晦
	while (count != editStdNum) {
		current = current->next;
		count++;
	}
	printf("旨收收收收收收收收收收收  з儅 薑爾 熱薑 收收收收收收收收收收收旬\n");
	printf("\t檜葷擊 殮溘ж撮蹂 : "); gets((current)->name);
	printf("\t釭檜蒂 殮溘ж撮蹂 : "); scanf("%d", &(current)->age);	getchar();
	printf("\t撩滌擊 殮溘ж撮蹂(陴:M/罹:F) : "); scanf("%c", &(current)->gender);
	printf("\t措橫薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &(current)->p.kor);
	printf("\t艙橫薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &(current)->p.eng);
	printf("\t熱з薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &(current)->p.mat);
	printf("\t婁з薄熱蒂 殮溘ж撮蹂 : "); scanf("%d", &(current)->p.sci); getchar();
	printf("\t囀詮お蒂 瞳橫輿撮蹂 : "); gets((current)->comment);
	puts("曲收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收收旭");
}
void main() {
	StdInfo *head = NULL;
	int select = 0;
	for (;;) {
		select = selectMenu(select);
		switch (select) {
		case 1: addStdInfo(&head); break;
		case 2: insStdInfo(&head); break;
		case 3: editStdInfo(&head); break;
		case 4: delStdInfo(&head); break;
		case 5: showStdInfo(&head); break;
		}
		if (select == 0) break;
	}
	//詭賅葬 п薯
	while (head) {
		StdInfo *temp;
		temp = head;
		head = head->next;
		free(temp);
	}
}