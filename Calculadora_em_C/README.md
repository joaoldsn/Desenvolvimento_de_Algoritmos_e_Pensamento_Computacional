<div align="center">

# 🧮 Calculadora em C

![C](https://img.shields.io/badge/C-000000?style=for-the-badge\&logo=c\&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-000000?style=for-the-badge\&logo=github\&logoColor=white)
![Status](https://img.shields.io/badge/Status-Concluído-000000?style=for-the-badge)

</div>

## Objetivo

Desenvolver uma **calculadora completa em linguagem C**, aplicando de forma integrada conceitos fundamentais de programação, como:

* Variáveis e tipos de dados;
* Entrada e saída de dados;
* Estruturas condicionais;
* Estruturas de repetição;
* Operações matemáticas;
* Biblioteca `math.h`;
* Organização de código;
* Tratamento básico de erros;
* Documentação de projeto no GitHub.

---

## Descrição

A proposta da atividade consiste no desenvolvimento de uma calculadora em C que permita ao usuário escolher diferentes operações matemáticas por meio de um **menu interativo**.

O programa utiliza estruturas como `switch...case`, `if...else` e `do...while` para controlar as opções, realizar os cálculos e permitir que o usuário execute novas operações até escolher encerrar o programa.

A calculadora possui **20 operações matemáticas**, abrangendo cálculos básicos, funções matemáticas, estatísticas e conversões.

---

## Operações implementadas

| Nº | Operação         | Descrição                                               |
| -: | ---------------- | ------------------------------------------------------- |
|  1 | Adição           | Soma dois números                                       |
|  2 | Subtração        | Subtrai dois números                                    |
|  3 | Multiplicação    | Multiplica dois números                                 |
|  4 | Divisão          | Divide dois números, com tratamento de divisão por zero |
|  5 | Potenciação      | Calcula uma base elevada a um expoente                  |
|  6 | Raiz quadrada    | Calcula a raiz quadrada de um número                    |
|  7 | Porcentagem      | Calcula uma porcentagem de determinado valor            |
|  8 | Seno             | Calcula o seno de um ângulo em graus                    |
|  9 | Cosseno          | Calcula o cosseno de um ângulo em graus                 |
| 10 | Tangente         | Calcula a tangente de um ângulo em graus                |
| 11 | Pi               | Exibe o valor de π                                      |
| 12 | Fatorial         | Calcula o fatorial de um número                         |
| 13 | Logaritmo        | Calcula o logaritmo natural de um número                |
| 14 | MMC              | Calcula o mínimo múltiplo comum                         |
| 15 | MDC              | Calcula o máximo divisor comum                          |
| 16 | Moda             | Identifica o valor que mais se repete                   |
| 17 | Média            | Calcula a média aritmética                              |
| 18 | Mediana          | Encontra o valor central entre os números informados    |
| 19 | Graus → Radianos | Converte um valor em graus para radianos                |
| 20 | Radianos → Graus | Converte um valor em radianos para graus                |

---

## 🛠️ Tecnologias e bibliotecas utilizadas

![C](https://img.shields.io/badge/C-000000?style=for-the-badge\&logo=c\&logoColor=white)

O projeto foi desenvolvido utilizando a linguagem **C**.

### Bibliotecas

* `stdio.h` — utilizada para entrada e saída de dados através de `printf()` e `scanf()`;
* `math.h` — utilizada para operações matemáticas como potência, raiz quadrada, seno, cosseno, tangente e logaritmo;
* `stdlib.h` — utilizada para funções auxiliares do programa.

---

## 🧠 Conceitos de programação utilizados

Durante o desenvolvimento da calculadora foram aplicados diversos conceitos estudados na disciplina de **Desenvolvimento de Algoritmos e Pensamento Computacional**.

### Variáveis e tipos de dados

Foram utilizados diferentes tipos de variáveis, como:

* `int` — para valores inteiros e opções do menu;
* `double` — para resultados e valores que podem possuir casas decimais;
* `char` — para controlar a continuidade do programa.

### Entrada e saída de dados

A entrada de informações do usuário é realizada através de:

```c
scanf()
```

Os resultados e mensagens são apresentados utilizando:

```c
printf()
```

### Estrutura condicional

O programa utiliza principalmente:

```c
switch...case
```

Cada `case` corresponde a uma das operações disponíveis no menu.

Também são utilizados:

```c
if...else
```

para realizar verificações e tratamentos de erros.

### Estrutura de repetição

A calculadora utiliza:

```c
do...while
```

para permitir que o usuário realize novos cálculos sem precisar reiniciar o programa.

### Biblioteca matemática

A biblioteca:

```c
#include <math.h>
```

---

## ▶️ Compilação e execução

Para executar o projeto utilizando o compilador **GCC**, primeiro é necessário ter o GCC instalado.

### Compilação

No terminal, dentro da pasta do projeto:

```bash
gcc calculadora.c -o calculadora -lm
```

A opção `-lm` é utilizada para realizar a ligação com a biblioteca matemática `math.h`.

### Execução no Windows

```bash
.\calculadora.exe
```

### Execução no Linux/macOS

```bash
./calculadora
```

---

## 🔄 Funcionamento do programa

O funcionamento da calculadora segue basicamente o seguinte fluxo:

```text
Início
   ↓
Exibe o menu
   ↓
Usuário escolhe uma operação
   ↓
Programa solicita os valores necessários
   ↓
Realiza o cálculo
   ↓
Exibe o resultado
   ↓
Deseja realizar outro cálculo?
   ↓
 Sim ─────────→ Volta para o menu
   ↓
 Não
   ↓
Encerra o programa
```

---

## 🎓 Estudante

**Aluno:** João Leite

---

## 📂 Organização do projeto

A atividade está organizada da seguinte maneira:

```text
Desenvolvimento_de_Algoritmos_e_Pensamento_Computacional/
│
└── Calculadora_em_C/
    ├── calculadora.c
    └── README.md
```

---

**Projeto desenvolvido como atividade prática de lógica de programação utilizando o Flowgorithm.**
