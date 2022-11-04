// mikado.c

#include <stdio.h>
#include "mikado.h"

void mikado(int bah) {

	int pooh = 10;

	printf("In mikado(), pooh = %d and &pooh = %p\n",
		pooh, &pooh);
	printf("In mikado(), bah = %d and &pooh = %p\n",
		bah, &bah);
}
