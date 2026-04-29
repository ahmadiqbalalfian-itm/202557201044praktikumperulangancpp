#include <iostream>
using namespace std;
int main() {
	
	int batasakhir=12;
	
	for(int deretganjil=2;deretganjil<batasakhir;deretganjil++){
	  if(deretganjil%2==1){
	  int totalderet=1;
	  for (int a=1;a<deretganjil;a++){
		if (a%2==1){
			totalderet*=a;
			cout<<a;
		}
		if(a<deretganjil-2&&a%2==1){
		  cout<<" * ";
		}
	}
	cout<<" = "<<totalderet<<endl;
	  }
	}
	return 0;
}
