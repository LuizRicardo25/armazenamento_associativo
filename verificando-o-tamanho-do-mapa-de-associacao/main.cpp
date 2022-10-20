/******************************************************************************

Neste exemplo vamos verificar o tamanho do mapa de associação.

*******************************************************************************/
#include <iostream>
#include <map>
using namespace std;

int main (){
int chave;
map <int, string> mapa;
mapa[1] = "KLS";
mapa[2] = "KROTON";
mapa[3] = "ESTRUTURA DE DADOS";
cout << "Tamanho da estrutura de Mapa: " << mapa.size() << endl; /* Função size retorna o tamanho do mapeamento */
return 0;
}