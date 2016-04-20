#include "functions1.h"
int sum(int len,int *ary)
{
int i;
int total = 0;
for (i=0;i<len;i++)
{
total = total + ary[i];
}
return total;
}