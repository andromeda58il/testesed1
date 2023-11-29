# include < stdio .h >
int main ( ) {
int N_ant , N_prox , N , N_atual //falta ponto e virgula
N_ant = N_atual =1;
for( i =1 ,i <= N , i ++) // faltou declarar o i { 
N_prox = N_ant + N_atual ;
N_ant = N_atual ;
N_atual = N_prox ; //faltou o } no final do for
printf ("Fim do laco !\n") ;
return
}