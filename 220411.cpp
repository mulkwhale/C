#include<stdio.h>

int main(){
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 986.28 / 100;
	const float RATE_EUR = 1342.13;
	const float RATE_CNY = 193.17;
	const float RATE_GBP = 1604.74;
	int inputWon;
	int returnWon = 0;
	int returnWon50000, returnWon10000, returnWon5000, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10;
	int menuNum = 0;
	
	float outputMoney = 0;
	int outputMoneyFinal = 0;
	
	float changeRate = 0;
	
	printf("ȯ���� ���ϴ� ��ȭ �ݾ��� �Է��ϼ��� : ");
	scanf("%d", &inputWon);
	
	printf("ȯ���� ��ȭ�� �����ϼ��� (1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : ");
	scanf("%d", &menuNum);
	
	// �̱��޷�
	if(menuNum == 1){
		changeRate = RATE_USD;
	}
	
	// �Ϻ���
	if(menuNum == 2){
		changeRate = RATE_JPY;
	}
	
	// ��������
	if(menuNum == 3){
		changeRate = RATE_EUR;
	}
	
	// �߱����� 
	if(menuNum == 4){
		changeRate = RATE_CNY;
	}
	
	// �����Ŀ��
	if(menuNum == 5){
		changeRate = RATE_GBP;
	}
	
	outputMoney = inputWon / changeRate;
	outputMoneyFinal = outputMoney;
	returnWon = outputMoney * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * changeRate / 100;
	returnWon = returnWon / 10 * 10;
	
	returnWon50000 = returnWon / 50000;
	returnWon10000 = (returnWon % 50000) / 10000;
	returnWon5000 = (returnWon % 10000) / 5000;
	returnWon1000 = (returnWon % 5000) / 1000;
	returnWon500 = (returnWon % 1000) / 500;
	returnWon100 = (returnWon % 500) / 100;
	returnWon50 = (returnWon % 100) / 50;
	returnWon10 = (returnWon % 50) / 10;
	
	printf("%d �� -> %10.2f ", inputWon, outputMoney);
	// �̱��޷�
	if(menuNum == 1){
		printf("�޷�\n�޷� ");
	}
	
	// �Ϻ���
	if(menuNum == 2){
		printf("��\n�� ");
	}
	
	// ��������
	if(menuNum == 3){
		printf("����\n���� ");
	}
	
	// �߱����� 
	if(menuNum == 4){
		printf("����\n���� ");
	}
	
	// �����Ŀ��
	if(menuNum == 5){
		printf("�Ŀ��\n�Ŀ�� ");
	}
	printf("%d, %d���� ȯ��\n", outputMoneyFinal, returnWon);
	
	printf("5����: %d��, 1����: %d��, 5õ��: %d��, 1õ��: %d��, 5���: %d��, 100��: %d��, 50��: %d��, 10��: %d��\n", returnWon50000, returnWon10000, returnWon5000, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	
	return 0;
}
