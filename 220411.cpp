#include<stdio.h>

int main(){
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 986.28 / 100;
	const float RATE_EUR = 1342.13;
	const float RATE_CNY = 193.17;
	const float RATE_GBP = 1604.74;
	int inputWon;
	int returnWon = 0;
	int money1, money2, money3, money4, money5, money6, money7, money8;
	
	float outputDollar = 0;
	int outIntDollar, outIntWon;
	int outputDollarFinal = 0;
	
	float outputYen = 0;
	int outputYenFinal = 0;
	
	float outputEur = 0;
	int outputEurFinal = 0;
	
	float outputCny = 0;
	int outputCnyFinal = 0;
	
	float outputGbp = 0;
	int outputGbpFinal = 0;
	
	printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է��ϼ��� : ");
	scanf("%d", &inputWon);
	
	// �̱��޷�
	outputDollar = inputWon / RATE_USD; // 40.55
	outputDollarFinal = outputDollar;
	returnWon = outputDollar * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_USD / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f �޷�\n", inputWon, outputDollar);
	printf("%d �޷�, % d���� ȯ��\n", outputDollarFinal, returnWon);
	
	money1 = returnWon / 50000;
	returnWon = returnWon % 50000;
	money2 = returnWon / 10000;
	returnWon = returnWon % 10000;
	money3 = returnWon / 5000;
	returnWon = returnWon % 5000;
	money4 = returnWon / 1000; // returnWon1000. �� ���ڵ� �����
	returnWon = returnWon % 1000;
	money5 = returnWon / 500;
	returnWon = returnWon % 500;
	money6 = returnWon / 100;
	returnWon = returnWon % 100;
	money7 = returnWon / 50;
	returnWon = returnWon % 50;
	money8 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	// �Ϻ���
	outputYen = inputWon / RATE_JPY;
	outputYenFinal = outputYen;
	returnWon = outputYen * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_JPY / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f ��\n", inputWon, outputYen);
	printf("%d ��, % d���� ȯ��\n", outputYenFinal, returnWon);
	
	money1 = returnWon / 50000;
	returnWon = returnWon % 50000;
	money2 = returnWon / 10000;
	returnWon = returnWon % 10000;
	money3 = returnWon / 5000;
	returnWon = returnWon % 5000;
	money4 = returnWon / 1000;
	returnWon = returnWon % 1000;
	money5 = returnWon / 500;
	returnWon = returnWon % 500;
	money6 = returnWon / 100;
	returnWon = returnWon % 100;
	money7 = returnWon / 50;
	returnWon = returnWon % 50;
	money8 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	// ��������
	outputEur = inputWon / RATE_EUR;
	outputEurFinal = outputEur;
	returnWon = outputEur * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_EUR / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f ����\n", inputWon, outputEur);
	printf("%d ����, % d���� ȯ��\n", outputEurFinal, returnWon);
	
	money1 = returnWon / 50000;
	returnWon = returnWon % 50000;
	money2 = returnWon / 10000;
	returnWon = returnWon % 10000;
	money3 = returnWon / 5000;
	returnWon = returnWon % 5000;
	money4 = returnWon / 1000;
	returnWon = returnWon % 1000;
	money5 = returnWon / 500;
	returnWon = returnWon % 500;
	money6 = returnWon / 100;
	returnWon = returnWon % 100;
	money7 = returnWon / 50;
	returnWon = returnWon % 50;
	money8 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	// �߱����� 
	outputCny = inputWon / RATE_CNY;
	outputCnyFinal = outputCny;
	returnWon = outputCny * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_CNY / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f ����\n", inputWon, outputCny);
	printf("%d ����, % d���� ȯ��\n", outputCnyFinal, returnWon);
	
	money1 = returnWon / 50000;
	returnWon = returnWon % 50000;
	money2 = returnWon / 10000;
	returnWon = returnWon % 10000;
	money3 = returnWon / 5000;
	returnWon = returnWon % 5000;
	money4 = returnWon / 1000;
	returnWon = returnWon % 1000;
	money5 = returnWon / 500;
	returnWon = returnWon % 500;
	money6 = returnWon / 100;
	returnWon = returnWon % 100;
	money7 = returnWon / 50;
	returnWon = returnWon % 50;
	money8 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	// �����Ŀ��
	outputGbp = inputWon / RATE_GBP;
	outputGbpFinal = outputGbp;
	returnWon = outputGbp * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_GBP / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d �� -> %10.2f �Ŀ��\n", inputWon, outputGbp);
	printf("%d �Ŀ��, % d���� ȯ��\n", outputGbpFinal, returnWon);
	
	money1 = returnWon / 50000;
	returnWon = returnWon % 50000;
	money2 = returnWon / 10000;
	returnWon = returnWon % 10000;
	money3 = returnWon / 5000;
	returnWon = returnWon % 5000;
	money4 = returnWon / 1000;
	returnWon = returnWon % 1000;
	money5 = returnWon / 500;
	returnWon = returnWon % 500;
	money6 = returnWon / 100;
	returnWon = returnWon % 100;
	money7 = returnWon / 50;
	returnWon = returnWon % 50;
	money8 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	return 0;
}
