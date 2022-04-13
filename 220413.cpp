#include<stdio.h>

int main(){
	// ����, �� �Է��ϸ� �޷� ���	
	while(true){
		int year, month, dayOfWeek;
		int yearCount = 0, count = 0, days = 31;
		bool leapYear = false;
		
		printf("�⵵ �Է� : ");
		scanf("%d", &year);
		if (year == 0) {
			printf("�����մϴ�.");
			break;
		}
		printf("�� �Է� : ");
		scanf("%d", &month);
		
		// �� 
		for (int index = 1900; index <= year; index++) {
			if ((index % 400 == 0) || ((index % 4 == 0) && (index % 100 != 0))) {
				yearCount++;
			}
		}
		
		count = 365 * (year - 1900) + yearCount;
		
		if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
			leapYear = true;
			count--;
		}
		
		// ��
		for (int index = 2; index <= month; index++) {
			switch(index){
				case 3:
					if (leapYear) {
						count += 29;
					} else {
						count += 28;
					}
					break;
				case 2:
				case 4:
				case 6:
				case 8:
				case 9:
				case 11:
					count += 31;
					break;
				case 5:
				case 7:
				case 10:
				case 12:
					count += 30;
					break;
			}
		}
		
		// ��			
		switch(month){
			case 2:
				if (leapYear) {
					days = 29;
				} else {
					days = 28;
				}
				break;
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				days = 31;
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				days = 30;
				break;
		}
		
		dayOfWeek = count % 7;
			
		printf("=================== %d�� %d�� ===================\n", year, month);
		printf("��	��	ȭ	��	��	��	��\n");
		if (dayOfWeek < 6) {
			for (int index = 0; index <= dayOfWeek; index++) {
				printf("\t");
			}
		}
		dayOfWeek = (dayOfWeek + 1) % 7;
		for (int index = 1; index <= days; index++) {
			printf("%d\t", index);
			dayOfWeek++;
			if (dayOfWeek > 6) {
				dayOfWeek = 0;
				printf("\n");
			}
		}
		printf("\n") ;
	}

	return 0;
}
