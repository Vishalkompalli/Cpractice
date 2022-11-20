
int prime(num)
{int i,j,count=0,n;

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=n;j++)
        {

            if(i%j==0)

            count++;
            if(count==2)
                return i;
        }

    }



}
