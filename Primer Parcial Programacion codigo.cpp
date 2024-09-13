#include <iostream>

using namespace std;



void nianbiciesto()
{
    int nian;
    cout<<"Ingrese un año"<<endl;
    cin>>nian;
    if((nian%4==0 && nian%100!=0) ||(nian%400==0))
    {
        cout<<"El año:"<<nian<<" año Biciesto"<<endl;
    }
    else
    {
        cout<<"No es un año Biciesto"<<endl;
    }


}


void tablademultiplicarinversa()
{
    int numero;
    int limite;

    cout<<"ingrese un numero"<<endl;
    cin>>numero;
    cout<<"Ingrese un limite"<<endl;
    cin>>limite;
    cout<<"Tabla de multipicacion"<<numero<<endl;
    for(int i=limite; i>=0; --i)
    {

        cout << numero << " x " << i << " = " << numero * i << endl;
    }
}


void Fizzbuzz()
{
    int numero;
    int limite;
    cout<<"Ingrese un numero"<<endl;
    cin>>numero;
    cout<<"Ingrese el limite"<<endl;
    cin>>limite;
    if(limite<15)
    {
        cout<<"El limite debe ser mayor a 15"<<endl;
    }
    cout<<"Imprimiendo valores"<<endl;
    if(numero%3==0)
    {
        cout<<"FIZZ"<<numero<<endl;
    }
    else if (numero%5==0)
    {
        cout<<"BUZZ"<<numero<<endl;
    }
    else if (numero&3==0||numero%5==0)
    {
        cout<<"FIZZBUZZ"<<numero<<endl;

    }
}




int main ()
{

    int opcion;

    do
    {
        cout<<"\n---Menu de opciones---"<<endl;
        cout<<"1)Año Bisiesto"<<endl;
        cout<<"2)Tabla de multiplicar inversa"<<endl;
        cout<<"3)FizzBuzz"<<endl;
        cout<<"4)Salir"<<endl;
        cout<<"Ingrese una opcion"<<endl;
        cin>>opcion;

        switch (opcion)
        {
        case 1:
            nianbiciesto();
            break;
        case 2:
            tablademultiplicarinversa();
            break;
        case 3:
            Fizzbuzz();
            break;
        case 4:
            cout<<"---Saliendo--"<<endl;
            break;
        default:
            cout<<"Opcion invalida"<<endl;
            break;











        }




    }
    while(opcion!=4);











    return 0;
}
