
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string usuario = "Coraline"; 
    string senha = "galochas azuis";
    int cogumelos;
    int aves;
    float perfil_pronto = 70.2f;
    double lua = 384.4;
    char c = 'C';
    char a = 'A';
    int seguidores;
    int descobertas;
    int engajamento;
    bool sim = true;
    bool nao = false;
    
    
     cout<<"Seja nem vindo(a) a nome! ";
     cout<<"Em nossa rede social vamos descobrir e compartilhar o mundo com novos botões."<<endl;
     cout<<"Insira seu usuário: ";
     cout<< usuario<<endl;
     cout<<"Insira sua senha: ";
     cout<< senha<<endl;
     cout<<"Seja bem vinda exploradora " + usuario + "!"<<endl;
     
     cout<<"Digite quantos cogumelos você viu hoje: ";
     cin>>cogumelos;
     cout<<"E quantas aves amarelas você viu: ";
     cin>>aves;
     
     cout<<"Que interessante! Compartilhe com seus amigos. ";
     cout<< fixed << setprecision(1) << "Aproveitando que você está aqui, vamos atualizar seu perfil, ele está "<< perfil_pronto <<"%"<<" pronto."<<endl;
     cout<<"Sua casa está a quantos kilômetros da Lua? ";
     cin>> lua;
    cout<<"Faça como seus amigos anônimos "<<a<<" e "<<c<<", analise sua estatísticas de conta"<<endl;
     
     cout<<"Escreva quantos seguidores você tem: ";
     cin>>seguidores;
     cout<<"Agora quantos descobertas você compartilha por dia: ";
     cin>>descobertas;
     
     engajamento = seguidores * descobertas;
     cout<<"Você tem chance de ganhar "<<engajamento<<" seguidores se continuar assim.";
     cout<<"Chegando ao fim, últimas perguntas."<<endl;
     cout<<"Quantos mundos você já foi? "<<sim<<endl;
     cout<<"Que pena, agora uma grande e última pergunta. Quantas vezes você desisitiu de uma pesquisa e exploração? "<< nao<< endl;
     cout<<"Formidável";
    
     
     

    return 0;
}