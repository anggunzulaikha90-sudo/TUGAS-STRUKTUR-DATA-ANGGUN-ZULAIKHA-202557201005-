#include <iostream>
using namespace std;

int main(){
	int nilai;
	cout<<"Masukkan Nilai : ";
	cin>>nilai;
	if (nilai>=80){
		cout<<"BAIK SEKALI";
	}else if (nilai>=70) {
		cout<<"BAIK";
	}else{
		cout<<"KURANG BAIK";
	}
}
