# Aprendizado de C

Bem-vindo ao repositório dedicado ao aprendizado da linguagem de programação C.

## Arquivos em C

Em C, todo arquivo que termina com a extensão `.c` pode ser compilado utilizando um compilador C para transformá-lo em um executável. Um exemplo utilizando o GCC é fornecido abaixo:

```bash
gcc myprogram.c -o myprogram.exe
```

## Variáveis em C

Declaração de variáveis em C segue o formato:

```c
int nome_da_variavel = valor_da_variavel;
```

Onde o primeiro elemento é o tipo da variável (por exemplo, `int`), seguido pelo nome da variável e, por último, a atribuição do valor. Exemplos adicionais de declaração de variáveis incluem:

```c
char nome_da_variavel = valor_da_variavel;
double nome_da_variavel = valor_da_variavel;
```

## Constantes em C

As constantes em C são declaradas usando `#define`, conforme o exemplo abaixo:

```c
#define NOME_DA_VARIAVEL valor_da_variavel;
```

Observe que, por convenção, o nome da variável está em maiúsculo.

## Bibliotecas em C

Para adicionar uma biblioteca em C, utilize `#include`, seguido do nome da biblioteca entre os sinais de menor e maior. Por exemplo:

```c
#include <stdio.h>
```

Sinta-se à vontade para explorar e adaptar conforme necessário para o seu aprendizado em C.