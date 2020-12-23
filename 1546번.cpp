#include <iostream>
using namespace std;

int main(){
	int n, m=0, avg=0;
	cin >> n;
	float arr[1000] = {0,};
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i] > m)
			m = arr[i];
	}
	for(int i=0;i<n;i++){
		arr[i] = arr[i] / m*100;
	}
	float total = 0.0;
	for(int i=0;i<n;i++){
		total += arr[i];
	}
	cout << fixed;
	cout.precision(2);
	cout << total/n << endl;
	
	return 0;
}
