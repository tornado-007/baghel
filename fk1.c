int main()
{
if(fork()==0)
{
int i=7;
printf("%d",i);
system("cal");

}
system("ps -e");
while(1);

}

