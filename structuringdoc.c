#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main () {int d;int i,sum=0,s,tot=0,o,q;
printf("Enter the no. of paragraphs you want to enter:");
scanf("%d",&d);
char* para[d+1];
for(i=0;i<=(d);i++){ para[i]=(char*)calloc(500,sizeof(char));     
if(i !=0){
printf("para %d:",i);}
fgets(para[i],500,stdin);
}
struct accoun {
int totwo;
int totli; };
struct accoun par[d+1];
for(s=1;s<=d;s++)
{
for(i=0;para[s][i]!='\0';i++){if(para[s][i]==' ' || para[s][i]==','){sum+=1;}if(para[s][i]=='.'){
if(para[s][i+1]=='\n'){sum+=0;}else{sum+=1;}
tot+=1;}}
if(sum>0){
par[s].totwo=sum+1;}
if(sum==0 || sum<0){par[s].totwo=1;}sum=0;
if(tot==0)
{par[s].totli=1;}
else
{par[s].totli=tot;}tot=0;}
struct lineacc
{ struct line{
     char word[251][27];
}lineno[251];}pa[d+1]; 
int t,u;
s=1;
sas:
while(s<=d){o=0;i=1;t=1;u=1;
here:
while((para[s][o]!=' ') && ( para[s][o]!='.') && (para[s][o]!='\n') && (para[s][o]!=',') && (para[s][o]!='!')){
pa[s].lineno[u].word[t][i]=para[s][o];
i++;
o++;
}
if(para[s][o]==' ' || para[s][o]=='!' || para[s][o]==','){pa[s].lineno[u].word[t][i]=para[s][o];t=t+1;o=o+1;i=1;goto here;}
if(para[s][o]=='.'){pa[s].lineno[u].word[t][i]='.';u=u+1;o=o+1;i=1;goto here;}
if(para[s][o]=='\n'){s=s+1;goto sas;}}

printf("Enter the no. of queries you want to enter:");
scanf("%d",&q);
int arr[q+1][3];
for(i=1;i<=q;i++){
printf("%d\t\t",i);scanf("%d %d %d",&arr[i][0],&arr[i][1],&arr[i][2]);}
for(i=1;i<=q;i++){if(arr[i][1] == 0 && arr[i][2]==0){printf("%s",para[arr[i][0]]);}
if(arr[i][2]==0){for(t=1;t<251;t++){for(s=1;s<27;s++){printf("%c",pa[arr[i][1]].lineno[arr[i][0]].word[t][s]);}}}
else{for(s=1;s<27;s++){printf("%c",pa[arr[i][2]].lineno[arr[i][1]].word[arr[i][0]][s]);if(pa[arr[i][2]].lineno[arr[i][1]].word[arr[i][0]][s]=='.'){printf("\b\b");}}}printf("\n");}
return 0;
}

