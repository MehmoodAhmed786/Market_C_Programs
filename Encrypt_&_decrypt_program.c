#include<stdio.h>
#include<string.h>
void decrypt(char dec[])
{
	int i;
	for(i = 0; (i < 100 && dec[i] != '\0'); i++)
        dec[i] = dec[i] - 3;
        printf("\nDecrypted string: %s\n", dec);
        
}
void encrypt(char enc[]){
	int i;
	 for(i = 0; (i < 100 && enc[i] != '\0'); i++){
        enc[i] = enc[i] + 3;
    }
    printf("\nEncrypted form: %s",enc);
    decrypt(enc);
}

int main()
{
   int i;
   char str[100];

   printf("\nPlease enter a string:\t");
   gets(str);
   encrypt(str);
   return 0;
}

