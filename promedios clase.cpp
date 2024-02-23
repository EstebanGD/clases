#include <iostream>
using namespace std;

int main(){

  int tam;
  float max=0, min=6.0, Pedad=0, Pprom=0, totP=0, totE=0; 
  string maxNme, minNme;

  cout<<"Ingrese la cantidad de estudiantes que desea ingresar: ";
  cin>>tam;

  struct estudiante{
    char nombre[20];
    int edad; 
    float promedio;
  }alumnos[tam];

  for(int i=0; i<tam; i++){
    fflush(stdin);
    
    cout<<endl<<"==================================="<<endl;
    cout<<"Ingrese los datos del alumno "<< i+1 <<endl; 
    cout<<"Ingrese el nombre: ";
    cin.getline(alumnos[i].nombre,20);
    cout<<"Ingrese la edad: ";
    cin>>alumnos[i].edad;
    cout<<"Ingrese el promedio: ";
    cin>>alumnos[i].promedio;

    if(alumnos[i].promedio<min){
      min = alumnos[i].promedio;
      minNme = alumnos[i].nombre;
    }

    if(alumnos[i].promedio>max){
      max = alumnos[i].promedio;
      maxNme = alumnos[i].nombre;
    }

    totP = totP + alumnos[i].promedio;
    totE = totE + alumnos[i].edad;
  }
  
  Pprom = totP/tam; 
  Pedad = totE/tam;

  cout<<endl<<"=============================================================="<<endl;

  cout<<"El mayor promedio de los estudiantes es "<<max<<" del estudiante "<<maxNme<<endl;
  cout<<"El menor promedio de los estudiantes es "<<min<<" del estudiante "<<minNme<<endl;
  
  cout<<"El promedio de promedios es: "<<Pprom<<endl;
  cout<<"El promedio de edades es: "<<Pedad<<endl;

}
