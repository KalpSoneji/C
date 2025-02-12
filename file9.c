#include<stdio.h>

int main()
{
   FILE *fp;

   char temp;
   int length = 0;

   fp = fopen("test1.txt","w");
   fprintf(fp,"this is C   Language");

   //to set pointer offset in specific position in text file
   fseek(fp,8,SEEK_SET) ;//POINTER==>offset position

   fprintf(fp,"C++");
   fclose(fp);

   fp = fopen("test1.txt","r");
   while((temp = fgetc(fp))!= EOF)
        printf("%c",temp);

   printf("\n====================\n");
   fseek(fp,0,SEEK_SET);

   while((temp = fgetc(fp))!= EOF)
        printf("%c",temp);

   printf("\n====================\n");
   rewind(fp);

   while((temp = fgetc(fp))!= EOF)
        printf("%c",temp);
        
   printf("\n====================");
   length = ftell(fp);
   printf("\nSize of %d bytes. ",length);

}   