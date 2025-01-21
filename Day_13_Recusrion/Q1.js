function revs(n,rev){
    if (n==0) return rev;

    rev = rev*10 + n%10;

    return revs(Math.floor(n/10) , rev)

}

console.log(revs(879,0));
