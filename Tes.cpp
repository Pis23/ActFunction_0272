#include <iostream>
using namespace std;

float pi = 3.1415, r;

void input(){
    cout << "Masukkan jari-jari = ";
    cin >> r;
}

float luaslingkaran(float r){
    return pi * r * r;
}

void output(){
    cout << "Luas = " << luaslingkaran(r);
}

int main(){
    input();
    output();   
}