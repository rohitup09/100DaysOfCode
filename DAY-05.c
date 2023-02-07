//MIND TREE CODE:
#include&lt;stdio.h&gt;
#include&lt;stdlib.h&gt;
int main()
{
int n=1,k=0,i,j;
int pos=0;
while(n&lt;=5)
{
k+=n;
if(n%2==0)
{
for(j=0;j&lt;n;j++)
{
printf(&quot;%d &quot;,k);
pos++;
k--;
}
printf(&quot;\n&quot;);
k+=n;
}
else
{
for(j=0;j&lt;n;j++)
{
printf(&quot;%d &quot;,k-pos);
pos--;
}
pos++;
printf(&quot;\n&quot;);
}
n++;
}
}


// CODE 2
bool find132pattern(int* a, int n){
int i,j,k;
for(i=0;i&lt;n-1;i++)
{
if(a[i]&lt;a[i+1])
{
int x=a[i];
for(j=i+1;j&lt;n-1;j++)
{
if(a[j]&gt;x)
{
for(k=j+1;k&lt;n;k++)
{
if(a[k]&gt;x &amp;&amp; a[k]&lt;a[j])
return true;
}
}
}
}
}
return false;
}
