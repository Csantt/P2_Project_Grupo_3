#ifndef FUCTIONS_H_INCLUDED
#define FUCTIONS_H_INCLUDED

    struct conta{
        int agencia;
        int operacao;
        int numConta;
        int senha;
        float saldo;
        float historicoSaque[5];
        float historicoDeposito[5];
    };

    void fSaque(float &saldoSaq,float dinheiroAretirar,float historico[5]){

    if(saldoSaq>=dinheiroAretirar){
    saldoSaq -= dinheiroAretirar;
    historico[contadorDeSaque] = dinheiroAretirar;
    contadorDeSaque++; //variavel GLOBAL!
    }else{
        printf("Saldo Insuficiente!\n");
    }

}



#endif // FUCTIONS_H_INCLUDED
