# Semana 1 - C

## Graphical user interface (GUI)

- Interface visual com janelas, ícones e botões.
- Interativa e fácil.

## Command Line Interface (CLI)

- Usa comandos de texto para efetuar comandos.
- Recebe argumentos, interpreta e age.

# Notas sobre C

## Comandos com \

\r - Retorno de Carro: move o cursos para o início da linha atual, permite sobrescrever o texto anterior.
\" e \' e \ \ - Citação: usado quando precisamos utilizar aspas simples, aspas dupla ou barras.

## IF e ELSE IF

*IF*: o computador é obrigado a testar todas as condições mesmo que a primeira já tenha sido verdadeira, utilizando processamento à toa.

    if x > y - Testado
    
    if x < y - Testado (mesmo se x > y for verdade)
    
    IF x == y - Testado (mesmo se x > y for verdade)

*ELSE IF*: as condições estão conectadas, então assim que o computador encontra uma solução verdadeira no bloco, ele pula todas as outras. 

    IF x > y - Testado
        
    ELSE IF x < y - Só testado se x não for > y
        
    ELSE IF x == y - Só testado se as anteriores forem falsas

## Constantes
Valores que não podem ser alterados. Deve haver declaração no início da variável. Declarada como:
    
    const float PI = 3.14


## Documentos
    Manual funções: https://manual.cs50.io/
