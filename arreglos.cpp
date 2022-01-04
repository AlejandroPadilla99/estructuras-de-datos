#include <bits/stdc++.h>
using namespace std;

int main(){
    //Declaracion 
    int A[5];

    //Asignacion 
    A[0] = 1;
    A[1] = 3;
    A[2] = 6;

    //Declaracion e inicializacion
    int B[5] = {2,4,6,8,10};

    //Acceder a un valor especifico
    cout << A[2] << endl;

    //Acceder a todos los elementos
    for(int i = 0; i < 5; i++){
        cout << B[i] << " ";
    }

    //Acceder a todos los elementos for each 
    for(int i : B){
        cout << i << " ";
    }


    return 0;
}
