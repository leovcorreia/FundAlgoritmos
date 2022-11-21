Algoritmo "combustivel"

Var

    tempoGasto, velMedia, distancia, consumo : real

Inicio

    escreva("Digite o tempo gasto na viagem: ")
    leia(tempoGasto)
    escreva("Digite a velocidade média da viagem: ")
    leia(velMedia)
    
    distancia <- tempoGasto * velMedia
    consumo <- distancia / 12
    
    escreva("O consumo foi de: ", consumo:4:2, " litros")

Fimalgoritmo