#include <stdio.h>
#include <stdlib.h>

#define COM 100

int a = 0;
int arr[COM][COM] = { 0 };
int visit[COM] = { 0 };


void dfs(int x, int y) {
	visit[x] = 1;
	a++;

	for (int i = 1;i <= y;i++) {
		if (arr[x][i] == 1 && !visit[i]) {
			dfs(i, y);
		}
	}
}

int main(void) {
	int z, w;
	scanf_s("%d", &z);
	scanf_s("%d", &w);

	for (int i = 0; i < w;i++) {
		int X, Y;
		scanf_s("%d %d", &X, &Y);
		arr[X][Y] = 1;
		arr[Y][X] = 1;
	}
	dfs(1, z);
	printf("%d\n", a - 1);
	return 0;
}