#include <iomanip>
using namespace std;

class Aluno
{
private:
    int matricula;
    int idade;
    double notas[3];
public:
    void definirAluno();
    void imprimirAluno();
    double calcularMedia();
    bool foiAprovado();
};
void Aluno::definirAluno()
{
    cout << "Informe a matricula: ";
    cin >> matricula;
    cout << "Informe a idade do lolzero: ";
    cin >> idade;
    cout << "Informe a nota : ";
    for(int i = 0; i < 3; i++)
    {
        cin >> notas[i];
    }

}
void Aluno::imprimirAluno()
{
    cout << "Matricula: " << matricula << endl;
    cout << "Idade: " << matricula << endl;
    cout << "Notas: " << matricula << endl;
    for(int i = 0; i < 3; i++)
    {
        cout << notas[i] << " ";
    }
}
double Aluno::calcularMedia()
{
    int soma = notas[0];
    for(int i = 1; i < 3; i++)
    {
        soma += notas[i];
    }
    return soma/3.0;
}
bool Aluno::foiAprovado()
{

    if(calcularMedia() >= 6.0)
    {
        cout << "\nAprovado!";
             return true;
    }
    else
    {
        cout << "\nReprovado!";
        return false;
    }

}



