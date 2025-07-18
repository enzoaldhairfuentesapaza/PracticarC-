#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

using namespace std;

struct c_tupla
{
  int primero;
  int segundo;
};

//Separar pares e impares, ascendentemente

bool ordenar(int a, int b)
{
  if(a%2==0 && b%2!=0)
  {
    return true;
  }
  else if( a%2!=0&&b%2==0 )
  {
    return false;
  }
  else
  {
    return a<b;
  }
}

bool funcion_de_ordenamiento(c_tupla a, c_tupla b)
{
  return a.segundo > b.segundo;
}

/*struct c_vector
{
  
};

struct c_list
{
  
};

struct c_deque
{
  
};

*/


int main() 
{
  //vector
  vector <int> v1;
  vector <int> v2({14,2,3,4,5,6,7,8,9,10,11,12,13});
  vector <int> v3(10);
  vector <int> v4(10,0);
  
  vector <c_tupla> v5({{10,11},{11,31},{40,1}});
  
  //list
  list <int> l1({0,1,3,4,5,6,7,8,9,10});
  
  auto it = l1.begin(); // apunta al 1
  
  advance(it, 2); // ahora apunta al 2
  
  l1.insert(it, 2);     // inserta el 3 antes del 4
  
  // deque, solo si buscas eficiencia. Hace lo mismo que el vector, y la lista
  
  //entendible
  for(int i=0; i<v2.size(); i++)
  {
    cout << v2[i] << " ";
  }
  cout << endl;
  
  //rapido
  for(auto &a : v2)
  {
    cout << a << " ";
  }
  cout << endl;
  
  //iteradores
  for(auto a = v2.begin(); a< v2.end(); a++)
  {
    cout << *a << " ";
  }
  cout << endl;
  
  //ordenamiento
  
  //sort(v2.begin(),v2.end()); // ascendente
  //sort(v2.rbegin(),v2.rend()); // descendente
  
  //ordenamiento especial
  
  sort(v2.begin(),v2.end(), ordenar);
  
  for(auto &a : v2)
  {
    cout << a << " ";
  }
  cout << endl;
  
  //ordenamiento especial con estructuras creadas
  
  sort(v5.begin(),v5.end(), funcion_de_ordenamiento);
  
  for(auto &a : v5)
  {
    cout << a.primero << "," << a.segundo << " ";
  }
  cout << endl;
  
  
  return 0;
}