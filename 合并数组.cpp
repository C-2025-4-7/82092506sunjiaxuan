#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int i = 0;
	int j = 0;
	int k = 0;
	list3[size1 + size2];
	for (int n = 0; n< size1 + size2; n++) {
		if (i < size1 && (j >= size2 || list1[i] <= list2[j])) {
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
	}
}
int main(){
	int size1;
	int size2;
	cin >> size1;
	int list1[80];	
	for (int m = 0; m < size1; m++) {
		cin >> list1[m];
	}
	cin >> size2;
	int list2[80];
	for (int n = 0; n < size2; n++) {
		cin >> list2[n];
	}
	int list3[160];
	merge( list1,size1, list2,size2, list3);
	cout << "the merged list is" << " ";
	for (int l = 0; l < size1 + size2; l++) {
		cout << list3[l] << " ";
	}

}	