// Solution using maths logic

vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long n=A.size(),x=0,y=0,s=0,s2=0;
    for(long long i=0;i<n;i++){
        s+=(A[i]-(i+1));
        s2+=(((long long)A[i]*(long long)A[i])-((i+1)*(i+1)));
    }
    //x-y=s     (x+y)(x-y)=s2
    //(x+y)=s2/s
    x=(s+(s2/s))/2;
    y=x-s;
    return {(int)x,(int)y};
    
}
