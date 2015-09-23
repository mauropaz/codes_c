#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void operacao(void);
	
	double var1[3],var2[3],var3[3],var4[3],var5[3],var6[3];
	int n;
	char a;char b; char c;
	char dummy;
	
	char str[500];
	int i=0,j=0;
	int z=0,w=0;
	char var[2][100][50];
	char op[100];
	int opnum=0;
	double fasor[2][100][2];

	
	int main(){
	

	scanf("%s",str);
	
	for(j=0;str[j]!='\0';j++){
		if(str[j]=='|' || str[j]==',' || str[j]=='+' || (str[j]=='-' && (j>0 && str[j-1]!='|' && str[j-1]!=',' && str[j-1]!='+' && str[j-1]!='*' && str[j-1]!='/' && str[j-1]!='-')) || str[j]=='*' || str[j]=='/'){
			
			if(str[j]=='+'){
				op[opnum]='+';
				opnum++;
}
			else if(str[j]=='-'){
				op[opnum]='-';
				opnum++;
}

			else if(str[j]=='*'){
				op[opnum]='*';
				opnum++;
}
			else if(str[j]=='/'){
				op[opnum]='/';
				opnum++;
}
			
			if(str[j]=='|')
				var[1][z][0]=0;
			else if(str[j]==',')
				var[1][z][0]=1;			

			for(;i<j;i++){
				var[0][z][w]=str[i];
				w++;	
			}
				var[0][z][w]='\0';
				z++;
				w=0;
				i++;
		}

}

	for(;i<j;i++){
		var[0][z][w]=str[i];
		w++;
	}
		var[0][z][w]='\0';
		z++;

	
	for(j=0;j<z;j++){
		if(j%2==0)	i=0;
		else		i=1;	
			
		fasor[0][j/2][i]=atof(var[0][j]);
		fasor[1][j/2][0]=var[1][2*(j/2)][0];

}
/*
	for(j=0;j<z;j++){
		if(j%2==0)
		printf("%lf|",fasor[0][j/2][0]);
		else
		printf("%lf\n%lf\n\n",fasor[0][j/2][1],fasor[1][j/2][0]);

}
*/

		if(fasor[1][0][0]==0)
			a='|';
		else
			a=',';		
		
		var1[1]=fasor[0][0][0];
		var1[2]=fasor[0][0][1];

	for(i=0;i<opnum;i++){
		switch(op[i]){
			case '+':
				b='+';
			break;
			
			case '-':
				b='-';
			break;
			
			case '*':
				b='*';
			break;

			case '/':
				b='/';
			break;			

			default:
				printf("Escolha errada de operações!!!\n");
			break;
}
		if(fasor[1][i+1][0]==0)
			c='|';
		else
			c=',';
		var2[1]=fasor[0][i+1][0];
		var2[2]=fasor[0][i+1][1];	
		operacao();
		a='|';
					
}
	printf("%lf/%lf°\n",var1[1],var1[2]);

	}


	void operacao(){

	switch(b){
	case '+':
	if(a=='|' && c=='|'){

	var3[1]=var1[1]*cos(var1[2]*(M_PI/180));
	var3[2]=var1[1]*sin(var1[2]*(M_PI/180));
	var4[1]=var2[1]*cos(var2[2]*(M_PI/180));
        var4[2]=var2[1]*sin(var2[2]*(M_PI/180));
	var5[1]=var3[1]+var4[1];
	var5[2]=var3[2]+var4[2];
	var6[1]=sqrt(pow(var5[1],2)+pow(var5[2],2));
	var6[2]=atan2(var5[2],var5[1])*(180/M_PI);
	var1[1]=var6[1];
	var1[2]=var6[2];

	}

	else if(a=='|' && c==','){

	var3[1]=var1[1]*cos(var1[2]*(M_PI/180));
        var3[2]=var1[1]*sin(var1[2]*(M_PI/180));
        var5[1]=var3[1]+var2[1];
        var5[2]=var3[2]+var2[2];
        var6[1]=sqrt(pow(var5[1],2)+pow(var5[2],2));
        var6[2]=atan2(var5[2],var5[1])*(180/M_PI);
        var1[1]=var6[1];
        var1[2]=var6[2];
}

	else if(a==',' && c=='|'){

	var3[1]=var2[1]*cos(var2[2]*(M_PI/180));
        var3[2]=var2[1]*sin(var2[2]*(M_PI/180));
	var4[1]=var1[1]+var3[1];
	var4[2]=var1[2]+var3[2];
	var5[1]=sqrt(pow(var4[1],2)+pow(var4[2],2));
	var5[2]=atan2(var4[2],var4[1])*(180/M_PI);
	var1[1]=var5[1];
	var1[2]=var5[2];
}

	else{

	var3[1]=var1[1]+var2[1];
	var3[2]=var1[2]+var2[2];
	var4[1]=sqrt(pow(var3[1],2)+pow(var3[2],2));
        var4[2]=atan2(var3[2],var3[1])*(180/M_PI);
	var1[1]=var4[1];
	var1[2]=var4[2];
}

	break;

	case '-':
	if(a=='|' && c=='|'){

        var3[1]=var1[1]*cos(var1[2]*(M_PI/180));
        var3[2]=var1[1]*sin(var1[2]*(M_PI/180));
        var4[1]=var2[1]*cos(var2[2]*(M_PI/180));
        var4[2]=var2[1]*sin(var2[2]*(M_PI/180));
        var5[1]=var3[1]-var4[1];
        var5[2]=var3[2]-var4[2];
        var6[1]=sqrt(pow(var5[1],2)+pow(var5[2],2));
        var6[2]=atan2(var5[2],var5[1])*(180/M_PI);
        var1[1]=var6[1];
        var1[2]=var6[2];

        }

        else if(a=='|' && c==','){

        var3[1]=var1[1]*cos(var1[2]*(M_PI/180));
        var3[2]=var1[1]*sin(var1[2]*(M_PI/180));
        var5[1]=var3[1]-var2[1];
        var5[2]=var3[2]-var2[2];
        var6[1]=sqrt(pow(var5[1],2)+pow(var5[2],2));
        var6[2]=atan2(var5[2],var5[1])*(180/M_PI);
        var1[1]=var6[1];
        var1[2]=var6[2];
}

        else if(a==',' && c=='|'){

        var3[1]=var2[1]*cos(var2[2]*(M_PI/180));
        var3[2]=var2[1]*sin(var2[2]*(M_PI/180));
        var4[1]=var1[1]-var3[1];
        var4[2]=var1[2]-var3[2];
        var5[1]=sqrt(pow(var4[1],2)+pow(var4[2],2));
        var5[2]=atan2(var4[2],var4[1])*(180/M_PI);
        var1[1]=var5[1];
        var1[2]=var5[2];
}

        else{

        var3[1]=var1[1]-var2[1];
        var3[2]=var1[2]-var2[2];
        var4[1]=sqrt(pow(var3[1],2)+pow(var3[2],2));
        var4[2]=atan2(var3[2],var3[1])*(180/M_PI);
        var1[1]=var4[1];
        var1[2]=var4[2];
}

        break; 
	
	case '*':
	if(a=='|' && c=='|'){

        var3[1]=var1[1]*var2[1];
        var3[2]=var1[2]+var2[2];
        var1[1]=var3[1];
        var1[2]=var3[2];

        }

        else if(a=='|' && c==','){

        var3[1]=sqrt(pow(var2[1],2)+pow(var2[2],2));
        var3[2]=atan2(var2[2],var2[1])*(180/M_PI);
        var4[1]=var1[1]*var3[1];
        var4[2]=var1[2]+var3[2];
        var1[1]=var4[1];
        var1[2]=var4[2];
}

        else if(a==',' && c=='|'){
	var3[1]=sqrt(pow(var1[1],2)+pow(var1[2],2));
        var3[2]=atan2(var1[2],var1[1])*(180/M_PI);
        var4[1]=var3[1]*var2[1];
        var4[2]=var3[2]+var2[2];
        var1[1]=var4[1];
        var1[2]=var4[2];
}

        else{
	var3[1]=sqrt(pow(var1[1],2)+pow(var1[2],2));
        var3[2]=atan2(var1[2],var1[1])*(180/M_PI);
	var4[1]=sqrt(pow(var2[1],2)+pow(var2[2],2));
        var4[2]=atan2(var2[2],var2[1])*(180/M_PI);
        var5[1]=var3[1]*var4[1];
        var5[2]=var3[2]+var4[2];
        var1[1]=var5[1];
        var1[2]=var5[2];
}

        break;

	case '/':
        if(a=='|' && c=='|'){

        var3[1]=var1[1]/var2[1];
        var3[2]=var1[2]-var2[2];
        var1[1]=var3[1];
        var1[2]=var3[2];

        }

        else if(a=='|' && c==','){

        var3[1]=sqrt(pow(var2[1],2)+pow(var2[2],2));
        var3[2]=atan2(var2[2],var2[1])*(180/M_PI);
        var4[1]=var1[1]/var3[1];
        var4[2]=var1[2]-var3[2];
        var1[1]=var4[1];
        var1[2]=var4[2];
}

        else if(a==',' && c=='|'){
        var3[1]=sqrt(pow(var1[1],2)+pow(var1[2],2));
        var3[2]=atan2(var1[2],var1[1])*(180/M_PI);
        var4[1]=var3[1]/var2[1];
        var4[2]=var3[2]-var2[2];
        var1[1]=var4[1];
        var1[2]=var4[2];
}

        else{
        var3[1]=sqrt(pow(var1[1],2)+pow(var1[2],2));
        var3[2]=atan2(var1[2],var1[1])*(180/M_PI);
        var4[1]=sqrt(pow(var2[1],2)+pow(var2[2],2));
        var4[2]=atan2(var2[2],var2[1])*(180/M_PI);
        var5[1]=var3[1]/var4[1];
        var5[2]=var3[2]-var4[2];
        var1[1]=var5[1];
        var1[2]=var5[2];
}

        break;

	default:
	printf("MATH ERROR!\n");
	break;

	}

	


	}
