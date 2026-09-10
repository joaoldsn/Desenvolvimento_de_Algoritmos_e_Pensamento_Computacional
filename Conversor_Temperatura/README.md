# Conversor de Temperaturas em C

![C](https://img.shields.io/badge/C-Programming%20Language-blue?style=for-the-badge\&logo=c\&logoColor=white)
![Status](https://img.shields.io/badge/Status-Concluído-brightgreen?style=for-the-badge)

## Sobre o projeto

Programa desenvolvido em **linguagem C** com o objetivo de realizar conversões entre as escalas de temperatura **Celsius, Fahrenheit e Kelvin**.

A seleção da operação é realizada obrigatoriamente utilizando a estrutura **`switch...case`**, permitindo que a escolha do usuário determine qual conversão será executada.

O programa também utiliza **funções específicas para cada conversão**, tornando o código mais organizado e facilitando sua manutenção.

---

## Objetivo

Desenvolver um conversor de temperaturas aplicando conceitos fundamentais de programação em C, como:

* Variáveis e tipos de dados;
* Entrada e saída de dados;
* Estrutura `switch...case`;
* Estrutura `do...while`;
* Estrutura `default`;
* Funções;
* Operadores matemáticos;
* Organização de algoritmos.

---

## 🔄 Conversões disponíveis

O programa possui **seis opções de conversão**:

| Opção | Conversão            |
| ----: | -------------------- |
|     1 | Celsius → Fahrenheit |
|     2 | Celsius → Kelvin     |
|     3 | Fahrenheit → Celsius |
|     4 | Fahrenheit → Kelvin  |
|     5 | Kelvin → Celsius     |
|     6 | Kelvin → Fahrenheit  |

---

## 🧮 Fórmulas utilizadas

As conversões são realizadas utilizando as seguintes relações:

### Celsius → Fahrenheit

```text
F = (9/5 × C) + 32
```

### Fahrenheit → Celsius

```text
C = (5/9) × (F - 32)
```

### Celsius → Kelvin

```text
K = C + 273,15
```

### Kelvin → Celsius

```text
C = K - 273,15
```

### Fahrenheit → Kelvin

A expressão é obtida a partir das relações anteriores:

```text
K = (F - 32) × 5/9 + 273,15
```

### Kelvin → Fahrenheit

A expressão também é determinada a partir das relações apresentadas:

```text
F = (K - 273,15) × 9/5 + 32
```

---

## Funcionamento

O programa apresenta um menu para o usuário escolher uma das seis conversões.

Após selecionar uma opção, o programa solicita a temperatura que será convertida e utiliza a estrutura **`switch...case`** para direcionar a execução para a operação correspondente.

Exemplo da estrutura utilizada:

```c
switch (opcao) {
    case 1:
        // Celsius → Fahrenheit
        break;

    case 2:
        // Celsius → Kelvin
        break;

    // Demais conversões...

    default:
        printf("Opção inválida!");
}
```

Após realizar a conversão, o programa apresenta o resultado acompanhado da respectiva unidade de temperatura.

Ao final, o usuário pode escolher se deseja realizar outra conversão.

---

## 🛠️ Tecnologias utilizadas

* **Linguagem:** C
* **Compilador:** GCC
* **IDE/Editor:** Visual Studio Code
* **Controle de versão:** Git e GitHub

![GCC](https://img.shields.io/badge/Compiler-GCC-red?style=flat-square\&logo=gnu)
![VS Code](https://img.shields.io/badge/Editor-VS%20Code-blue?style=flat-square\&logo=visual-studio-code\&logoColor=white)
![Git](https://img.shields.io/badge/Git-Version%20Control-orange?style=flat-square\&logo=git\&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-Repository-black?style=flat-square\&logo=github)

---

## 📂 Estrutura do projeto

```text
conversor-temperaturas/
│
├── conversor.c
└── README.md
```

* `conversor.c` → código-fonte do programa.
* `README.md` → documentação e descrição da atividade.

---

## ▶️ Como executar

### 1. Clone o repositório

```bash
git clone URL_DO_REPOSITORIO
```

### 2. Acesse a pasta

```bash
cd conversor-temperaturas
```

### 3. Compile o programa

Utilizando o GCC:

```bash
gcc conversor.c -o conversor
```

### 4. Execute

No Windows:

```bash
conversor.exe
```

No Linux/macOS:

```bash
./conversor
```

---

## Aluno

**João Leite**

Projeto acadêmico desenvolvido para prática de **programação em linguagem C**.
