let inputs="thisssssssssssssssssssssssssssssss is the biggest worddddddddd";

const words = inputs.trim().split(" ");
const largestWord = words.reduce((acc, current) => {
    if(current.length > acc.length) return current
    return acc;
}, "")

console.log(largestWord)
