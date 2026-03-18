# 🧑‍🦯 Bengala Inteligente com Sensor Ultrassônico (Arduino)

## 📝 Descrição do Projeto
Este projeto foi desenvolvido com o objetivo de auxiliar a mobilidade de pessoas com deficiência visual. Utilizando um sensor ultrassônico e um sistema de feedback tátil, a bengala identifica obstáculos no trajeto e alerta o usuário através de vibrações, permitindo uma navegação mais segura e independente.

O projeto demonstra a aplicação prática de conceitos de **Sistemas Embarcados**, **Eletrônica** e **Lógica de Programação**, integrando hardware e software para resolver um problema real.

---

## 📺 Demonstração em Vídeo
Confira a apresentação do protótipo e o teste de funcionamento no laboratório:

[![Assista ao vídeo](https://img.youtube.com/vi/Afd15EyyC1E/0.jpg)](https://youtu.be/Afd15EyyC1E)
*Clique na imagem acima para ver a demonstração no YouTube.*

---

## 🛠️ Funcionalidades Técnicas
O sistema foi projetado para ser adaptável às necessidades do usuário, contando com dois modos de operação:

* **Modo 1 (Curta Distância):** Aciona o alerta para obstáculos em um raio de até **150 cm**.
* **Modo 2 (Longa Distância):** Aciona o alerta para obstáculos em um raio de até **250 cm**.
* **Feedback Tátil:** Utiliza um motor vibratório (vibracall) para alertar o usuário sem a necessidade de sinais sonoros que possam poluir a audição do deficiente visual.

---

## 🔧 Componentes Utilizados
* **Microcontrolador:** Arduino (Uno/Nano)
* **Sensor:** Ultrassônico HC-SR04 (Medição de distância)
* **Atuador:** LED indicador (no protótipo) e Motor Vibratório
* **Entradas:** 2 Botões de pressão para seleção de modo

---

## 💻 Estrutura do Código
O código foi desenvolvido em C++ (plataforma Arduino) com foco em legibilidade e eficiência:
* **Função `readUltrasonicDistance`:** Responsável pelo disparo e leitura do pulso ultrassônico.
* **Lógica de Seleção:** O sistema verifica qual botão está pressionado para definir o limite de segurança antes de acionar o indicador.

---

## 👨‍💻 Autor
**Vinícius Vazquez**
Estudante de Engenharia da Computação – CEFET-MG (Campus Divinópolis).
Técnico em Eletroeletrônica pelo SENAI.

---

