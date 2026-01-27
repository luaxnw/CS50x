# Semana 2 - Array

## Compilador

### Compilar envolve quatro processos principais:

1. Pré processamento: onde o cabeçalho do código, definidos por # são copiados dentro do seu arquivo. Basicamento abrindo todo esse conteúdo, copiando seu texto e colando no prórpio código principal.

    `#include &lt;stdio.h&gt; ---> int printf(string format, ...)`

2. Compilação: onde o código é transformado em código assembly.

```    main:
    .cfi_startproc
#/ BB#0:
    pushq    %rbp
.Ltmp0:
    .cfi_def_cfa_offset 16
.Ltmp1:
    .cfi_offset %rbp, -16
    movq    %rsp, %rbp
.Ltmp2:
    .cfi_def_cfa_register %rbp
    subq    $16, %rsp
    xorl    %eax, %eax
    movl    %eax, %edi
    movabsq    $.L.str, %rsi
    movb    $0, %al
    callq    get_string
    movabsq    $.L.str.1, %rdi
    movq    %rax, -8(%rbp)
    movq    -8(%rbp), %rsi
    movb    $0, %al
    callq    printf
```

3. Assembling: converte o código assembly em código de máquina (binário).
    
    ```
    01111111010001010100110001000110
    00000010000000010000000100000000
    00000000000000000000000000000000
    00000000000000000000000000000000
    00000001000000000011111000000000
    00000001000000000000000000000000
    00000000000000000000000000000000

    ```

4. Linking: juntar o código principal e as bibliotecas utilizadas. Combinando tudo e gerando um único grupo de binário a partir programa e das bibliotecas.

# Arrays

- Alocação contígua: O sistema reserva um único bloco na memória dependendo do que foi solicitado. Por exemplo, ao solicitar `int array[5]` o computador reserva memória para 5 inteiros juntos (20 bytes).

- Tamanho fixo: Seu tamanho é definido em momento de compilação, não podendo ser alterada durante execução (não dinâmico).

- Ponteiro para primeiro elemento: Um array é armazenado como um ponteiro para seu primeiro elemento, os demais elementos são armazenados contiguamente a partir do índice inicial. Exemplo:

    `c char[10]`

- c funciona como um ponteiro que aponta para a região de memória onde foi alocado esses 10 char. Quando colocamos um índice o computador faz:

    `*(c + 1), *(c + 2), *(c + 3)...`
    Portanto, avança I posições a partir do ponteiro inicial.

Podemos fazer o mesmo com "strings" (que não existem em C), separando cada char como um elemento de um array, formando uma palavra:

    `char[10] = {"O", "l", "á" ,"," "M" ,"u" ,"n","d","o","!"}`

# Argumentos agrc e argv

São parâmetros inseridos na main que permitem o programa receber argumentos na linha de comando ao ser executado.

O **argc** (argument counter) é um inteiro e possui quantos argumentos serão passados na linha de comando. Sendo no mínimo 1 argumento, pois o nome do programa é contado como primeiro argumento.

O **argv** (argument values) é um ponteiro para uma matriz de strings. Cada string desta matriz é um parâmetro inserido na linha de comando. **argv[0]** sempre aponta para o nome do programa, pois é o primeiro argumento.

