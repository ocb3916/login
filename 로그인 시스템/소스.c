#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

struct User {
	char name[16];
	int Mobile;
	char ID[16];
	char PW[16];
};

void login();
void join();

void main() {
	printf("***********************");
	printf("\n*                     *");
	printf("\n*  Login System Beta  *");
	printf("\n*                     *");
	printf("\n***********************");

	while (1) {
		int choice;
		printf("\n\n���ϴ� ����� ������ �ּ���.");
		printf("\n\n1.�α���");
		printf("\n2.ȸ������");
		printf("\n3.����\n\n->");
		scanf_s("%d", &choice);

		if (choice == 1) {
			login();
		}
		else if (choice == 2) {
			join();
		}
		else if (choice == 3) {
			break;
		}
	}
}
void login() {
	//��� ȸ��/��ȸ���� �����ұ�?
}
void join() {
	struct User p1;
	printf("�̸��� �Է��ϼ���.\n->");
	scanf("%s", p1.name);
	printf("��ȭ��ȣ�� �Է��ϼ���.(-����)\n->");
	scanf("%d", &p1.Mobile);
	printf("����� ���̵� �Է��ϼ���.\n->");
	scanf("%s", p1.ID);
	printf("����� �н����带 �Է��ϼ���.\n->");
	scanf("%s", p1.PW);
	//�� ������ ����?
}