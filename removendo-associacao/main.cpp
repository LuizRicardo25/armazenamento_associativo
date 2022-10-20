/******************************************************************************

Neste exemplo criamos um mapa associativo e em seguida efetuamos a remoção da associação. 

*******************************************************************************/
#include <iostream>
#include <map>
using namespace std;

int main()
{
    map <int, string> mapa;
    mapa[1] = "KLS";
    cout << mapa[1] << endl;
    mapa.erase(1); /* Chamamos o mapa criado, seguido da função erase (apagar) */
    cout << mapa[1] << endl; /* Imprimimos novamente para verificar se foi removida a associação */
    return 0;
}