/*
 * Author : Nadhifal
 * NPM : 140810180048
 * Deskripsi :
 * Tahun : 2019
 */

#include <iostream>
#include <string.h>
using namespace std;

struct Theater{
    int room;
    char seat[3];
    char movieTitle[30];
};

main(){
    Theater theater;
    theater.room=7;
    strcpy(theater.seat, "J9");
    strcpy(theater.movieTitle, "Adit & Jarwo");

    cout<<theater.room<<endl;
    cout<<theater.seat<<endl;
    cout<<theater.movieTitle<<endl;
}
