// queue::push/pop
#include "Evaluador.h"
#include <iostream>       // std::cin, std::cout
#include <stack>          // std::queue
#include <list>          // std::list
using namespace std;


//devuelve true si todos los elementos de la pila son pares, de lo contrario devuelve false
bool sonPares(stack<int> mi_pila)
{
    int conta = 0, divisor = 2; // divisor  divide el elemento en partes iguales  para probar que sea par

    while(!mi_pila.empty())// este ciclo es mas que todo niega si mi_pila esta vacia y que lo deje correr
    {
        if(mi_pila.top() % divisor)
        {
            conta++; //si el divicion llega a 1 el contador aumenta
        }
        mi_pila.pop();
    }

    if(conta == mi_pila.size()) // tiene que compara contador con mi_pila para se igual al tamaño de la pila que se busca
    {
        return true; //Esto devuelve verdadero si todos los elementos de la pila son pares y de lo contrario devuelve falso
    }
    else
    {
        return false;
    }
}



bool sonPares(list<int> mi_lista)
{
    int conta = 0, divisor = 2; //divisor  divide el elemento en partes iguales  para probar que sea pares

    while(!mi_lista.empty()) //este ciclo es mas que todo niega si mi_pila esta vacia y que lo deje correr
    {
        if(mi_lista.front() % divisor)
        {
            conta++; //si el divicion llega a 1 el contador aumenta
        }
        mi_lista.pop_front();
    }

    if(conta == mi_lista.size()) // tiene que compara contador con mi_pila para se igual al tamaño de la pila que se busca
    {
        return true;
    }
    else
    {
        return false;
    }
}


//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(stack<string> mi_pila, string str)
{
    while(!mi_pila.empty()) //este ciclo es mas que todo niega si mi_pila esta vacia y que lo deje correr
    {
        if(mi_pila.top() == str) //verifica que el elemento sea igual al parametro buscado
        {
            return true;
        }
        mi_pila.pop();
    }
    return false;
}


//devuelve true si str es un elemento de mi_pila, de lo contrario devuelve false
bool existe(list<string> mi_lista, string str)
{
    while(!mi_lista.empty())
    {
        if(mi_lista.front() == str) //prueba que el elemento sea igual al parametro de busqueda
        {
            return true;
        }
        mi_lista.pop_front();
    }
    return false;
}



//devuelve la suma de los elementos de la cola
int getSuma(stack<int> mi_pila)
{
    int sum = 0;

    while(!mi_pila.empty())
    {
        sum += mi_pila.top(); // esto suma todo los nuevo elemento a la suma
        mi_pila.pop();
    }
    return sum; // y esto retorna todo a la variable suma
}


//devuelve la suma de los elementos de la lista
int getSuma(list<int> mi_lista)
{
    int suma = 0;

    while(!mi_lista.empty())
    {
        suma+= mi_lista.front(); // esto suma todo los nuevo elemento a la suma
        mi_lista.pop_front();
    }

    return suma;
}

//Devuelve true si los elementos de la lista son palindromos, de lo contrario devuelve false
bool esPalindroma(list<char>mi_lista)
{
    while(!mi_lista.empty())
    {
        if(mi_lista.front() == mi_lista.back()) //esto verifica si el primer elemento es igual al ultimo
        {
            return true;
        }
        mi_lista.pop_front(); //verifica  el primer elemento
        mi_lista.pop_back(); //verifica el ultimo elemento
    }
    return false;
}


int main ()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}
