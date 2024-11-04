/*
3) Para realizar um debate sobre ao acesso a dados considerados sigilosos em campanhas políticas, um professor
de ética resolveu agrupar seus alunos em 3 grupos: o grupo “pró”, o grupo “contra” e o grupo “neutro”.
Para saber a qual grupo o aluno pertence, o professor aplicou um questionário cujas respostas podem ser sim (1) ou
não (2).
a) Faça uma função que recebe o número de questões, pergunte as respostas de cada uma das questões de um
aluno e retorne a quantidade de respostas positivas.
Obs: em vez de perguntar ao aluno, nesta simulação, a função deve sortear uma resposta para cada questão,
exibindo o número da questão e a resposta (Concorda, se o número sorteado for 1 ou Não concorda, se o
número sorteado for 2)
b) Faça um programa que inicialmente capture o número de respostas do questionário. A seguir, para cada aluno
da turma, obtenha sua matrícula e respostas (utilizando a função do item a), e exiba o nome de seu grupo de
acordo com o seguinte critério:
 2/3 de respostas sim ➔ grupo “pró”
 2/3 de respostas não ➔ grupo “contra”
 Demais situações ➔ grupo “neutro”
Término da Entrada de Dados: Matrícula de aluno negativa
Ao final, o programa deve exibir qual o grupo teve mais alunos.
*/
#include <stdio.h>

int corrigeQUe()