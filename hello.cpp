#include<iostream>
#include<fstream>
#include<string>

using namespace std;
class data{
    private://cre: HUYNHGIABAO
    char tenVanBan[50];
    string vanBan;
    int a;
    public:
    void hienThi(){
        cout << "+#############################+" << endl;
        cout << "+#1: Nhap du lieu vao file << +" << endl;
        cout << "+#2: Lay du lieu khoi file >> +" << endl; // The program is faulty
        cout << "+#############################+" << endl;
    }
    void chon(){
        
        cout << "Moi ban chon 1 or 2 >> ";
        cin >> a;

    }
    void dieuKien(){   
        switch (a)
        {
        case 1:
        nhap();
            break;
        case 2:
        xuat();
        default:
            break;
        }
    }
    void nhap(){
        ofstream file;
        cout <<" Cre: HuynhGiaBao" << endl;
        cout <<" Nhap ten file: ";
        cin >> tenVanBan;
         cin.ignore();
        file.open(tenVanBan);
       
        cout << "Nhap van ban: ";
        getline(cin,vanBan);
        file << vanBan << endl;
        file.close();


    }
    void xuat(){
        ifstream infile;
        cout << "Cre: HuynhGiaBao" << endl;
        cout << "Nhap ten file: ";
        cin >> tenVanBan;
        
        infile.open(tenVanBan);
        infile >> vanBan;
        cout << "Noi dung van ban : " << vanBan;
        infile.close();



    }

};
int main(){
    data b;
    b.hienThi();
    b.chon();
    b.dieuKien();


}
/*
H|U
E|N
L|I
L|T
O|Y    
*/
//|||||||||||||||||||||||||||||||||||||| AUTO TOOL ||||||||||||||||||||||||||||||| 
//>>>>>>>>>>>>>>> HUỲNH GIA BẢO <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<