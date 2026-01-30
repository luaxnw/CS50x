# Semana 0 - Scratch

## Binários

Em 1 byte temos do bit 0 ao bit 7 [0,7], portando são 8 bits. Esse, ao passado para decimal, gera o valor de 255 [0, 255], sendo assim 256 combinações diferentes. Esse valor de 256 sendo o máximo para cada byte:
        00000001 e 00000010 são ambos bytes, porém com ordens com nível lógico 1 distintas. Sendo o primeiro lido em decimal como 1 e o segundo como 2. Ambos são bytes com uma única combinação de bits, mas com o bit em nível lógico 1 em posições diferentes, o que resulta em valores decimais distintos (1 e 2).

Combinações do quê? Exemplo:
- Em ASCII, cada 1 valor dos 256 representa um caractere;
- em RGB cada 1 valor representa uma intensidade de cor.

Portanto pode representar coisas diferentes dependendo do contexto, sendo que cada byte possui 256 formas de representação.

## Comparação 

Comparação rápida com base 10 (decimal)
Cada posição é um potência de 10 dependendo de sua ordem. Como:
345 --> 3.10² + 4.10¹ + 5.10⁰

### O mesmo ocorre com binários

Sendo na base 2, cada posição é uma potência de 2 e depende de sua ordem:
1001 --> 1.2³ + 0.2² + 0.2¹ + 1.2⁰ = 9 (em decimal)
