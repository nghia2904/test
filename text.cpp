// #include <iostream>

// using namespace std;

// int Selection  (int A[], int &n){   
//     for ( int i = 0; i < n - 1; i++){
//         for ( int j = i + 1; j < n; j++){
//             if (A[j] < A[i]){
//                 int swap = A[i];
//                 A[i] = A [j];
//                 A[j] = swap;
//             }   
//         }
//     }
// }

// int main(){
//     int A[20];
//     int n;

//     cout << " Nhap vao so phan tu cua mang: ";
//     cin >> n;
//     if ( n < 0 || n > 100 ) return -1;
//     else
//         for ( int i = 0; i < n; i++){
//         cout << " A [" << i << "] " << " = ";
//         cin >> A[i];
//     }
//     Selection  (A, n);

//     cout << "day sau khi sap xep la:" << endl;
//     for ( int i = 0; i < n ; i ++){
//         cout << A[i] << " ";
//     }

// }    
#include <vector>
#include <iostream> 

using namespace std;

struct Thongtin {
    int mssv;
    float gpa;
    string Hoten;
};
void Input( Thongtin &sv){
    cout << "Nhap vao ma so sinh vien: ";
    cin >> sv.mssv;
    cout << "Nhap vao ten sinh vien: ";
    cin.ignore();
    getline(cin, sv.Hoten);
    cout << "Nhap vao diem trung binh: ";
    cin >> sv.gpa;
}
void Output( Thongtin sv){
    cout << "Ma so sinh vien: " << sv.mssv << endl;
    cout << "Ten sinh vien: " << sv.Hoten << endl;
    cout << "Diem trung binh: " << sv.gpa << endl;
}
int main (){
    Thongtin sv;
    
    vector < Thongtin > ds;
    int n;
    cout <<"Nhap vao so luong sinh vien:";
    cin >>n;
    for ( int i = 0; i < n; i ++){
        Input(sv);
    }
    
    for ( int i = 0; i < n; i++){
        ds.push_back(sv);
    }
    for ( int i = 0; i < n; i++){
        Output(sv); 
    }
    return 0;
}
