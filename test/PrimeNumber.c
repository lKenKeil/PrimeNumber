#include <stdio.h>
int main()
{
	int sum = 0;
	for (int a = 2;a <= 100;a++) {         //0�� 1�� �Ҽ��� �ƴϹǷ� �����Ѵ�. ���� 2���� �����Ѵ�.
		for (int b = 2;b <= a;b++) {
			if (a % b == 0) {
				if (a == b) {
					sum += a;
				}
				break;
			}
		}
	}
	printf("0���� 100������ �Ҽ��� ���� %d�Դϴ�.", sum);
}
