#include<iostream>
#include <stdio.h>
using namespace std;

main() {
    int nilai1,nilai2,hasil;
    char aritmatika;
  
    cout << " Masukan nilai 1 : ";
    cin >> nilai1;
    
    cout << " masukan nilai 2 : ";
    cin >> nilai2;
    
    cout << " Masukan bilangan Aritmatika ( - , + , / , * ) : ";
    cin >>aritmatika;
    
  
    switch (aritmatika) {
        case '-':
        	hasil=nilai1-nilai2;
            cout << " hasil dari " << nilai1 <<" - "<< nilai2 <<" adalah : " << hasil << endl;
            break;
        case '+':
        	hasil=nilai1+nilai2;
            cout << " hasil dari " << nilai1 <<" + "<< nilai2 <<" adalah : "<< hasil << endl;
            break;
        case '/':
        	hasil=nilai1/nilai2;
            cout << " hasil dari " << nilai1 <<" / "<< nilai2 <<" adalah : "<< hasil << endl;
            break;
        case '*':
        	hasil=nilai1*nilai2;
            cout << " hasil dari " << nilai1 <<" * "<< nilai2 <<" adalah : "<< hasil << endl;
            break;
        default:
            printf("Kode tidak ada");
    }
}
