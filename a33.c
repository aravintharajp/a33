void main()
{
char a[100];
int i,count=0;
gets(a);
for(i=0;a[i];i++)
if(a[i] == ' ')
count++;
printf("%d",count);
}
