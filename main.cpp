#include <iostream>
#include "aishiteru.h"

using namespace std;

int main()
{
    Aluno alunoa;

    alunoa.definirAluno();
    alunoa.imprimirAluno();
    alunoa.calcularMedia();
    alunoa.foiAprovado();
    return 0;
}
