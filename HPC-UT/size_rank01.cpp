#include <stdio.h>
#include <mpi.h>

int main(int argc, char **argv)
{
  int npes, myrank;
  MPI_Init(&argc, &argv);

  MPI_Comm_size(MPI_COMM_WORLD, &npes);
  MPI_Comm_rank(MPI_COMM_WORLD, &myrank);

  printf("HI There, I am node %d and the total worker which you are using now is:%d\n", myrank, npes);

  MPI_Finalize();
  return 0;
}
