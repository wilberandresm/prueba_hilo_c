#include <omp.h>
#include<stdio.h>

int main()
{
    #pragma omp parallel
    printf("\n Pruebas de hilo(thread) %d de %d ",omp_get_thread_num(),omp_get_thread_num());


}
