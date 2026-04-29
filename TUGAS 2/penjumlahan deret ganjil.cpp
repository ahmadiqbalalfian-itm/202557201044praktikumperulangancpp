#include <iostream>
using namespace std;
int main() {
	int totalderet=0;
	int batasakhir=20;
	for (int deretganjil=1;deretganjil<batasakhir;deretganjil++){
		if (deretganjil%2==1){
			totalderet+=deretganjil;
			cout<<deretganjil;
			if(deretganjil<batasakhir-1){
				cout<<" + ";
			}
		}
	}
	cout<<" = "<<totalderet;
	return 0;
}
