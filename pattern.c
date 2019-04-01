/*
 * @author    : macab (macab@debian)
 * @file      : pattern
 * @created   : Monday Apr 01, 2019 21:24:12 IST
*/
#include <stdio.h>
#define loop(i,a,b)           for(int i=(int)a;i<(int)b;++i)


void createPattern(int n){
    int d = 2*n - 1;
    int arr[d][d];

    // set initial
    int mr, mc;
    mr = mc = d / 2;
    arr[mr][mc] = 1;

    loop(i, 1, n){

        // fill upper row
        loop(j, mc - i + 1, mc + i + 1){
            arr[mr - i][j] = arr[mr][mc] + i;
        }
        // fill bottom row
        loop(j, mc - i + 1, mc + i + 1){
            arr[mr + i][j] = arr[mr][mc] + i;
        }

        // fill right col
        loop(j, mr - i + 1, mr + i + 1){
            arr[j][mc - i] = arr[mr][mc] + i;
        }
        // fill left col
        loop(j, mr - i + 1, mr + i + 1){
            arr[j][mc + i] = arr[mr][mc] + i;
        }

        // corners !
        // top left
        arr[mr - i][mc - i] = arr[mr][mc] + i;
        // top right
        arr[mr - i][mc + i] = arr[mr][mc] + i;
        // bottom right
        arr[mr + i][mc + i] = arr[mr][mc] + i;
        // bottom left
        arr[mr + i][mc - i] = arr[mr][mc] + i;

    }

    // print pattern !
    loop(i, 0, d){
        loop(j, 0, d){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

}

int main(){
    createPattern(6);
	return 0;
}
