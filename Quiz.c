#include<stdio.h>

#include<string.h>

#include<stdlib.h>

#include<conio.h>

#include<windows.h>

int main (){

char resp,nick[50];

int c,cont=0,CERTO=0,ERROU=0,conta=0;


printf("\t\t\t\t\t\tEsse Quiz foi feito pelo Aluno: Davi Fernandes Guimar%ces\n", 198);Sleep(2000);
system("cls");

while(cont<100){
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\xDFO\xDF\xDF\xDF\xDFO\xDF");

Sleep(1000);
system("cls");
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\t\xDFO\xDF\xDF\xDF\xDFO\xDF");Sleep(1000);

system("cls");
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\t\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\t\t\xDFO\xDF\xDF\xDF\xDFO\xDF");Sleep(1000);

system("cls");
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\t\t\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\t\t\t\xDFO\xDF\xDF\xDF\xDFO\xDF");
Sleep(1000);

system("cls");
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\t\t\t\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\t\t\t\t\xDFO\xDF\xDF\xDF\xDFO\xDF");
Sleep(1000);
system("cls");


}
cont=0;

printf("\t\t\t\t\t\t\t\t==========================\n");system("color A");

printf("\t\t\t\t\t\t\t\t|  Informe seu nickname  |\n");system("color A");

printf("\t\t\t\t\t\t\t\t==========================\n");system("color A");

system("color 7");



gets(nick);

system("cls");

printf("Nickname: %s", nick);
Sleep(1000);



system("cls");

printf("Mat%cria: Hist%cria\n",130,162);Sleep(2000);

printf("Assunto: Brasil Imp%crio I\n",130);Sleep(2000);
system("cls");
printf("\t\t\tRegras\n",130);Sleep(2000);

printf("Cada Pergunta tem 30 segundos para ser respondida, caso ultrapasse o tempo resposta ser%c dada como errada\n",160);Sleep(3000);
printf("Apenas aperte uma tecla quando for pedido ou nas quest%ces\n",228);Sleep(3000);
printf("As quest%ces est%co classificadas em 03 (tr%cs) f%cceis, 03 (tr%cs) m%cdias e 01 (uma) dif%cceis aleatoriamente",228,198,136,160,136,130,161);Sleep(3000);
system("cls");



printf("\t\t\t\t\t\t\t\t==========================\n");system("color A");

printf("\t\t\t\t\t\t\t\t|    Vamos Para o Quiz   |\n");system("color A");

printf("\t\t\t\t\t\t\t\t==========================\n");system("color A");system("color 7");

Sleep(1000);
system("cls");

while(cont<100){
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\xDFO\xDF\xDF\xDF\xDFO\xDF");

Sleep(1000);
system("cls");
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\t\xDFO\xDF\xDF\xDF\xDFO\xDF");Sleep(1000);

system("cls");
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\t\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\t\t\xDFO\xDF\xDF\xDF\xDFO\xDF");Sleep(1000);

system("cls");
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\t\t\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\t\t\t\xDFO\xDF\xDF\xDF\xDFO\xDF");
Sleep(1000);

system("cls");
printf("\nLoading...\n");
cont+=10;
printf("%d%%", cont);
printf("\n\t\t\t\t\t\xDC\xDC\xDB\xDB\xDB\xDB\xDC\xDC");
printf("\n\t\t\t\t\t\xDFO\xDF\xDF\xDF\xDFO\xDF");
Sleep(1000);
system("cls");


}

system("color 7");

for(c=30;c>=0;c--){

Sleep(1000);

system("cls");
printf("\t\t\t\tQuest%co 1\n",198);
printf("00:%d", c);

printf("\nCERTO: %d \t\t\t ERROU: %d", CERTO,ERROU);



printf("\nQual motivo levou a corte portuguesa a mudar-se para o Brasil?");

printf("\n (a) O inverno portugu%cs", 136);

printf("\n (b) A invas%co de Napole%co a Portugal por descumprimento do Bloqueio Continental",198,198);

printf("\n (c) A decis%co de transformar o Brasil em uma metr%cpole", 198,162);

printf("\n (d) Penalizar os integrantes da Inconfid%cncia Mineira", 136);



printf("\nDigite uma letra para a sua resposta:\n");

if(c==0){

ERROU++;

printf("Tempo Esgotado\n");
Sleep(1000);
system("color C");

c=0;

Sleep(1000);



}

fflush(stdin);

if(kbhit()){

resp=getch();



 if(toupper(resp)== 'B'){

  printf("\n\nACERTOU\n\n");
Sleep(1000);
  system ("color A");

CERTO++;

c=0;

 Sleep(1000);

}

 else{

  printf("\n\nERROU\n\n");
  printf("Resposta Certa B");
Sleep(1000);
  system("color C");

  ERROU++;

 c=0;

 Sleep(1000);

}

}

}

 system("cls");



system("color 7");

for(c=30;c>=0;c--){

Sleep(1000);

system("cls");
printf("\t\t\t\tQuest%co 2\n",198);
printf("00:%d", c);

printf("\nCERTO: %d \t\t\t ERROU: %d", CERTO,ERROU);

//system("color 7");

printf("\nSobre a Revolu%c%co do Porto, marque a alternativa correta:",135,198);

printf("\n (a) Foi um movimento revolucion%crio que defendia a Independ%cncia do Brasil", 160,136);

printf("\n (b) Foi um movimento revolucion%crio que p%cs fim aos movimentos liberalistas",160,147);

printf("\n (c) Foi um movimento revolucion%crio que p%cs fim ao per%codo em que a fam%clia real esteve no Brasil",160,147,161,161);

printf("\n (d) Nenhuma das quest%ces acima est%co correta",228,198 );



printf("\nDigite uma letra para a sua resposta:\n");

if(c==0){

ERROU++;

printf("Tempo Esgotado\n");
//Sleep(1000);
system("color C");

c=0;

Sleep(1000);



}

fflush(stdin);

if(kbhit()){

resp=getch();



 if(toupper(resp)== 'C'){

  printf("\n\nACERTOU\n\n");
//Sleep(1000);
  system("color A");

  CERTO++;

  c=0;

Sleep(1000);



 }else{

  printf("\n\nERROU\n\n");
printf("Resposta Certa C");
  system("color C");
//Sleep(1000);
  ERROU++;

  c=0;

Sleep(1000);

 }

}

}



 system("cls");

 system("color 7");

 

for(c=30;c>=0;c--){

Sleep(1000);

system("cls");
printf("\t\t\t\tQuest%co 3\n",198);
printf("00:%d", c);

 printf("\nCERTO: %d \t\t\t ERROU: %d", CERTO,ERROU);



printf("\nQual a principal causa da Revolu%c%co Pernambucana de 1817?",135,198);

printf("\n (a) Recess%co pol%ctica",198,161);

printf("\n (b) Controle do com%crcio nas m%cos dos colonos",130,198);

printf("\n (c) Seca e crise no Nordeste");

printf("\n (d) Fraca recess%co econ%cmica",198,147);

printf("\nDigite uma letra para a sua resposta:\n");

if(c==0){

ERROU++;

printf("Tempo Esgotado\n");
//S//leep(1000);
system("color C");

c=0;

Sleep(1000);

 }

fflush(stdin);

if(kbhit()){

resp=getch();





 if(toupper(resp)== 'C'){

  printf("\n\nACERTOU\n\n");
//Sleep(1000);
  system("color A");

  CERTO++;

 c=0;

 Sleep(1000);

 }else{

  printf("\n\nERROU\n\n");
printf("Resposta Certa C");
  system("color C");
//Sleep(1000);
  ERROU++;

 c=0;

Sleep(1000);

 }

}

}

 system("cls");

 system("color 7");

 

 for(c=30;c>=0;c--){

Sleep(1000);

system("cls");
printf("\t\t\t\tQuest%co 4\n",198);
printf("00:%d", c);

 printf("\nCERTO: %d \t\t\t ERROU: %d", CERTO,ERROU);



printf("\nSobre os poderes pol%cticos estabelecidos na Constitui%c%co de 1824, marque aquele que n%co %c um dos poderes politicos da primeira Constitui%c%co?",161,135,198,198,130,135,198);

printf("\n (a) Executivo");

printf("\n (b) Legislativo");

printf("\n (c) Judici%crio",160);

printf("\n (d) Imperial");



printf("\nDigite uma letra para a sua resposta:\n");

if(c==0){

ERROU++;

printf("Tempo Esgotado\n");
//Sleep(1000);
system("color C");

c=0;

Sleep(1000);

}

fflush(stdin);

if(kbhit()){

resp=getch();





 if(toupper(resp)== 'D'){

  printf("\n\nACERTOU\n\n");
//Sleep(1000);
  system("color A");

CERTO++;

c=0;

Sleep(1000);

 }else{

  printf("\n\nERROU\n\n");
printf("Resposta Certa D");
system("color C");
//Sleep(1000);
ERROU++;

c=0;

Sleep(1000);

}

}

}

 system("cls");

 system("color 7");

 

 for(c=30;c>=0;c--){

Sleep(1000);

system("cls");
printf("\t\t\t\tQuest%co 5\n",198);
printf("00:%d", c);

 printf("\nCERTO: %d \t\t\t ERROU: %d", CERTO,ERROU);



printf("\nQual(is) eram os representantes do Poder Legislativo? (Constitui%c%co de 1824)?",135,198);

printf("\n (a) Presidentes de provincias");

printf("\n (b) Supremo Tribunal da Justi%ca",135);

printf("\n (c) D. Pedro I");

printf("\n (d) Senado e C%cmara dos Deputados",131);



printf("\nDigite uma letra para a sua resposta:\n");

if(c==0){

ERROU++;

printf("Tempo Esgotado\n");
//Sleep(1000);
system("color C");

c=0;

Sleep(1000);



}

fflush(stdin);

if(kbhit()){

resp=getch();





 if(toupper(resp)== 'D'){

  printf("\n\nACERTOU\n\n");
//Sleep(1000);
system("color A");

CERTO++;

c=0;

Sleep(1000);



 }else{

  printf("\n\nERROU\n\n");
printf("Resposta Certa D");
//Sleep(1000);
  ERROU++;

  system("color C");

c=0;

Sleep(1000);

 }

}

}

 system("cls");

 system("color 7");

 for(c=30;c>=0;c--){

Sleep(1000);

system("cls");
printf("\t\t\t\tQuest%co 6\n",198);
printf("00:%d", c);

 printf("\nCERTO: %d \t\t\t ERROU: %d", CERTO,ERROU);



printf("\nQual o principal resultado da Guerra da Cisplatina?");

printf("\n (a) Independ%cncia do Uruguai", 136);

printf("\n (b) O neoliberalismo econ%cmico", 147);

printf("\n (c) A cria%c%co da provincia de Cisplatina",135,198);

printf("\n (d) Abdica%c%co de D. Pedro I ", 135,198);



printf("\nDigite uma letra para a sua resposta:\n");

if(c==0){

ERROU++;

printf("Tempo Esgotado\n");
//Sleep(1000);
system("color C");

c=0;

Sleep(1000);



}

fflush(stdin);

if(kbhit()){

resp=getch();





 if(toupper(resp)== 'A'){

  printf("\n\nACERTOU\n\n");
//Sleep(1000);
  CERTO++;

 system("color A");

 c=0;

Sleep(1000);

}else{

  printf("\n\nERROU\n\n");
printf("Resposta Certa A");
  ERROU++;
//Sleep(1000);
  system("color C");

c=0;

Sleep(1000);

 }

}

}

 system("cls");

 system("color 7");

 

 for(c=30;c>=0;c--){

Sleep(1000);

system("cls");
printf("\t\t\t\tQuest%co 7\n",198);
printf("00:%d", c);

 printf("\nCERTO: %d \t\t\t ERROU: %d", CERTO,ERROU);



printf("\nQual foi o auge da rejei%c%co do governo de D. Pedro I?",135,198);

printf("\n (a) O assassinato de L%cbero Badaj%c",161,149);

printf("\n (b) O assassinato de Trist%co de Alencar",198);

printf("\n (c) A cria%c%co do Poder Moderador, que transformou a pol%ctica do Brasil em uma Monarquia Absolutista",135,198,161);

printf("\n (d) O assassinato de L%cbero Badar%c", 161,162);



printf("\nDigite uma letra para a sua resposta:\n");

if(c==0){

ERROU++;

printf("Tempo Esgotado\n");
//Sleep(1000);
system("color C");

c=0;

Sleep(1000);



}

fflush(stdin);

if(kbhit()){

resp=getch();





 if(toupper(resp)== 'D'){

  printf("\n\nACERTOU\n\n");
//Sleep(1000);
  CERTO++;

  system("color A");

c=0;
Sleep(1000);


 }else{

  printf("\n\nERROU\n\n");
printf("Resposta Certa D");
  ERROU++;
//Sleep(1000);
  system("color C");

  c=0;
Sleep(1000);
 }

}

}

 system("cls");

 system("color 7");

 
 
 for(c=30;c>=0;c--){

Sleep(1000);

system("cls");
printf("\t\t\t\tQuest%co 8\n",198);
printf("00:%d", c);

 printf("\nCERTO: %d \t\t\t ERROU: %d", CERTO,ERROU);



printf("\nQual o periodo em que grupos pol%cticos assumiram o poder do Brasil de forma tempor%cria?",161,160);

printf("\n (a) Periodo Colonial");

printf("\n (b) Periodo Regencial");

printf("\n (c) Periodo Regencial Trino");

printf("\n (d) Periodo Regencial Uno");



printf("\nDigite uma letra para a sua resposta:\n");

if(c==0){

ERROU++;

printf("Tempo Esgotado\n");
//Sleep(1000);
system("color C");

c=0;

Sleep(1000);



}

fflush(stdin);

if(kbhit()){

resp=getch();





 if(toupper(resp)== 'B'){

  printf("\n\nACERTOU\n\n");
//Sleep(1000);
system("color A");

Sleep(1000);

CERTO++;

c=0;

 

 }else{

  printf("\n\nERROU\n\n");
printf("Resposta Certa B");
//Sleep(1000);
  system("color C");

  ERROU++;

Sleep(1000);

c=0;

}

}

}

 system("cls");

 system("color 7");

printf("Nickname: %s\n\n", nick);
printf("Gaarito\n");
printf("1-Quest%co: B\n",198);
printf("2-Quest%co: C\n",198);
printf("3-Quest%co: C\n",198);
printf("4-Quest%co: D\n",198);
printf("5-Quest%co: D\n",198);
printf("6-Quest%co: A\n",198);
printf("7-Quest%co: D\n",198);
printf("8-Quest%co: B\n",198);

printf("\nCERTO: %d \t\t\t ERROU: %d", CERTO,ERROU);

return 0;
}

