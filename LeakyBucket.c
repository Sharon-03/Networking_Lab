#include<stdio.h>
int main()
{
 int incoming, outgoing, buck_size, n, store = 0;
 printf("Enter bucket size, outgoing rate and no of inputs : ");
 scanf("%d %d %d", &buck_size, &outgoing, &n);
 while (n != 0)
 {
   printf("Enter the incoming packet size : ");
   scanf("%d", &incoming);
   printf("Incoming packet size %d\n", incoming);
  if (incoming <= (buck_size - store)){
   store += incoming;
  printf("Bucket buffer size :  %d out of %d\n", store, buck_size);
 }
 else
 {
  printf("Dropped %d no of packets\n", incoming - (buck_size - store));
  store = buck_size;
  printf("Bucket buffer size :  %d out of %d\n", store, buck_size);
 }
 if(store>=outgoing)
 {
  store=outgoing-store;
 }
 if(store<0)
 {
  store=store*(-1);
 }
  printf("After outgoing ,  There are %d  out of %d packets left in buffer\n", store, buck_size);
  n--;
 }
}
