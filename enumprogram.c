#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

enum week {
	sunday,monday,tuesday,wednesday,thursday,friday,saturday
};
int main(int argc, char *argv[]) {
	enum week today;
	today=wednesday;
	printf("day %d ",today+1);
	return 0;
}