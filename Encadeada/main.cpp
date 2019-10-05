#include <cstdlib>

#include "Produto.h"
#include "Encadeada.h"

using namespace std;

/*
 * 
 */
int main() {
    Encadeada l;
    l.insert();
    l.insert();
    l.insert();
    l.imprimir();
    l.insert(2);
    l.remove(3);
    return 0;
}

