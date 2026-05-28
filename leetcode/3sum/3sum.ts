function add(num1:number, num2:number):number {
    return num1+num2;
}

const numbers = [-2, 0, 1, 1, 2,0,0,0];

// [[-2, 0, 2],[1,1,-2], [0,0,0]]


function get3SumCombinations (numbers:number[]){
    let count = 0;
    let comb=[]
    for(let i = 0; i<numbers.length-2; i++){
        let currentItem = numbers[i];
        if(i+2>numbers.length) return count;
        for(let j = i+1; j<numbers.length-1; j++){
            for(let m = j+1; m<numbers.length; m++){
                if(currentItem+add(numbers[j],numbers[m]) === 0){
                    comb.push([numbers[i],numbers[j],numbers[m]]);
                    count++;
                }
            }
        }
    }
    console.log(comb)

    return count;
}

console.log(get3SumCombinations(numbers));