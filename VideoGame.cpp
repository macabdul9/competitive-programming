//https://www.codechef.com/ZCOPRAC/problems/ZCO14001
#include<bits/stdc++.h>
#define ll long long
#define endl "\n"

using namespace std;

int main(){
    int N, H;
    cin >> N >> H;
    bool isCraneLoaded = false;
    int stack[N], cranePosition, command;
    cranePosition = 0;
    for(unsigned int i = 0; i < N; i++)
            cin >> stack[i];
    // comommad
    // 1. Move left
    // 2. Move right
    // 3. Pick up box
    // 4. Drop Box
    // 0. Quit
    
    //fastscan(command);
    cin >> command;
    cranePosition = 0;
    while(command){
        //move left command will work only on when crane isnt at left most
        if(command == 1 and cranePosition > 0)
            cranePosition -= 1;
        // move right command will work only on when crane isn't at right most
        if(command == 2 and cranePosition < N - 1)
            cranePosition += 1;
        // pick up command will work only on when crane isn't loaded and stack at current position isnt empty
        if(command == 3 and isCraneLoaded == false and stack[cranePosition] != 0 ){
            stack[cranePosition] -= 1;
            isCraneLoaded = true;
        }
        //drop command will work only on when crane is loaded and stack at current load isnt full
        if(command == 4 and isCraneLoaded == true and stack[cranePosition] < H){
            stack[cranePosition] += 1;
            isCraneLoaded = false;
        }

        cin >> command;
    }
    for(unsigned int i = 0; i < N; i++)
            cout << stack[i] << " ";
    cout << endl;
    return 0;
}
