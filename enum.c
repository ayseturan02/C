#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

enum aylar {OCA=1,SUB,MAR,NIS,MAY,HAZ,TEM,AGU,EYL,EKI,KAS,ARA};
int main(int argc, char *argv[]) {
	
	enum aylar ay;
	const char *ayismi[]={"","ocak","subat","mart","nisan","mayis","haziran","temmuz","agustos","eylul","ekim","kasim","aralik"};
	
	for(ay=OCA; ay<=ARA; ay++)
	printf("%2d%11s\n",ay,ayismi[ay]);
	return 0;
}
