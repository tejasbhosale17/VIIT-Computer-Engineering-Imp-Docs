/* Matrix Multiplication using Threading.
   This program creates the theard for each number.  */

#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#define M 2
#define K 2
#define N 2
#define NUM_THREADS 10

//define global variables for matrices
int A [M][K] = { {1,2}, {3,4} };
int B [K][N] = { {5,6}, {7,8} };
int C [M][N];

//structur for row and columns
struct v {
   int i; 
   int j; 
};

struct v *data, *data2; //struct variables
int n, sum1 = 0, sum2 =0; 
void *runner(void *param); //threading function

int main(int argc, char *argv[]) {
        pthread_t tid;      
	void * arg;
   	int i,j,k=0, count = 0;

   	for(i = 0; i < M; i++) {
      		for(j = 0; j < N; j++) {
	 	data = (struct v *) malloc(sizeof(struct v)); //allocate dynamic memory to struct variable data
         	data->i = i;  //i represents Rows and
         	data->j = j;  //j represents Columns of the matrix
         
         	pthread_create(&tid,NULL,runner,data); //create thread and pass struct variable as argument
	 	pthread_join(tid,&arg); // wait for thread completion and collect the result in variable "arg", returned by each thread

	 	k = *((int *)arg); //typecast of arg to int
	 	sum1 =sum1 + k;  //add the result in variable "sum" return by thread
	 	C[data->i][data->j] = k;      //add result in Matric C
 	 	printf("k is %d\n ",k);   //print each value of K
         	count++; 
      		}
   	}

//Print the result - Matrix C
	for(i = 0; i < M; i++) {
      		for(j = 0; j < N; j++) {
         		printf("%d ", C[i][j]);
      			}
      		printf("\n");
   	}
 	printf("sum1 is %d\n ", sum1);   
}

//Threading FUnction
void *runner(void *param) {
  	data2 = param; //typecasting of param variable as it is void *,  whereas data2 is struct *
  	sum2=0;
   	
   	for(n = 0; n< K; n++){
      		sum2 += A[data2->i][n] * B[n][data2->j];
   	}
	printf("sum2 is %d\n ", sum2);   
	pthread_exit(&sum2); //this thread return the value calculated by it to main thread 
}
