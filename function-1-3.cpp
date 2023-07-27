int num_count(int array[], int n, int number){
    if (n < 1){
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i < n; i++){
        if (array[i] == number){
            cnt++;
        }
    }
    return cnt;
}