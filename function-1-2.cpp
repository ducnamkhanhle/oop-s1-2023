double array_mean(int array[], int n){
    if (n < 1){
        return 0.0;
    }
    double avr = 0.0;
    for (int i = 0; i < n; i++){
        avr += (double)array[i];
    }
    avr /= n;
    return avr;
}