const rank = (win) => {
    if (win === 6) return 1;
    else if (win === 5) return 2;
    else if (win === 4) return 3;
    else if (win === 3) return 4;
    else if (win === 2) return 5;
    else return 6;
}

const solution = (lottos, win_nums) => {
    let answer = [];
    let win_cnt = 0;
    let zero_cnt = 0;
    lottos.forEach(elem => {
        if (elem === 0) zero_cnt++;
        else if (win_nums.includes(elem)) win_cnt++;
    })
    answer.push(rank(win_cnt+zero_cnt));
    answer.push(rank(win_cnt));
    return answer;
}
