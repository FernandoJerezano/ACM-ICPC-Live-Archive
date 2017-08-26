// Problema:	2026 - Generating permutations.cpp
// Autor: 	FernandoJerezano
// Fecha: 	26-Agosto-2017
// Origen: 	Regionals 2000 :: Latin America - Mexico and Central America
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

vector<int>vec;

// This function prints the permutation
void print(){

	printf("%d",vec[0]);
	for(int i=1;i<vec.size();i++){
		printf(" %d",vec[i]);
	}
	printf("\n");
}

int main(){

	//freopen("entrada.txt","r",stdin);
	//freopen("salida.txt","w",stdout);

	int n;
	int c = 1;
	vector<int>entrada;
	entrada.clear();

	// We read the input and store it in entrada
	while(scanf("%d",&n)){
		if(n!=0)
			entrada.push_back(n);
		else
			break;
	}

	for(int i=0;i<entrada.size()-1;i++){
		vec.clear();
		n = entrada[i];
		if(n==1){
			printf("Run %d n=%d\n",c++,n);
			printf("1\n");
		}else{
			// We initialize the vector
			vec.assign(n,0);
			for(int i=0;i<n;i++){
				vec[i] = i+1;
			}
			printf("Run %d n=%d\n",c++,n);
			do{
				print();
			// This function gives us the next permutation
			}while(next_permutation(vec.begin(),vec.end()));
		}
		printf("\n");
	}

	// Last input
	n = entrada[entrada.size()-1];
	vec.clear();
	vec.assign(n,0);
	for(int i=0;i<n;i++){
		vec[i] = i+1;
	}
	printf("Run %d n=%d\n",c++,n);
	do{
		print();
	}while(next_permutation(vec.begin(),vec.end()));

	return 0;
}
