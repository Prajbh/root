#include<stdio.h>
#include<math.h>
#include<string.h>

int FindRoot(int M, int N) {
if (N == 0 || N == 1 || N > MAXN) {return -1;}
if (M == 0 || M > MAXM) {return -1;}
float answer = pow(M,1./N);
int isInt = (int)answer;
if(answer == isInt) {
return isInt;
}
else {
return -1;
}


int main(int argc, char *argv[]) {
       char * line = NULL;
       int M,N,i;
       int len = 0;
       int tests = 0;
       char buff[3];
       int buffer;
               scanf ("%d", &tests);
               for(i=0; i< tests; i++) {
                       scanf ("%d", &N);
                       scanf ("%d", &M);
                       printf("%d\n",FindRoot(M, N));
               }
  return 1;
}
