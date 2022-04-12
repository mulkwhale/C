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
	
	printf("환전을 원하는 원화 금액을 입력하세요 : ");
	scanf("%d", &inputWon);
	
	// 미국달러
	outputDollar = inputWon / RATE_USD; // 40.55
	outputDollarFinal = outputDollar;
	returnWon = outputDollar * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_USD / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d 원 -> %10.2f 달러\n", inputWon, outputDollar);
	printf("%d 달러, % d원을 환전\n", outputDollarFinal, returnWon);
	
	money1 = returnWon / 50000;
	returnWon = returnWon % 50000;
	money2 = returnWon / 10000;
	returnWon = returnWon % 10000;
	money3 = returnWon / 5000;
	returnWon = returnWon % 5000;
	money4 = returnWon / 1000; // returnWon1000. 이 숫자도 상수로
	returnWon = returnWon % 1000;
	money5 = returnWon / 500;
	returnWon = returnWon % 500;
	money6 = returnWon / 100;
	returnWon = returnWon % 100;
	money7 = returnWon / 50;
	returnWon = returnWon % 50;
	money8 = returnWon / 10;
	returnWon = returnWon % 10;	
	
	printf("5만원: %d개, 1만원: %d개, 5천원: %d개, 1천원: %d개, 5백원: %d개, 100원: %d개, 50원: %d개, 10원: %d개\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	// 일본엔
	outputYen = inputWon / RATE_JPY;
	outputYenFinal = outputYen;
	returnWon = outputYen * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_JPY / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d 원 -> %10.2f 엔\n", inputWon, outputYen);
	printf("%d 엔, % d원을 환전\n", outputYenFinal, returnWon);
	
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
	
	printf("5만원: %d개, 1만원: %d개, 5천원: %d개, 1천원: %d개, 5백원: %d개, 100원: %d개, 50원: %d개, 10원: %d개\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	// 유럽유로
	outputEur = inputWon / RATE_EUR;
	outputEurFinal = outputEur;
	returnWon = outputEur * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_EUR / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d 원 -> %10.2f 유로\n", inputWon, outputEur);
	printf("%d 유로, % d원을 환전\n", outputEurFinal, returnWon);
	
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
	
	printf("5만원: %d개, 1만원: %d개, 5천원: %d개, 1천원: %d개, 5백원: %d개, 100원: %d개, 50원: %d개, 10원: %d개\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	// 중국위안 
	outputCny = inputWon / RATE_CNY;
	outputCnyFinal = outputCny;
	returnWon = outputCny * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_CNY / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d 원 -> %10.2f 위안\n", inputWon, outputCny);
	printf("%d 위안, % d원을 환전\n", outputCnyFinal, returnWon);
	
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
	
	printf("5만원: %d개, 1만원: %d개, 5천원: %d개, 1천원: %d개, 5백원: %d개, 100원: %d개, 50원: %d개, 10원: %d개\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	// 영국파운드
	outputGbp = inputWon / RATE_GBP;
	outputGbpFinal = outputGbp;
	returnWon = outputGbp * 100;
	returnWon = returnWon % 100;
	returnWon = returnWon * RATE_GBP / 100;
	returnWon = returnWon / 10 * 10;
	
	printf("%d 원 -> %10.2f 파운드\n", inputWon, outputGbp);
	printf("%d 파운드, % d원을 환전\n", outputGbpFinal, returnWon);
	
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
	
	printf("5만원: %d개, 1만원: %d개, 5천원: %d개, 1천원: %d개, 5백원: %d개, 100원: %d개, 50원: %d개, 10원: %d개\n", money1, money2, money3, money4, money5, money6, money7, money8);
	
	return 0;
}
