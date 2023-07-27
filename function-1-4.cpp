int sum_two_arrays(int array[], int secondarray[], int n){
    if (n < 1){
        return 0;
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++){
        sum1 += array[i];
        sum2 += secondarray[i];
    }
    return sum1 + sum2;
}