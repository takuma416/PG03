#include <stdio.h>

int Recursivel(int kyuuryou, int zikan, int kotei) {
	if (kyuuryou >= kotei) {
		printf("%dŠÔŒã‚É’´‚¦‚é", zikan);
		return zikan;
	}
	printf("%d %d\n", kyuuryou, kotei);
	kyuuryou = kyuuryou * 2 - 50;

	return(Recursivel(kyuuryou, ++zikan, kotei=1072));
}

int main() {
	int saiki = 100;
	int ippan = 1072;
	int zikan = 0;
	int result1 = Recursivel(saiki, zikan, ippan);;

	return 0;
}