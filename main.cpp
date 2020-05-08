//  Prejeto Exemplo - Herança
//
//  Created by Vinicius Cassol on 08/05/20.
//  Copyright © 2020 Vinicius Cassol. All rights reserved.

#include "Carro.hpp"
#include "Lancha.hpp"
#include "aviao.hpp"

int main() {
   
    //Criar um objeto da classe Carro
    
    Carro meuCarro;
    Lancha minhLancha;
    Aviao meuAviao;
    
    //Definir os atributos
    meuCarro.setModelo("BMW"); //atributo da classe derivada
    meuCarro.setCor("Preta"); //atributo da classe base
    
    meuAviao.setPrefixo("PT_045");
    meuAviao.setCor("Azul");
    
    minhLancha.setNumMotores(2);
    minhLancha.setCor("Branca");
    
    cout << "O meu Carro eh " << meuCarro.getModelo() << " da cor " << meuCarro.getCor() << endl;
    cout << "O meu aviao tem prefixo " << meuAviao.getPrefixo() << " e eh " << meuAviao.getCor() << endl;
    cout << "Minha Lancha tem " << minhLancha.getNumMotores() << " motores e eh " << minhLancha.getCor() << endl;
    
    return 0;
}
