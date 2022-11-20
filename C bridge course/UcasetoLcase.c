int main()
{
char ch;
printf("Enter a character ");
scanf("%c",&ch);
if(islower(ch))
{
    printf("%c in uppercase is represented as %c", ch, toupper(ch));
}
else
{   printf("Error");
}
 return 0;
}

