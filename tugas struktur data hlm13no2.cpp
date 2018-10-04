#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;
main(){
	int r, s, t_akhir=0, t, ti2=0;
	float rata_rata, stdev, u;
	
		cout<<"Masukkan jumlah data : ";cin>>s;
	int c[s];
	for(r=0;r<s;r++){
			cout<<"Masukkan data ke-"<<r+1<<" = ";cin>>c[s];
	t_akhir=t_akhir+c[s];
		ti2=ti2+pow(c[s],2);
		
	}
	rata_rata=t_akhir/s;
	t=pow(t_akhir,2);
	u=(s*ti2-t)/(s*(s-1));
	stdev=sqrt(u);
			cout<<endl;
			cout<<"Rata-rata = "<<rata_rata<<endl;
			cout<<"Varian = "<<u<<endl;
			cout<<"Standar Deviasi = "<<stdev;
	
	getch();
}
