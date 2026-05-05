#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	
	int tahun [3][3]={{150,159,230},{100,125,150},{210,125,156}};
	cout<<"========================="<<endl;
	cout<<"|"<<setw(6)<<"|"<<setw(4)<<" Tahun Penjualan"<<" |"<<endl;
	cout<<"|  NO |=================|"<<endl;
	cout<<"|"<<setw(6)<<"|"<<" 2021| 2022| 2023|"<<endl;
	cout<<"|=======================|"<<endl;
	for(int i=0;i<3;i++){
		cout<<"|"<<setw(3)<<i+1<<"  |";
		for(int j=0; j<3; j++){
			cout<<setw(4)<<tahun[i][j]<<" |";
		}
		cout<<endl;
		
	}
	cout<<"========================="<<endl;
}
