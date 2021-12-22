function solution(n, arr1, arr2) {
    return arr1.reduce((acc, value, index) => {
        let tmp = (value | arr2[index]).toString(2).padStart(n,0);
        acc.push(tmp.replace(/1/g,"#").replace(/0/g, " "));
        return acc;
    }, []);
}
