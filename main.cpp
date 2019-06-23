#include "student_list.h"

int main()
{
   student_list my_list;
   FILE *fp;
   int n1,n2;
   printf("Input n1,n2:\n");
   if(scanf("%d%d",&n1,&n2)!=2)
   {
        printf("Cannot read\n");
        return -1;
   }
   fp=fopen("students.txt","r");
   if(!fp)
    return -2;
   my_list.read(fp,n1,n2);
   my_list.print();
   //my_list.~student_list();
   my_list.menu();
   return 0;
}
