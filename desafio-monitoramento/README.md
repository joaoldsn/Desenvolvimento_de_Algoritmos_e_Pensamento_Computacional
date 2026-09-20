# Monitoramento de Temperatura

![C](https://img.shields.io/badge/C-Programação%20em%20C-00599C?style=for-the-badge\&logo=c\&logoColor=white)
![GCC](https://img.shields.io/badge/GCC-Compilador-555555?style=for-the-badge\&logo=gnu\&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-Repositório-181717?style=for-the-badge\&logo=github\&logoColor=white)

## Identificação

* **Aluno:** João Leite
* **Disciplina:** Algoritmos e Pensamento Computacional
* **Professora:** Profa. Karla Sartin
* **Projeto:** Monitoramento de Temperatura

## Objetivo

Desenvolver um programa em linguagem C para monitorar a temperatura de uma máquina, realizando validação de entradas, cálculos estatísticos e verificações de segurança.

O programa calcula a **média, maior e menor temperatura**, conta as leituras acima do limite e encerra automaticamente o monitoramento quando são identificadas **3 temperaturas consecutivas acima do limite**.

## ⚙️ Funcionamento

O programa:

1. Solicita o **limite de temperatura** e valida o valor informado.
2. Recebe diversas temperaturas do sensor.
3. Verifica e trata **entradas inválidas**.
4. Calcula a **temperatura média**.
5. Identifica a **maior e menor temperatura** registrada.
6. Conta quantas temperaturas ficaram **acima do limite**.
7. Controla a quantidade de temperaturas **consecutivas acima do limite**.
8. Encerra automaticamente após **3 temperaturas consecutivas acima do limite**.
9. Exibe um **relatório final** com os resultados do monitoramento.

## Estruturas de Repetição

### `do...while`

Utilizado para solicitar o limite de temperatura até que seja informado um valor válido.

### `while`

Utilizado para realizar o monitoramento das temperaturas enquanto não forem identificadas três temperaturas consecutivas acima do limite.

Também é utilizado para limpar entradas inválidas do teclado.

## Como Executar

### Compilação

```bash
gcc monitoramento.c -o monitoramento
```

### Execução

No Windows:

```bash
monitoramento.exe
```

No Linux:

```bash
./monitoramento
```

## Testes Realizados

### Teste 1 — Entradas inválidas

Foram inseridos valores inválidos durante o programa para verificar o funcionamento das validações.

**Resultado:** o programa rejeita valores inválidos e solicita uma nova entrada.

### Teste 2 — Temperaturas acima do limite, porém não consecutivas

Foram informadas temperaturas acima do limite intercaladas com temperaturas dentro do limite.

**Resultado:** o contador de temperaturas consecutivas é reiniciado quando uma temperatura não ultrapassa o limite, mantendo o monitoramento ativo.

### Teste 3 — Três temperaturas consecutivas acima do limite

Foram informadas três temperaturas consecutivas acima do limite definido.

**Resultado:** o programa identifica a condição de segurança e encerra automaticamente o monitoramento, exibindo o relatório final.

## 📁 Estrutura do Projeto

```text
desafio-monitoramento/
│
├── monitoramento.c
├── README.md
│
└── evidencias/
    ├── teste01.png
    ├── teste02.png
    └── teste03.png
```

## Tecnologias

* **Linguagem:** C
* **Compilador:** GCC
* **Versionamento:** Git/GitHub
* **Estruturas utilizadas:** `while`, `do...while`, `if/else`
