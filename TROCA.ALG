Algoritmo "troca"

Var

   A, B, troca : real

Inicio

    escreva("Digite o valor de A: ")
    leia(A)
    escreva("Digite o valor de B: ")
    leia(B)
    
    troca <- B
    B <- A
    A <- troca
    
    escreval("O novo valor de A �: ", A:4:2)
    escreva("O novo valor de B �: ", B:4:2)

Fimalgoritmo