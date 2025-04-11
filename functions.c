
#include <stdio.h>

void factorial(int n){
	int f = 1;
	for(int i=1; i<=n; i++){
		f*=i;
		
	}
	printf("%d\n",f);
}


int simplecalculator(char op, float n1,float n2){
    
    
    float result;
    
    switch(op){
        case '+':
        printf("%f", n1+n2);
        break;
        case '-':
        printf("%f", n1-n2);
        break;
        case '*':
        printf("%f", n1*n2);
        break;
        case '/':
        printf("%f", n1/n2);
        break;
    }
    if(n2!=0){
        result = n1/n2;
        printf("%f",result);

    }else{
        printf("a no cant be divided by 0");
    }
    return 0;
    

}

void bubblesort(int arr[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { 
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}