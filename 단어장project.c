﻿#include <stdio.h>


//추후에 함수로 세부사항 부분 정리한뒤 intmain으로 나중에 묶을것


// 단어장 입구, 단어 추가나 시험,단어장 중 선택하는 함수
int StartPage(void) {
	printf("원하시는 기능을 선택하세요.\n1:단어장 2:단어추가 3:단어시험:");
	int start;
	scanf_s("%d", &start);
	
	while (1){
		switch (start) {
		case 1:
			printf("단어장을 선택하셨습니다\n");
			break;
		case 2:
			printf("단어추가를 선택하셨습니다\n");
			break;
		case 3:
			printf("단어시험을 선택하셨습니다\n");
			break;
		default:
			printf("다시 입력해 주세요\n1:단어장 2:단어추가 3:단어시험:\n");
		}
		//다시 리턴값 받아서 다음 함수로 넘겨줌
		return start;
	}
}
//여기서 함수를 통해 기능 변경,메인 함수
int main() {
	int next;

	next = StartPage();
	printf("%d", next);
	switch (next) {
		//단어장
	case 1:
		
		printf("단어장 기능 나중에 추가\n");
		break;
	case 2:
		//단어추가
		printf("단어추가기능 나중에 추가\n");
		break;
	case 3:
		//단어시험
		printf("단어시험기능 나중에 추가\n");
		break;

	}
}