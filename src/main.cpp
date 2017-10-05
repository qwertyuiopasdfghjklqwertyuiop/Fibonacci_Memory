#include <iostream>

double fib_mem(int n, double results[]);

int main(const int argc, const char ** argv){
   const int USER_NUM = (argc > 1 ? std::stoi( std::string( *(argv+1) ) ) : 0 );

   double results[2] = {0,0};
   std::cout << fib_mem(USER_NUM + 1, results) << std::endl;
   return 0;
}

double fib_mem(int n, double results[])
{
   double retVal;
   if(n <= 1)
      return 1;

   if(results[1] == 0)
   {
      results[1] = fib_mem(n - 1, results);
   }
   
   retVal = results[0] + results[1];
   results[0] = results[1];
   results[1] = retVal;
   return retVal;
}
