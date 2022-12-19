#include <iostream>
#include <conio.h>
using namespace std;

void garis(){
	cout<<"--------------------------------------"<<endl;
}

main(){
	int br,kl,x,y,z;
	cout<<"Inputkan berapa banyak baris yang diinginkan untuk array : ";
	cin>>br;
	cout<<"Inputkan berapa banyak kolom yang diinginkan untuk array : ";
	cin>>kl;
	garis();
	
	int array[br][kl],tukar[br][kl]; 
    cout<<"Berikan nilai pada array!"<<endl;
    garis();
    for (x=1; x<=br; x++){
    	for(y=1; y<=kl; y++){
    		cout<<"Array baris ke-"<<x<<" kolom ke-"<<y<<": \n";
    		cin>>array[x][y];
    		garis();
		}
	}
	
	cout<<"Array sebelum ditukar kolom dan barisnya : \n";
	garis();
	for(x=1;x<=br;x++){
		for(y=1;y<=kl;y++){
			cout<<"  "<<array[x][y];
		}
		cout<<endl;
	}
	garis();
	
	cout<<"Array sesudah ditukar kolom dan barisnya : \n";
	garis();
	for(x=1;x<=kl;x++){
		for(y=1;y<=br;y++){
			cout<<"  "<<array[y][x];
		}
		cout<<endl;
	}
	garis();
}
