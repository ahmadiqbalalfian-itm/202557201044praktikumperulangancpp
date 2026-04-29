#include <iostream>
using namespace std;
int main() {
	
	int batasakhir=10;
	int totalpiramida=0;
	for(int deretganjil=1;deretganjil<batasakhir+1;deretganjil++){
	  if(deretganjil%2==0){
	  int totalderet=0;
	  for (int a=batasakhir;a>=deretganjil;a--){
		if (a%2==0){
			totalderet+=a;
			cout<<a;
		}
		if(a>deretganjil+1&&a%2==0){
		  cout<<" + ";
		}
	}
	cout<<" = "<<totalderet<<endl;
	totalpiramida+=totalderet;
	  }
	}
	cout<<"-------------+"<<endl<<totalpiramida;
	return 0;
}
