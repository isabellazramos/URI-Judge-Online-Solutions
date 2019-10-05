#include <iostream>
#include <list>

using namespace std;

typedef struct pessoa_inscricao{
  string nome;
  string valid;
  int posChegada;
} pessoa_inscricao;

bool compare(const pessoa_inscricao& first, const pessoa_inscricao& second){
  if (first.nome < second.nome)
    return true;
  else
    return false;
}


int main(){
  list <pessoa_inscricao> participantesSIM;
  list <pessoa_inscricao> participantesNAO;
  list <pessoa_inscricao>::iterator it;
  pessoa_inscricao pessoa_inscricao;

  string nomeGanhador;
  int posGanhador;
  int tamNomeGanhador = 0;

  // Variaveis Temporarias para a busca de Resultados
  int cont;
  int i = 0;

  while(1>0){
    cont = 0;
    cin >> pessoa_inscricao.nome;

    if(pessoa_inscricao.nome == "FIM")
      break;

    cin >> pessoa_inscricao.valid;

    if(pessoa_inscricao.valid == "YES"){
      it = participantesSIM.begin();

      while(it != participantesSIM.end()){
        if(pessoa_inscricao.nome == it->nome){
          cont++;
          pessoa_inscricao.posChegada = it->posChegada;
        }
        it++;
      }

      if(cont == 0){
        pessoa_inscricao.posChegada = i;
        participantesSIM.push_back(pessoa_inscricao);
        i++;
      }


      if((pessoa_inscricao.nome.size() > tamNomeGanhador) && (pessoa_inscricao.nome != nomeGanhador)){
        tamNomeGanhador = pessoa_inscricao.nome.size();
        nomeGanhador = pessoa_inscricao.nome;
        posGanhador = pessoa_inscricao.posChegada;
      }

      else if((pessoa_inscricao.nome.size() == tamNomeGanhador) && (pessoa_inscricao.nome != nomeGanhador)){
        if(pessoa_inscricao.posChegada < posGanhador){
          tamNomeGanhador = pessoa_inscricao.nome.size();
          nomeGanhador = pessoa_inscricao.nome;
          posGanhador = pessoa_inscricao.posChegada;
        }
      }
    }

    else
      participantesNAO.push_back(pessoa_inscricao);
  }

  participantesSIM.sort(compare);
  participantesNAO.sort(compare);

  it = participantesSIM.begin();
  while(it != participantesSIM.end()){
    cout << it->nome << endl;
    it++;
  }

  it = participantesNAO.begin();
  while(it != participantesNAO.end()){
    cout << it->nome << endl;
    it++;
  }

  cout << "\nAmigo do Habay:" << endl;
  cout << nomeGanhador << endl;
  return 0;
}
