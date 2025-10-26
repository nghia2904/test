#include <iostream>
#include <string>

using namespace std;

// Cau truc cua node
struct Student{
    char MSSV;
    char hoTen[33];
    string dOb = __DATE__;
    float gpa;
    Student* next;
};

// Cau truc cua cay
struct List{
    Student* first;
    Student* last; 
};

// Ham tao danh sach
Student* createStudent(){
    Student* x = new Student [1];
    cout << "Nhap ma so sinh vien: ";
    cin >> x->MSSV;
    cout << "Nhap vao ten sinh vien:";
    cin >> x->hoTen;
    cin.ignore(1);
    cin.getline(x->hoTen,33);
    cout <<"Nhap vao thong tin ngay sinh:";
    cin >> x->dOb;
    cout << "Nhap vao diem trung binh cua sinh vien:";
    cin >> x->gpa;
    x->next = NULL;
    return x;
}

int main(){
    Student x;
    createStudent();
return 0;
}
