#include <stdio.h>
#include <string.h>
/*
	����ü ����
	struct Member
		   ��������� id�� pw
	�ʱ�ȭ "dog", "1234"
	���

	id pw ���� cat 5668 ����
*/
struct Member {
	char id[10];
	char pw[10];

};
void main() {

	struct Member kor = { "dog", "1234" };
	printf("id : %d\n", kor.id);
	printf("pw : %d\n", kor.pw);

	//����ü�� ������� id, pw�� �迭(������ ���)�̱� ������, strcpy�Լ��� �̿��ؼ� ���ڿ��� ����(����)�ؾ� �Ѵ�!!
	//kor.id = "cat" // �ּҸ� �� �ּҿ� ������ �ȵȴ�

	strcpy(kor.id, "cat");  //�� �ȵ���?
	//kor.id[0] = 'D';
	kor.id[1] = 'D';

	strcpy(kor.pw, "5678");

	printf("id :  %s\n", kor.id);
	printf("pw : %s\n", kor.pw);


}