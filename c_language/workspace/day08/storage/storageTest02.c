#include <stdio.h>
//�Լ� �ۼ� <-- "�Լ� ����"

extern int global;  // ����!
                    // ���ǰ� �ƴϴ�!
                    // �޸𸮿� ����� �� �ƴ϶�, �ܺκ���(��������) ã�� ��
                    //extern Ű���带 ����� ��, ���� ������ �ȵȴ�.
                    //extern int g = 10; <---- ����

extern int st_global; // storageTest03.c ���� static int st_global�� 
                      // �ܺ� ������ �����ߴµ�..

void fct() {

	printf("Test01���� ������ global ������ �� : %d\n", global);
	//printf("Test03���� ������ st_global ������ �� : %d\n", st_global);

}