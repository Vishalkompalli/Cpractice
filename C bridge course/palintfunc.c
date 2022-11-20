int palcheck(int n)// function definition
{int rev=0;

while(n!=0)
{

rev=rev*10+n%10;
n=n/10;


}return rev;//returnd rev back to main function
}
