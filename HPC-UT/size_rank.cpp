#include <iostream.h>
#include <mpi.h>

int main(int argc, char **argv)
{
  int npes, myrank;
  MPI_Init(&argc, &argv);

  MPI_Comm_size(MPI_COMM_WORLD, &npes);
  MPI_Comm_rank(MPI_COMM_WORLD, &myrank);

  cout<<"HI There, I am node "<<myrank<<"  and the total worker"
	  <<" which you are using now is: "<<npes<<'\n';

  MPI_Finalize();
  return 0;
}
