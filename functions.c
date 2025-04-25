//  FACTORIAL

#include <stdio.h>

int factorial(int n){
	int f = 1;
	for(int i=1; i<=n; i++){
		f*=i;
		
	}
    return f; // return result
	
}

int main(){
    int result = factorial(5);
    printf("%d\n", result);
     

    int (*p)(int);
    p = factorial;
    int result_2 = p(6);
    printf("%d\n", result_2);
    return 0;
    

}

//----------------------------------------------------------------------------------------------

// SIMPLE CALCULATOR

float simplecalculator(char op, float n1,float n2){
    
    
    float result;
    
    switch(op){
        case '+':
        result = n1+n2;
        printf("%f\n", result);

       
        break;
        case '-':
        result = n1-n2;
        printf("%f\n", result);
        break;
        case '*':
        result = n1*n2;
        printf("%f\n", result);
        break;
    
    if(n2!=0){
        result = n1/n2;
        printf("%f\n", result);

    }else{
        printf("a no cant be divided by 0");
    }



    default:
        printf("invalid\n");
        return 0;
    }
    
        

    return result;
    }
   
   



int main(){
    simplecalculator('+',10,5);

    float (*p)(char,float,float);

    p = simplecalculator;

    float result = p('*',3,4);
    printf("%f\n", result);
    
    return 0;

}

//-----------------------------------------------------------------------------------------------------------------------------

// BUBBLESORT

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

int main(){
    int arr[] = {1,6,4,3,5,2};
    int size = sizeof(arr) / sizeof(arr[0]); // to calculate the size of the array

    void (*p)(int[], int) = bubblesort;

    p(arr, size);
    return 0;
}