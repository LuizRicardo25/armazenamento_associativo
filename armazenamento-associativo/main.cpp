/******************************************************************************

Neste exemplo podemos ver como implementar a estrutura do mapa com associação entre um número inteiro
e uma string.

*******************************************************************************/
#include <iostream> /* Utiliza a biblioteca iostream da linguagem C++ */
#include <map> /* Utiliza a biblioteca map da linguagem C++ */
using namespace std; /* Este comando serve para definir um espaço de nome para evitar duplicidade */

int main (){
    
map <int, string > mapa; /* Definimos a estrutura do mapa com associação entre um número inteiro e uma string */
mapa[1] = "KLS"; /* Realizamos a associação entre o número 1 e a palavra “KLS” */
cout << mapa[1] << endl; /* Comando para imprimir na tela com a biblioteca iostream o mapeamento associativo da chave 1*/
return 0;

}
