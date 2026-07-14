bool isPalindrome(int x) {
    int rem;
    long rev=0;
    int temp=x;
    int y;
    if(x>=0){
    while(x!=0){
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    if(rev==temp){
        y=true;
    }
    else{
        y=false;
    }
    }
    else{
        y=false;
    }
    return y;
}


    