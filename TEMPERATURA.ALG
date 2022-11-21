Algoritmo "temperatura"

Var

   fahrenheit, celsius : real

Inicio

   escreva("Digite a temperatura em Fahrenheit: ")
   leia(fahrenheit)
   
   celsius <- (fahrenheit - 32) * 5 / 9
   
   escreval("A temperatura convertida para Celsius é: ", celsius:4:2)
   // escreval pula uma linha depois de executar o comando
   
   se celsius < 17 entao
      escreva("TEMPERATURA = FRIO")
   senao
      se celsius <= 25 entao
         escreva("TEMPERATURA = AGRADÁVEL")
      senao
         escreva("TEMPERATURA = CALOR")
      fimse
   fimse

Fimalgoritmo