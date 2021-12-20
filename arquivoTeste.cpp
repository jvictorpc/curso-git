#include <iostream>
#include <stdlib.h>

using namespace std;

float calculaMedia(float n1, float n2, float n3){
    return (n1 + n2 + n3)/3;
}

int main (){
    float n1, n2, n3;
    cout << "informe as notas 1, 2 e 3: ";
    cin >> n1 >> n2 >> n3;

    cout << "a média é : " << calculaMedia(n1,n2, n3) << endl;
    
    system("pause");
    system("cls")
    return 0;
}