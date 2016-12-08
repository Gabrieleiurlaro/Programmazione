 bool ordinamento(int V[],int N){ t=0;
for(i=0;i<N-1 && t==0;i++){if(V[i]<=V[i+1]);
else t=1;}
if(t==0)return true;
   else return false;}