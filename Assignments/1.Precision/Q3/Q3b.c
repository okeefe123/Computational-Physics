#include <stdio.h>
#include <math.h>

int main(){
double n, m, p, sum, othersum;
int i, array[7] = {100, 1000, 10000, 100000, 1000000, 10000000, 100000000};

for (i = 0; i<6; i++) {
	p = array[i];

	for (n = 1; n <= array[i]; n++) {
		sum += (1/n);
		}
		printf("The sum from 1 to %d of 1/n is %f.\n", array[i],  sum);

	for (m = array[i]; m >= 1; m--) {
		othersum += (1/m);
		}
		printf("The sum from %d to 1 of 1/n is %f.\n", array[i], othersum);
}
return 0;
}
