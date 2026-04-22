#include <iostream>
using namespace std;
int main(){
	//Soal nomer 1
	int total=0;
	cout<<"Soal 1 (Genap): "<<endl;
	for(int i =2; i<=20; i+=2){
	
	cout<<i;
	total += i;
	
	if (i <20)
		cout <<"+";
	
}
	cout<<" = "<<total<<endl;
	cout<<endl;
	
	
	//Soal nomer 2
	int jumlah=0;
	cout<<"Soal 2 (Ganjil): "<<endl;
	for(int a =1; a<=20; a+=2){
	
	cout<<a;
	jumlah += a;
	
	if (a <20)
		cout <<"+";
	
}
	cout<<" = "<<jumlah<<endl;
	cout<<endl;
	
	
	//Soal nomer 3
	cout<<"Soal 3 (Genap): "<<endl;
	int c=5;
	for(int i=1;i<=c;i++){
		int Penjumlahan = 0;
		for(int j=1; j<=i; j++){
			int genap = j * 2;
			Penjumlahan += genap;
		cout<<genap;
		if (j<i){
		
			cout<<"+";
	}
    }   	
		cout<< " = "<<Penjumlahan<<endl;
	}
	cout<<endl;
	
	
	//Soal nomer 4
	cout<<"Soal 4 (Ganjil): "<<endl;
	int z=5;
	for(int k=1;k<=z;k++){
		int Perkalian =1;
		for(int y=1; y<=k; y++){
			int ganjil = (y * 2)-1;
			Perkalian *= ganjil;
		cout<<ganjil;
		if (y<k){
		
			cout<<"*";
	}
    }   	
		cout<< " = "<<Perkalian<<endl;
	}
	cout<<endl;
	
	
	//Soal nomer 5
	cout<<"Soal 5 (Ganjil): "<<endl;
	int L=1;
	int dijumlah = 0;
	for(int p=5;p>=1;p--){
		int jumlah = 0;
		for(int d=5; d>(5-p); d--){
			int nombor = d * 2;
			jumlah += nombor;
		cout<<nombor;
		if (d>(5-p)+1){
		
			cout<<"+";
	}
    }   	
		cout<< " = "<<jumlah<<endl;
		dijumlah += jumlah;
	}
	cout<<"------------ +"<<endl;
	cout<<dijumlah<<endl;
return 0;	

}
