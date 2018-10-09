#include <iostream>

using namespace std;

char a[20][21];
int n, m;
int maxX, maxY, maxSum=0;

int destroyEnemy(int i, int j) {
	int sum = 0;
	int x, y;
	x=i, y=j;
	while (a[x][y] != '#') {
		if (a[x][y] == 'G')
			sum++;
		x++;
	}
	x=i, y=j;//todo
	while (a[x][y] != '#') {
		if (a[x][y] == 'G')
			sum++;
		x--;
	}
	x=i, y=j;
	while (a[x][y] != '#') {
		if (a[x][y] == 'G')
			sum++;
		y++;
	}
	x=i, y=j;
	while (a[x][y] != '#') {
		if (a[x][y] == 'G')
			sum++;
		y--;
	}


	return sum;
}

int main() {

	n = 13;
	m = 13;
	cin>>n>>m;

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (a[i][j] == '.') {
				int tempSum = destroyEnemy(i, j);
				if (maxSum < tempSum) {
					maxSum = tempSum;
					maxX = i;
					maxY = j;
				}
			}
		}
	}

	cout << "炸弹放在" << "(" << maxX << "," << maxY << ")处，" << "最多可以消灭" << maxSum << "个敌人" << endl;

	return 0;
}

/*
测试数据
 13 13
#############
#GG.GGG#GGG.#
###.#G#G#G#G#
#.......#..G#
#G#.###.#G#G#
#GG.GGG.#.GG#
#G#.#G#.#.###
##G...G.....#
#G#.#G###.#G#
#...G#GGG.GG#
#G#.#G#G#.#G#
#GG.GGG#G.GG#
#############
*/