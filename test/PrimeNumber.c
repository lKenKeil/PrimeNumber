#include <stdio.h>
int main()
{
	int sum = 0;
	for (int a = 2;a <= 100;a++) {         //0과 1은 소수가 아니므로 제외한다. 따라서 2부터 시작한다.
		for (int b = 2;b <= a;b++) {
			if (a % b == 0) {
				if (a == b) {
					sum += a;
				}
				break;
			}
		}
	}
	printf("0부터 100까지의 소수의 합은 %d입니다.", sum);
}
