#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct {
	int hour;
	int min;
	int sec;
}Time;

int main() {

	Time firstTime, SecondTime, FinalTime;

	scanf("%d %d %d", &firstTime.hour, &firstTime.min, &firstTime.sec);
	scanf("%d %d %d", &SecondTime.hour, &SecondTime.min, &SecondTime.sec);
	
	//�� ���
	if (firstTime.sec > SecondTime.sec) {
		SecondTime.min--;
		SecondTime.sec += 60;
	}
	FinalTime.sec = SecondTime.sec - firstTime.sec;

	//�� ���
	if (firstTime.min > SecondTime.min) {
		SecondTime.hour--;
		SecondTime.min += 60;
	}
	FinalTime.min = SecondTime.min - firstTime.min;

	//�� ���
	FinalTime.hour = SecondTime.hour - firstTime.hour;

	printf("%d %d %d", FinalTime.hour, FinalTime.min, FinalTime.sec);
}

