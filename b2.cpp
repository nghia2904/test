#include <iostream> 

using namespace std;

int BinarySearch(int A[], int &n, int &target){
    for ( int i = 0; i < n ; i++){
        for ( int j = i + 1; j < n ; j++){
            if ( A[i] > A[j]){
                int swap = A[i];
                A[i] = A[j];
                A[j] = swap;
            }
        }
    }

    int l = 0, r = n - 1;
    while ( l < r){
        int mid = l + (r - l) / 2;
        if ( A[mid] == target) {
            for ( int i = mid; i < n; i++){
                A[i] = A[i+1];
            } 
            n--;
            return A[mid];
        } 
        else if (A[mid] < target) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main (){
    int A[20], n, target;
    cout << "Nhap vao so phan tu cua mang: ";
    cin >> n;
    if ( n < 0 || n > 100) return -1;
    else
    for ( int i = 0; i < n; i++){
        cout << "A ["<< i << "] = ";
        cin >> A[i];
    }
    cout << "Nhap so muon tim: " ;
    cin >> target;
    
    int result = BinarySearch(A, n, target);
    if ( result == -1) cout <<"So khong ton tai trong day !!" << endl;
    else 
    cout << " Day so moi la:" << endl;
    for ( int i = 0; i < n; i++){
        cout << "A [" << i << "] = " << A[i] << endl;
    }
    
    return 0;
}