function isPrime(num) {
  for(let i = 2; num > i; i++) {
    if(num % i === 0) return false;
  }
 return true; // 서로 다른 자연수 3개 더하면 무조건 1보다 크므로 1은 고려하지 않아도 됨
}

function solution(nums) {
    let answer = 0;
    for (let i = 0; i < nums.length; ++i){
        for (let j = i+1; j < nums.length; ++j) {
            for (let k = j+1; k < nums.length; ++k) {
                if (isPrime(nums[i] + nums[j] + nums[k])) answer++;
            }
        }
    }
    
    return answer;
}
