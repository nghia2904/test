#include <iostream>

using namespace std;

int TimSoLe(int A[], int B[], int &n){
    int add = 0;
    for ( int i = 0; i < n; i++ ){
        if ( A[i] % 2 != 0){
            B[add] = A[i];
            add++;
        } 
    }
    return add;
}
 int main(){
    int A[20], B[20];
    int n;

    cout << " Nhap vao so phan tu cua mang: ";
    cin >> n;
    if ( n < 0 || n > 100 ) return -1;
    else
        for ( int i = 0; i < n; i++){
        cout << " A [" << i << "] " << " = ";
        cin >> A[i];
    }
    
    int result = TimSoLe(A, B, n);

    cout << "Cac phan tu le la: "<< endl;
    for ( int i = 0; i < result; i++){
        cout << " B [" << i <<"] = "<< B[i] << endl;
    }
    
    return 0;
 }