#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
enum suit {
	club=0,
	diamonds=10,
	hearts=20,
	spades=3,
}card;
int main(int argc, char *argv[]) {
	card=club;
	printf("size of enum variable =%d bytes",sizeof(card));
	return 0;
}