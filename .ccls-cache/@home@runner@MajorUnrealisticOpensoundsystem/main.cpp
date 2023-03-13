/*
PRACTICA 1 - FUNDAMENTOS 
*/
#include <iostream>
using namespace std;
#include <vector>
#include<math.h>
int main() {
  /*
EJERCICIO 2
---Entrada
La entrada contiene una única línea con el valor de N.
---Salida
N líneas cada una con el mensaje (sin las comillas) “Hola mundo” y “Hello world”
apareciendo de manera alternada.
*/
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    if (i % 2 ==0){
    cout <<"Hola mundo\n";
    }
    else {
    cout <<"Hello world\n";
    }
  }
  /*
EJERCICIO 3
---Entrada
La entrada comienza con una línea que contiene un valor entero positivo N no mayor a mil. Posteriormente siguen N líneas, cada una con un entero dentro del rango [-9999,9999]
---Salida
Una única línea con el siguiente mensaje: “positivos Q, negativos R” (sin las comillas) y siendo Q y R la sumatoria de números positivos y negativos respectivamente. 
*/
  int n;
  int positivos=0;
  int negativos=0;
  vector <int> lista;
  cin >> n;
  for(int i=0;i<n;i++){
    int a;
    cin>>a;
    lista.push_back(a);
  }
  for(int i=0;i<n;i++){
    if (lista[i]<0){
      negativos+=lista[i];
    }
    if(lista[i]>0){
      positivos+=lista[i];
    }
  }
  cout<<"positivos "<<positivos<<", negativos "<<negativos;
  /*
EJERCICIO 4
---Entrada
La entrada contiene una única línea con el valor de N.
---Salida
Una única línea con el mensaje a mostrar.
es multiplo de 2
es multiplo de 3
es multiplo de 5
es multiplo de 7
no es multiplo de ninguno de los primeros cuatro primos
*/
  int n;
  cin>>n;
  if (n % 2 ==0){
    cout <<"es multiplo de 2\n";
    }
  else if(n % 3 ==0){
    cout <<"es multiplo de 3\n";
    }
  else if(n % 5 ==0){
    cout <<"es multiplo de 5\n";
    }
  else if(n % 7 ==0){
    cout <<"es multiplo de 7\n";
    }
  else{
    cout <<"no es multiplo de ninguno de los primeros cuatro primos\n";
  }
  /*
EJERCICIO 5
---Entrada
La entrada comienza con una línea que contiene un valor entero positivo A (2 ≤ A ≤ 20). La siguiente línea contiene un valor entero positivo B (2 ≤ B ≤ 9x1015).
---Salida
La salida debe tener, de a una por línea, las potencias correspondientes. Nótese que, dependiendo de los valores de A y B, puede que no haya potencias que mostrar (por ejemplo si A es 5 y B es 4). 
*/
  int a;
  cin>>a;
  long b;
  cin>>b;
  long c=a;
  cout<<a<<"\n";

  for(int i=1;i<b;i++){
    c*=a;
    if(c<=b){
    cout<<c<<"\n";
      }
    if(c>b){
      break;
    }
  }
  /*
EJERCICIO 6
---Entrada
La entrada contiene una línea con un valor entero positivo N no mayor a 1000.
---Salida
La salida debe tener, de a una por línea, y comenzando por el valor de N los elementos de la sucesión hasta llegar a 1 (creeremos en Collatz y supondremos que siempre será una sucesión finita). 
*/
  int n;
  cin>>n;
  cout<<n<<"\n";
  vector <int> lista;
  while(n != 1){
    if (n % 2 ==0){
      n=n/2;
      lista.push_back(n);
      cout<<n<<"\n";
    }
    else if (n%2 != 0){
      n=3*n+1;
      lista.push_back(n); 
      cout<<n<<"\n";
    }
  }
  return 0;
}