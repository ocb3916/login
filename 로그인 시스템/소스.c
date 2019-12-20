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
		printf("\n\n원하는 기능을 선택해 주세요.");
		printf("\n\n1.로그인");
		printf("\n2.회원가입");
		printf("\n3.종료\n\n->");
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
	//어떻게 회원/비회원을 구분할까?
}
void join() {
	struct User p1;
	printf("이름을 입력하세요.\n->");
	scanf("%s", p1.name);
	printf("전화번호를 입력하세요.(-제외)\n->");
	scanf("%d", &p1.Mobile);
	printf("사용할 아이디를 입력하세요.\n->");
	scanf("%s", p1.ID);
	printf("사용할 패스워드를 입력하세요.\n->");
	scanf("%s", p1.PW);
	//왜 오류가 날까?
}