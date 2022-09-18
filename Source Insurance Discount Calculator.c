
#include <stdio.h>

int main(void) {

	int totalPrice, discountPrice, userAge;

	printf("Enter the price for insurance before discount: \n");
	scanf_s("%d", &totalPrice);

	printf("Enter the price for insurance after discount: \n");
	scanf_s("%d", &discountPrice);

	printf("Enter the user's age: \n");
	scanf_s("%d", &userAge);


	if (userAge > 65) {
		printf("The user recieves discount. Total price is %d", discountPrice);
	}
	else {
		printf("The user does not recieve discount. Total price is %d", totalPrice);
	}

	return (0);



}
