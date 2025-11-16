#include<iostream>
using namespace std;
main(){
    int jam,menit,detik;
    cout<<"\n\t\t\tUNIVERSITAS PRABUMULIH"<<endl;
    cout<<"\n\tNama  : Fernando Saputra"<<endl;
    cout<<"\tNim   : 2021210069"<<endl;
    cout<<"\tKelas : 3.A ( Tiga A )"<<endl;
    cout<<"\tMakul : Bahasa C"<<endl;
    cout<<"\n\tProgram Konversi Detik ke Jam, Menit dan Detik"<<endl;
    cout<<""<<endl;
    cout<<"\tMasukan Jumlah Detik : ";
    cin>>detik;
    
    jam = detik /(60*60);
    detik = detik-((60*60)*jam);
    menit = detik / 60;
    detik = detik -(60*menit);
    cout<<"\n\tMaka Waktunya Adalah : "<<endl;
    cout<<"\tJam	: "<<jam<<endl;
    cout<<"\tMenit	: "<<menit<<endl;
    cout<<"\tDetik	: "<<detik;
}
