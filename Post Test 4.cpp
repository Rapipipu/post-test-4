#include <iostream>
using namespace std;

int main(){
	int f; cin >> f;
	int nilai[f];
	int jumlah;
	int ratarata;
	
	for(int i=0 ; i<f ; i++){
	  cin >> nilai[i];
	  cout << nilai[i] << " " << endl;
	  jumlah = jumlah + nilai[i];
	}
	ratarata = jumlah/f;
	cout << "Rata rata : " << ratarata << endl;
	
}
