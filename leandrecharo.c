#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*int Rechdicho(int t[], int N, int val){

	int affect = 0;
	int TestBool = 0;
	int oper = 0;


	int inf=0;
	affect++;

	int supp = N-1;
	affect++;

	int pos = -1;
	affect++;

	while((inf<=supp)&&(pos == -1)){
		TestBool++;

		int mil = (supp+inf)/2;
		affect++;
		oper++;

		if (val<t[mil]){
			TestBool++;

			supp=mil-1;
			affect++;
			oper++;

		}else if (val>t[mil]){
			TestBool++;

			inf=mil+1;
			oper++;
			affect++;

		}else {
			pos=mil;
			affect++;

		}
	}
	printf("position : %d, affection : %d, TestBool : %d, Operation : %d\n", pos, affect, TestBool, oper);
	return pos;
}

void RempliTab(int tab[], int N){
	for(int i =0; i<N; i++){
		tab[i] = i;
	}
}*/

int Quest1(int x, int y){
	int affect = 0;
	int TestBool = 0;
	int oper = 0;

    	int z = 0;
	affect++;

    	int w = x;
	affect++;

    	while(w <= y){
		TestBool++;
       	 	z = z + w * w;
		oper++;
		affect++;
        	w++;
		oper++;
    	}
	printf("M1 -> resultat : %d, affection : %d, TestBool : %d, Operation : %d\n", z,affect, TestBool, oper);
    	return z;
}

int Mystere2(int m){
	int affect = 0;
	int TestBool = 0;
	int oper = 0;

    	int res = 1;
	affect++;

    	for (int i=2; i <= m-1; i++){
		TestBool++;
		oper++
		affect++;

        	if(m % i==0){
			TestBool++;

            		res = 0;
			affect++;
        	}
    	}
	printf("M2 -> resultat : %d, affection : %d, TestBool : %d, Operation : %d\n", res,affect, TestBool, oper);
    	return res;
}

int Mystere3(int n){

	int affect = 0;
	int TestBool = 0;
	int oper = 0;

    	int z = n;
	affect++;	
	
    	while( Mystere2(z) == 0 ){
		TestBool++;
        	z++;
		oper++;
    	}
	printf("M3 -> resultat : %d, affection : %d, TestBool : %d, Operation : %d\n", z,affect, TestBool, oper);
    	return z;
}

void Mystere4(int T[], int N){
	int affect = 0;
	int TestBool = 0;
	int oper = 0;

    	for(int i =0; i<N; i++){
		TestBool++;
		oper++
		affect++;

        	T[i] = 0;
		affect++;
		
    	}
    	T[1] = 1;
    	T[2] = 2;
	affect++;
	affect++;

    	for (int j = 1; j < 2; j++){
		TestBool++;
		oper++
		affect++;

        	for(int k = 0; k<N; k++){
			TestBool++;
			oper++
			affect++;

            		T[k] = T[k] + T[k-1];
			oper++
			affect++;
        	}
    	}

    	for (int i = 1; i<N; i++){
		TestBool++;
		oper++
		affect++;

        	printf("%d du tableau :  %d ", i, T[i]);
    	}

	printf("M3 ->  affection : %d, TestBool : %d, Operation : %d\n", affect, TestBool, oper);
} 

*/

int main(){
	/*int t[10];
	int N = 10;
	int val = 5;
	RempliTab(t, N);
	Rechdicho(t, N, val);*/
	Quest1(1,3);
	Quest1(2,5);
	Quest1(15,25);

	printf("-------------------------------------\n");

	Mystere2(1);
	Mystere2(4);
	Mystere2(8);
	Mystere2(152);
	Mystere2(613);

	printf("-------------------------------------\n");

	Mystere3(1);
	Mystere3(4);
	Mystere3(8);
	Mystere3(152);
	Mystere3(613);

	printf("-------------------------------------\n");

	
	return 0;
}

