#include<omp.h>
#include<stdio.h>

int main(int *argc, char *argv[])
{
	int numt, tid;
	
	#proram omp parallel
	
	{
	numt = omp_get_num_threads();
	tid = omp_get_thread_num();
	
	printf("Hello World form thread %d of %d.\n", tid, numt);
		
	}
	return 0;
}
