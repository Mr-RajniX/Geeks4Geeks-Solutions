String average(int A[], int N){
    float sum = 0;
    for(int i=0; i<N; i++) sum += A[i];
    double avg =  sum / N ;
    String s = String.format("%.2f",avg);
    return s;
}
