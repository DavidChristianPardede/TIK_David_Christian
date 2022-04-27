 #include <iostream>
 
 using namespace std;
 int main (){
     int number1 =0;
     
        //menambahkan batas bawah
        //menambahkan batas batas
        //namun batas bawah tidak bileh lebih dari batas batas
        int batasbawah, batasatas;
        cout<<"Masukan Batas bawah = ";cin>>batasbawah;
        cout<<"masukan batas atas = ";cin>>batasatas;
        if (batasbawah > batasatas){
            cout<<"error"<<endl;
            cout<<"salah masukin ya:)";
            
        }
        while (batasbawah++ <batasatas){
            cout<<"Data ke - "<<batasbawah<<endl;
        }
     
        return 0;
}
    
