#include <iostream>

using namespace std;

int main()
{
    int op,a,b,c,res;
    cout<<"Bienvenido usuario"<<endl;
    cout<<"Ingrese la opcion que desea usar"<<endl;
    string menu = "\n[1] Operacion de Suma\n[2] Operacion de resta\n[3] Multiplicacion\n[4] Division\n[5] Potenciacion\n[6] Factorial\n[7] Calculo de areas\n[8] Calculo de volumen\n[9] Salir\n";
    string salir = "\nHasta la proximaaaa";

    do{
        cout<<menu;
        cin>>op;

        if(op = 1){

            cout<<"Cantidad de numeros a sumar : "; cin>>a;
            for (int i=1;i<=a;i++){
                cin>>b;
                cout<<"\r";
                res=res+b;
            }
            cout<<"El resultado es: "<<res;

        }
        else if (op = 2){;
            cout<<"Resta seleccionada, ingrese los 2 numeros a restar";
            cin>>a; cout<<" - ";

        }
        else if (op = 3){

        }
        else if (op = 4){

        }
        else if (op = 5){

        }
        else if (op = 6){

        }
        else if (op = 7){

        }
        else if (op = 8){

        }
        if (op = 9){
            cout<<salir;
        }
        else{
            cout<<"La opcion "<<op<<" no existe, intente otra vez";
        }

    }while(op=9);

    cout<<"ADIOS";

}
