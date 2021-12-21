function solution(n) {
    let answer = '';
    const arr=['4', '1', '2'];
    while(n > 0){
        answer=arr[n % 3] + answer;
        n = Math.floor((n - 1) / 3); // 3진법이 0이 아닌 1부터 시작하므로!!
    }
    
    return answer;
}
