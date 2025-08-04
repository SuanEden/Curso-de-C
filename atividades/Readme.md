# 💻 Atividades Práticas - Introdução à Programação em C

Este repositório contém uma série de atividades práticas e desafios desenvolvidos para auxiliar no aprendizado da linguagem de programação C. Os exercícios abordam conceitos fundamentais como variáveis, entrada e saída de dados, operadores, condicionais, laços, arrays e funções.

---

## ✅ Atividades Básicas

### 📝 1. Personalizando o "Olá, Mundo!"
Modifique o clássico programa "Olá, Mundo!" para exibir uma mensagem personalizada:

📌 **Exemplo de saída esperada:**
```
Olá, João! Estou começando a programar em C!
```

💡 **Dica:** Após cada alteração, compile e execute o programa para observar o resultado.

---

### 🧑‍💻 2. Lendo Nome, Idade e Peso
Crie um programa que solicite o nome (char array), idade (int) e peso (float) do usuário e exiba os dados formatados.

📌 **Exemplo de saída:**
```
Nome: João
Idade: 30 anos
Peso: 75.5 kg 
```

---

### 🛒 3. Calculando o Total da Compra
Desenvolva um programa que leia o preço de um produto e a quantidade comprada, calcule o total e exiba o resultado.

📌 **Desafio Extra:** Solicite também o valor pago e calcule o troco.

---

### 🧮 4. Calculadora de IMC (Índice de Massa Corporal)
Crie um programa que solicite a **altura** (em metros) e o **peso** (em kg) do usuário, e calcule o IMC utilizando a fórmula:

```
IMC = Peso / (Altura * Altura)
```

📌 **Exemplo de saída:**
```
Seu IMC é: 22.50
```

---

### 👶👵 5. Classificação por Idade
Solicite a idade do usuário e informe em qual faixa ele se encontra:

- Criança (0-12 anos)
- Adolescente (13-17 anos)
- Adulto (18-59 anos)
- Idoso (60+ anos)

---

### 🔢 6. Tabuada com Laço `for`
Crie um programa que exiba a tabuada de um número informado pelo usuário, de 1 a 10, usando `for`.

📌 **Desafio Extra:** Crie um menu com `switch-case` permitindo ao usuário escolher o tipo de tabuada:
- Adição
- Subtração
- Multiplicação
- Divisão

---

## 🎯 Desafios Intermediários

### 🎲 7. Jogo de Adivinhação
Desenvolva um jogo simples onde o usuário tenta adivinhar um número "secreto".

📌 **Regras:**
- O número pode ser fixo (ex: `42`).
- O usuário digita palpites até acertar.
- O programa indica se o palpite está muito alto, muito baixo ou correto.

💡 Utilize `while` ou `do-while`, e estruturas `if-else`.

---

### ⚙️ 8. Refatorando a Calculadora de IMC com Funções
Reescreva a Calculadora de IMC utilizando funções:

- `float calcularIMC(float peso, float altura);`
- `float obterPeso();`
- `float obterAltura();`

A função `main()` apenas orquestra a chamada dessas funções.

---

### 📊 9. Média das Notas
Permita que o usuário insira as notas de **5 alunos** (use um array `float[]`). O programa deve calcular:

- A média da turma
- 📌 **Desafio Extra:** A maior e menor nota

---

## 💡 Desafio Avançado

### 🗂️ 10. Sistema Básico de Gerenciamento de Notas
Simule um sistema simples para gerenciar as notas de **3 alunos em 4 provas**.

Utilize uma matriz (`float notas[3][4]`) ou múltiplos arrays e crie funções para:

- `preencherNotas()` – Solicita e armazena as notas
- `calcularMediaAluno()` – Calcula a média individual
- `exibirResultados()` – Mostra notas e médias de cada aluno

📌 **Funcionalidade Extra:**
Permita ao usuário:
- Consultar a média de um aluno específico
- Ver a média geral da turma

🧠 **Este desafio combina:** variáveis, operadores, condicionais, laços, funções e arrays.

---

## 🚀 Como Utilizar

1. Escolha uma atividade.
2. Implemente no seu editor C preferido (VSCode, Code::Blocks, Dev-C++, etc.).
3. Compile usando `gcc` ou outro compilador C.
4. Execute e teste o programa.
5. Experimente personalizar os exercícios e criar variações!

---

## 🛠️ Pré-requisitos

- Conhecimento básico em C
- Compilador C instalado (`gcc`, `clang`, etc.)
- Editor de texto ou IDE

---

## 📂 Organização Recomendada

```
atividades/
├── 01_ola_mundo.c
├── 02_nome_idade_peso.c
├── 03_total_compra.c
├── 04_imc.c
├── 05_classificacao_idade.c
├── 06_tabuada.c
├── 07_jogo_adivinhacao.c
├── 08_imc_funcoes.c
├── 09_media_notas.c
└── 10_sistema_notas.c
```

---

Feito com ❤️ para apoiar sua jornada em programação C!
```