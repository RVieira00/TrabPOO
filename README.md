```
TRABALHO PRÁTICO 1  - POO
```
Programação Orientada por Objetos ||
7/maio/2021 || Trabalho Prático de POO 2020 ||
Engenharia Informática ||
**7 de maio de 2021**
Data Limite de submissão: 28/05/20 21

# CONSULTÓRIO MÉDICO

Um consultório médico precisa urgentemente de uma pequena aplicação que lhe permita gerir o
registo de consultas dos seus já imensos pacientes. A cada consulta, de um paciente que se encontre
registado, deverão poder ser associados vários exames médicos. As consultas e os exames são serviços
prestados pelo consultório ao paciente, caraterizados por um código de identificação, data de realização
e respetivo custo. Adicionalmente, cada consulta deve incluir um pequeno texto com o respetivo
diagnóstico, e cada exame em que tipologia se enquadra: Análises Clínicas, Imagiologia ou de Check-up.
Do registo do paciente deve apenas constar o respetivo nome e número de identificação. Tanto o número
do paciente como o código do serviço devem ser sequenciais.
Para além de assegurar o registo de pacientes e consultas, a aplicação deverá igualmente permitir
adicionar exames médicos às consultas já existentes. Deverá ainda ser capaz de determinar o valor total
faturado pelo consultório e de mostrar todas as consultas de um dado paciente, apresentado todos os
dados relevantes de cada consulta, incluindo a quantidade de exames associados.

**Tarefas a desenvolver**

1. Começar por modelar o problema, desenhando o diagrama de classes UML, e considerando
    unicamente as seguintes classes: Consultorio, Consulta, Paciente, Exame e Servico.
(Para a elaboração do diagrama de classes pode ser usado o Astah, o Visual Paradigm ou qualquer
outra ferramenta de modelação UML que permita gravar o resultado no formato jpg, png ou pdf.) 
2. Implementar em C++ uma solução para o problema enunciado e que seja uma tradução fiel do
    diagrama de classes criado.

**Considerações a ter em conta na implementação**

1. Deverá ser desenvolvida uma aplicação para a consola no _MS Visual Studio,_ versão 2015 ou posterior.
2. Incluir na solução um pequeno _main_ que faça uso de todas as funcionalidades da aplicação.
3. Quer o projeto quer a solução, criados no _Visual Studio,_ deverão designar-se trabPOO, e estarem
    devidamente anonimizados. Se contiverem qualquer elemento que permita identificar os autores
    (inclusive no diagrama de classes), será descontado 1 valor à classificação do trabalho.
4. Cada classe deve ser definida com recurso a dois ficheiros, um com a declaração da classe (*.h) e outro
    com a sua implementação (*.cpp). Ambos os ficheiros devem ter exatamente o mesmo nome da
    classe.
5. Na implementação das coleções, devem usar o template Colecao e/ou ColecaoHibrida (disponíveis em
    ipb.virtual) e estão totalmente proibidos de alterar o que quer que seja desses templates.
6. De forma a simplificar a implementação, devem usar para o tipo de data a classe string.

**Considerações gerais**

1. O trabalho deverá ser realizado por grupos de 2 alunos.
2. Os trabalhos práticos realizados em anos anteriores, por alunos repetentes, não serão considerados
    para a avaliação do presente ano letivo.

3. Apenas serão aceites para avaliação trabalhos cuja implementação não apresente qualquer erro de
    compilação ou de _linkagem_ e com um mínimo de funcionalidades perfeitamente operacionais.
4. É expressamente proibida a cópia integral ou parcial de código de outras fontes que não a
    documentação disponibilizada pelos docentes da unidade curricular.
5. Os alunos poderão ter que vir a defender os seus trabalhos, presencialmente ou por videoconferência,
    em data a marcar pelo docente, com o objetivo de demonstrarem ter capacidade de implementar o
    código, compreendê-lo e explicá-lo.
6. Para dúvidas e esclarecimentos adicionais sobre o trabalho, devem usar o fórum de discussão criado
    na plataforma [http://virtual.ipb.pt/:](http://virtual.ipb.pt/:) POO (20/2.4) > Fóruns > Trabalho Prático.
(Dada a grande quantidade de alunos inscritos, e para que todos beneficiem dos esclarecimentos que
vierem a ser prestados, não serão tiradas dúvidas sobre o trabalho por email.)

**Regras de submissão**

1. O trabalho deverá ser submetido apenas por um dos elementos do grupo de trabalho, no portal de e-
    learning (http://virtual.ipb.pt/, opção Atividades), dentro do prazo estabelecido. Não serão aceites
    trabalhos enviados por email, nem outras formas de submissão.
2. Deverão ser submetidos dois ficheiros:
    - trabPOO.zip – pasta compactada da solução do Visual C++, depois de excluídos, caso existam, os
       ficheiros de extensão “.sdf”, “.VC” e “.VC.db” (e qualquer outro ficheiro de criação automática que
       ocupe muito espaço) e as subpastas de nome “Debug”, “Release”, “ipch”, “x64” e “.vs” (atenção
       que esta última subpasta poderá estar oculta);
       É também dentro desta pasta (trabPOO.zip) que devem colocar o ficheiro com o diagrama de
       classes, que deverá ter o nome diagramaDeClasses (com extensão .jpg, .png ou .pdf).
    - autores.txt – ficheiro de texto contendo unicamente o nome e o número mecanográfico dos dois
       autores do trabalho.
3. O trabalho apenas poderá ser submetido com um atraso máximo de 1 dia, implicando nesse caso a
    subtração de um valor à sua nota.


