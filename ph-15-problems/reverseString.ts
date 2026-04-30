 export function reverseString(str:string) {
    const len = str.length;
    let newStr = '';
    for(let i = len-1; i>=0; i--){
        newStr = newStr + str[i];
    }
return newStr;
}

const result =  reverseString("a");
console.log(result);