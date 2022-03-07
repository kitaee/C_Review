#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand(time(NULL));
  printf("주사의 1의 결과 : %d\n",(rand()%6)+1);
  printf("주사의 2의 결과 : %d\n",(rand()%6)+1);
	return 0;
}
