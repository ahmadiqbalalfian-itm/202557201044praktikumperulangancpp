#include <iostream>
using namespace std;
int main() {
	int totalderet=0;
	int batasakhir=21;
	for (int deretgenap=1;deretgenap<batasakhir;deretgenap++){
		if (deretgenap%2==0){
			totalderet+=deretgenap;
			cout<<deretgenap;
			if(deretgenap<batasakhir-1){
				cout<<" + ";	
			}
		}
	}
	cout<<" = "<<totalderet;
	return 0;
}
