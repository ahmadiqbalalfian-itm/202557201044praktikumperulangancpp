#include <iostream>
using namespace std;
int main() {
	
	int batasakhir=13;
	
	for(int deretganjil=3;deretganjil<batasakhir;deretganjil++){
	  if(deretganjil%2==0){
	  int totalderet=0;
	  for (int a=1;a<deretganjil;a++){
		if (a%2==0){
			totalderet+=a;
			cout<<a;
		}
		if(a<deretganjil-2&&a%2==0){
		  cout<<" + ";
		}
	}
	cout<<" = "<<totalderet<<endl;
	}
	}
	return 0;
}
