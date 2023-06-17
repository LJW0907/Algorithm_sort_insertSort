#include <iostream>

using namespace std;

void insertSort(int* data, int n) {
	int tmp;
	int order;

	for (int i = 1; i < n; i++) {
		order = 0;

		while (order < i) {
			if (data[order] > data[i]) {
				tmp = data[i];

				for(int j = i; j > order; j--)
					data[j] = data[j - 1];

				data[order] = tmp;
			}
			order++;
		}
	}
}

int main() {
	int data[6] = {15, 12, 13, 10, 14, 11};

	insertSort(data, 6);

	for (int i = 0; i < 6; i++)
		cout << data[i] << " ";

}