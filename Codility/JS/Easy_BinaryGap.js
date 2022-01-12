// you can write to stdout for debugging purposes, e.g.
// console.log('this is a debug message');

function solution(N) {
    // write your code in JavaScript (Node.js 8.9.4)
    let bin = N.toString(2);
    let cnt = 0;
    let answer = 0;
    for (let i = 1; i < bin.length; ++i){
        if (bin[i] === '0') cnt++;
        else if (bin[i] === '1') {
            if (cnt > answer) answer = cnt;
            cnt = 0;
        }
        
    }
    return answer;
}
