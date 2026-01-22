# Semana 2 - Array

## Compilador

### Compilar envolve quatro processos principais:

1. Pré processamento: onde o cabeçalho do código, definidos por # são copiados dentro do seu arquivo. Basicamento abrindo todo esse conteúdo, copiando seu texto e colando no prórpio código principal.

    #include &lt;stdio.h&gt; ---> int printf(string format, ...)

2. Compilação: onde o código é transformado em código assembly.

    main:
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

3. Assembling: converte o código assembly em código de máquina (binário).
    01111111010001010100110001000110
    00000010000000010000000100000000
    00000000000000000000000000000000
    00000000000000000000000000000000
    00000001000000000011111000000000
    00000001000000000000000000000000
    00000000000000000000000000000000

4. Linking: juntar o código principal e as bibliotecas utilizadas. Combinando tudo e gerando um único grupo de binário a partir programa e das bibliotecas.