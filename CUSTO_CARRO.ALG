Algoritmo "custo_carro"

Var

    custoFabrica, porcDistribuidor, porcImposto, custoFinal : real

Inicio

    escreva("Digite o custo de F�brica: ")
    leia(custoFabrica)
    
    porcDistribuidor <- 28 / 100
    porcImposto <- 45 / 100
    
    custoFinal <- custoFabrica + (custoFabrica * porcDistribuidor) + (custoFabrica * porcImposto)

    escreva("O custo final do carro � de: ", custoFinal:8:2, " reais")
    
Fimalgoritmo