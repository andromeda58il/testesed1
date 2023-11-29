# include < stdio .h >
int main ( ) {
int i ;
for ( i =1 ; i <= 100 ; i *=100) {
if ( i ==30 ) {
break ;
}
else {
printf ("%2d\n" ,2* i ) ;
}
}
printf ("Fim do laco !\n") ;
return 0;
}
// faz a contagem de 1 até 100 e a cada numero contado multiplica por 100 ex:
1*100, //porem a partir do 1 o i ja fica maior do que o valor 30 entao o programa quebra e depois so multiplica por 2 que da 100 que é o numero 
//inicial vezes 2=200
