const solution = (s) => {
    // 문자열
    let answer = s.length;
    let chk = 1;
    // 절반만 해도 됨 - 절반 넘어가면 어짜피 같을 수가 없음
    while(chk <= s.length / 2){
        let len = s.length;
        let same_chk = 0;
        for (let i = 0; i < s.length - chk; i += chk) {
            if (s.substr(i,chk) === s.substr(i+chk, chk)) {
                // 같은게 8번 연속 나왔는데 또 같으면 자릿수가 변화한다는 것을 캐치!
                if (!same_chk || same_chk === 8 || same_chk === 98 || same_chk === 998) len -= (chk - 1);
                else len -= chk;
                same_chk++;
            }
            else same_chk = 0;
        }
        if (len < answer) answer = len;
        chk++;
    }
    
    return answer;
}
