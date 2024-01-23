#include <stdio.h>

int main(void) {
	int height_ft;
	int height_in;

	float height_cm;

	printf("Enter height in ft: ");
	scanf("%d", &height_ft);
	printf("Enter height in in: ");
	scanf("%d", &height_in);

	height_cm = height_ft * 30.48 + height_in * 2.54;

	printf("You are %lf cm tall.\n", height_cm);

	return 0;
}


