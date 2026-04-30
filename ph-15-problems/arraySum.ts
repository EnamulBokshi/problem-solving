function arraySum(arr:number[]) {
    const sum = arr.reduce((acc, current)=> acc+current , 0);
    console.log(sum)
}
arraySum([1,2,3,4,5,6,7,8,9,10]);