#include <iostream>
using namespace std;
int main() {
	int b=11;
	int t=0;
	for (int g=1;g<b;g++){
		
		for(int a=1;a<g;a++){
			
			if (g%2==0){
				t= g;
				cout<<g;	
				if(g<b){
					cout<<" + ";
				}
			}
				
		}
		cout<<" = "<<t<<endl;		
	}
	
	return 0;
}
