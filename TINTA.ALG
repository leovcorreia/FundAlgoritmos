Algoritmo "tinta"

Var

    larguraMaior, larguraMenor, altura, somaArea, tinta : real
    area1, area2, area3, soma : real

Inicio

    escreva("Digite a largura da parede maior: ")
    leia(larguraMaior)
    escreva("Digite a largura da parede menor: ")
    leia(larguraMenor)
    escreva("Digite a altura da parede: ")
    leia(altura)
    
    area1 <- larguraMenor * altura * 2
    area2 <- larguraMaior * altura * 2
    area3 <- larguraMaior * larguraMenor
    
    soma <- area1 + area2 + area3
    
    escreval("A soma das �reas das paredes e o teto �: ", soma:4:2)
    
    tinta <- soma / 12
    
    escreva("Ser�o necess�rias ", tinta:4:2, " latas de tinta")

Fimalgoritmo