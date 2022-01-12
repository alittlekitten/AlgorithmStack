// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

function solution(A, K) {
    // write your code in JavaScript (Node.js 8.9.4)
    if (A.length){
        for (let i = 0; i < K; ++i){
            A.unshift(A.pop());
        }
    }
    
    return A;
}
