#include<stdio.h>
#include<stdlib.h>

int main(){

	int l = 10;
	int v[l];
	int *pv = v;

	for(int i = 0; i<l;i++){
    v[i] = i;
  }

  for(int i = 0; i<l; i++){

    printf("%d %p\n",v[i],v[i]);
  }
}
