#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int n;
	
	
	cout<<" inigrese un numero:"<<endl;
	cin>>n;
	cout<<endl;
	
	for(int i= 10;i>=0;i--) {
		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
		
	return 0;
}
