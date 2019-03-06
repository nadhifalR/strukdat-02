/*
 * Author : Nadhifal
 * NPM : 140810180048
 * Deskripsi :
 * Tahun : 2019
 */

#include <iostream>
#include <string.h>
using namespace std;

struct Orang {
    int umur;
    char nama[30];
    char jk[1];
    char goldar[2];
};

int main(){
    Orang orang;
    orang.umur = 10;
    strcpy(orang.nama, "fahmi");
    strcpy(orang.jk, "L");
    strcpy(orang.goldar, "O");
    // add your code below

    // add your code up there
    cout<<orang.umur<<endl;
    cout<<orang.nama<<endl;
    cout<<orang.goldar<<endl;
    cout<<orang.jk<<endl;
}
