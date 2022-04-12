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
	
	printf("환전을 원하는 원화 금액을 입력하세요 : ");
	scanf("%d", &inputWon);
	
	printf("환전할 외화를 선택하세요 (1:USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : ");
	scanf("%d", &menuNum);
	
	// 미국달러
	if(menuNum == 1){
		changeRate = RATE_USD;
	}
	
	// 일본엔
	if(menuNum == 2){
		changeRate = RATE_JPY;
	}
	
	// 유럽유로
	if(menuNum == 3){
		changeRate = RATE_EUR;
	}
	
	// 중국위안 
	if(menuNum == 4){
		changeRate = RATE_CNY;
	}
	
	// 영국파운드
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
	
	printf("%d 원 -> %10.2f ", inputWon, outputMoney);
	// 미국달러
	if(menuNum == 1){
		printf("달러\n달러 ");
	}
	
	// 일본엔
	if(menuNum == 2){
		printf("엔\n엔 ");
	}
	
	// 유럽유로
	if(menuNum == 3){
		printf("유로\n유로 ");
	}
	
	// 중국위안 
	if(menuNum == 4){
		printf("위안\n위안 ");
	}
	
	// 영국파운드
	if(menuNum == 5){
		printf("파운드\n파운드 ");
	}
	printf("%d, %d원을 환전\n", outputMoneyFinal, returnWon);
	
	printf("5만원: %d개, 1만원: %d개, 5천원: %d개, 1천원: %d개, 5백원: %d개, 100원: %d개, 50원: %d개, 10원: %d개\n", returnWon50000, returnWon10000, returnWon5000, returnWon1000, returnWon500, returnWon100, returnWon50, returnWon10);
	
	return 0;
}
