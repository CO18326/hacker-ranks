#include <stdio.h>
int main ()
{
int townno,i,t,q,a,s,arres[10],sum[10],set,tot=0,c;
printf("Enter the no. of towns:");
scanf("%d",&townno);
struct towndip{
char name[5];
int postno;
struct postdip{
int arr[3];
int namesize[10][2];}postoff[10];
}towndet[townno];
for(i=0;i<=townno-1;i++){
printf("Town Name:");
scanf("%s",towndet[i].name);
printf("NO.of Post ofices:");
scanf("%d",&towndet[i].postno);
for(t=0;t<=towndet[i].postno-1;t++){
printf("pakages details:");
scanf("%d %d %d",&towndet[i].postoff[t].arr[0],&towndet[i].postoff[t].arr[1],&towndet[i].postoff[t].arr[2]);
for(q=0;q<=towndet[i].postoff[t].arr[0]-1;q++){
printf("details of %d pakage:",q+1);
scanf("%d %d",&towndet[i].postoff[t].namesize[q][0],&towndet[i].postoff[t].namesize[q][1]);}}}
printf("Tell the total number of queries:");
scanf("%d",&a);
char que[a+1][34];
for(i=0;i<=a;i++){if(i!=0){printf("%d.  ",i);}
fgets(que[i],34,stdin);}
for(i=1;i<=a;i++){if(que[i][0]=='1'){for(t=0;t<=townno-1;t++){if(towndet[t].name[0]==que[i][2]){
printf("\n%c  \v",que[i][2]);
for(q=0;q<=towndet[t].postno-1;q++){
printf("%d:  \v",q);
for(s=0;s<=towndet[t].postoff[q].arr[0]-1;s++){
printf("\b%d\v",towndet[t].postoff[q].namesize[s][0]);}printf("\n   ");}}}}
if(que[i][0]=='3'){for(t=0;t<=townno-1;t++){for(q=0;q<=towndet[t].postno-1;q++){arres[t]+=towndet[t].postoff[q].arr[0];}}
for(t=0;t<=townno-1;t++){for(q=0;q<=townno-1;q++){if(arres[t]>arres[q]){sum[t]+=1;}}}
 for(t=0;t<=townno-1;t++){if(sum[t]==townno-1){printf("\nTown with more no. of packages:%c",towndet[t].name[0]);}}}
if(que[i][0]=='2'){for(t=0;t<=townno-1;t++){
for(q=0;q<=townno-1;q++){
if(towndet[t].name[0]==que[i][2] && towndet[q].name[0]==que[i][6]){
for(s=0;s<=towndet[t].postoff[que[i][4]-48].arr[0]-1;s++){
if(towndet[t].postoff[que[i][4]-48].namesize[s][1]>=towndet[q].postoff[que[i][8]-48].arr[1] && towndet[t].postoff[que[i][4]-48].namesize[s][1]<=towndet[q].postoff[que[i][8]-48].arr[2])
{towndet[q].postoff[que[i][8]-48].arr[0]+=1;
towndet[q].postoff[que[i][8]-48].namesize[towndet[q].postoff[que[i][8]-48].arr[0]-1][0]=towndet[t].postoff[que[i][4]-48].namesize[s][0];
towndet[q].postoff[que[i][8]-48].namesize[towndet[q].postoff[que[i][8]-48].arr[0]-1][1]=towndet[t].postoff[que[i][4]-48].namesize[s][1];
for(c=s;c<=towndet[t].postoff[que[i][4]-48].arr[0]-2;c++){
towndet[t].postoff[que[i][4]-48].namesize[c][1]=towndet[t].postoff[que[i][4]-48].namesize[c+1][1];
towndet[t].postoff[que[i][4]-48].namesize[c][0]=towndet[t].postoff[que[i][4]-48].namesize[c+1][0];}}}
towndet[t].postoff[que[i][4]-48].arr[0]-=1;}}}
}
}
return 0;
}
