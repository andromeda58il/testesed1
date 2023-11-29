#include< stdio .h>
int f (int mat [3][3]) {
return ( mat [0][0]* mat [1][1]* mat [2][2]) + ( mat [0][1]* mat [1][2]* mat [2][0]) + ( //faz a multiplicacao de a00,a11,a22, depois soma com o resultado de a01*a12*a20
mat [0][2]* mat [1][0]* mat [2][1]) - ( mat [0][1]* mat [0][1]* mat [2][2]) - ( mat  // e as mesmas operacoes com outros lugares na matriz
[0][0]* mat [1][2]* mat [2][1]) - ( mat [0][2]* mat [1][1]* mat [2][0]) ;
}
int main ( void ) {
int m [3][3]={{0 ,1 ,0} ,{3 ,1 , -1} ,{4 ,0 ,1}}; //insere os valores da matriz
int de = f ( m ) ;
printf (" Resultado = \t %d", de ) ; o resultado da -5
return 0;
}
