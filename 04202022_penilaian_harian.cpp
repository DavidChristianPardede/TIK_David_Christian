#include <iostream>
using namespace std;

int main(){
    
    int a,b,c, hasil;
    string keterangan;
    cout<<"masukan nilai Tugas = ";
    cin>> a;
    if (a > 100){
       cout << "ulangi pemograman "; return 0;
    }   

    cout<<"masukan nilai Uts = ";
    cin>> b;
    if (b > 100){
        cout << "ulangi pemograman "; return 0;
        
    }   

    cout<<"masukan nilai uas = ";
    cin>>c;
    if (c > 100){
        cout << "ulangi pemograman "; return 0;
    }
    
    if( a <= 100 || b <= 100 || c <=100){
        hasil = a* 30/100 + b* 30/100 +c* 40/100;
        cout<<hasil<<endl;
    }
     
    
    return 0;
}
