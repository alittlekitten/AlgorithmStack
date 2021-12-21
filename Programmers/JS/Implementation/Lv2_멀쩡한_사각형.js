const gcd = (w, h) => {
    let gcd = 1;
    
    for (let i = 2; i <= Math.min(w, h); ++i){
        if(w % i === 0 && h % i === 0) gcd = i; 
    }
    
    return gcd;
}

const solution = (w, h) => {
    let answer = w * h - (w + h - gcd(w, h));
    
    return answer;
}
