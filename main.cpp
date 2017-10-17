# 2048-0.0.2


#include <ctime>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	int a[4][4] = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };

	int o;
	srand(time(0));
	int k = rand() % 10 ;
	if (k < 9) {
		o =2;
	}
	else o = 4;
	int q = 20;
	srand(time(0) + q);
	int i = rand() % 4;
	q++;
	srand(time(0) + q);
	int j = rand() % 4;
	q++;
	a[i][j] = o;
	
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {

			cout << a[i][j] << " ";
		}
		cout << endl;

	}

	char oper;
	cin >> oper;
	while (oper != 'q') {

		switch (oper) {

		case 'j': {
			int b[4][4];

			for (int i = 0; i < 4; i++) {
				int p = 3;
				for (int j = 3; j >= 0; j--) {
					if (a[j][i] > 0) {
						b[p][i] = a[j][i];
						a[j][i] = 0;
						p--;
					}
				}
			}
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					if (b[i][j] < 0) b[i][j] = 0;
				}
			}
			for (int i = 0; i < 4; i++) {
				for (int j = 3; j > 0; j--) {
					if (b[j][i] == b[j - 1][i]) {
						b[j][i] = b[j][i] * 2;
						b[j - 1][i] = 0;
					}
				}
			}
			for (int i = 0; i < 4; i++) {
				int p = 3;
				for (int j = 3; j >= 0; j--) {
					if (b[j][i] > 0) {
						a[p][i] = b[j][i];
						b[j][i] = 0;
						p--;
					}
				}
			}

		}
				  break;

		case 'k': {
			int b[4][4];

			for (int i = 0; i < 4; i++) {
				int p = 0;
				for (int j = 0; j < 4; j++) {
					if (a[j][i] > 0) {
						b[p][i] = a[j][i];
						a[j][i] = 0;
						p++;
					}
				}
			}
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					if (b[i][j] < 0) b[i][j] = 0;
				}
			}



			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 3; j++) {
					if (b[j][i] == b[j + 1][i]) {
						b[j][i] = b[j][i] * 2;
						b[j + 1][i] = 0;
					}
				}
			}
			for (int i = 0; i < 4; i++) {
				int p = 0;
				for (int j = 0; j < 4; j++) {
					if (b[j][i] > 0) {
						a[p][i] = b[j][i];
						b[j][i] = 0;
						p++;
					}
				}
			}
		}
				  break;

		case 'h': {
			int b[4][4];

			for (int i = 0; i < 4; i++) {
				int p = 0;
				for (int j = 0; j < 4; j++) {
					if (a[i][j] > 0) {
						b[i][p] = a[i][j];
						a[i][j] = 0;
						p++;
					}
				}
			}
			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					if (b[i][j] < 0) b[i][j] = 0;
				}
			}



			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 3; j++) {
					if (b[i][j] == b[i][j + 1]) {
						b[i][j] = b[i][j] * 2;
						b[i][j + 1] = 0;
					}
				}
			}

			for (int i = 0; i < 4; i++) {
				int p = 0;
				for (int j = 0; j < 4; j++) {
					if (b[i][j] > 0) {
						a[i][p] = b[i][j];
						b[j][i] = 0;
						p++;
					}
				}
			}
		}
				  break;

		case 'l': {
			int b[4][4];

			for (int i = 0; i < 4; i++) {
				int p = 3;
				for (int j = 3; j >= 0; j--) {
					if (a[i][j] > 0) {
						b[i][p] = a[i][j];
						a[i][j] = 0;
						p--;
					}
				}
			}

			for (int i = 0; i < 4; i++) {
				for (int j = 0; j < 4; j++) {
					if (b[i][j] < 0) b[i][j] = 0;
				}
			}

			for (int i = 0; i < 4; i++) {
				for (int j = 3; j > 0; j--) {
					if (b[i][j] == b[i][j - 1]) {
						b[i][j] = b[i][j] * 2;
						b[i][j - 1] = 0;
					}
				}
			}

			for (int i = 0; i < 4; i++) {
				int p = 3;
				for (int j = 3; j >= 0; j--) {
					if (b[i][j] > 0) {
						a[i][p] = b[i][j];
						b[j][i] = 0;
						p--;
					}
				}
			}
		}
				  break;

		}

	
		int l;
		srand(time(0));
		int k = rand() % 10;
		if (k <9){
			l = 2;
		}
		else l = 4;
	m1:
		int f = 1;
		srand(time(0) + f);
		int i = rand() % 4;
		f++;
		srand(time(0) + f);
		int j = rand() % 4;
		f++;
		if (a[i][j] == 0) {
			a[i][j] = l;
		}
		else goto m1;
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {

				cout << a[i][j] << " ";
			}
			cout << endl;

		}
		cin >> oper;

	}



	cin.get();
	cin.get();
	return 0;
}
