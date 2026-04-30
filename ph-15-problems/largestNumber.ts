const largetNumber = (arr:number[]) => {
    arr.sort((a,b)=> a-b);
    console.log(arr[arr.length-1])
}

largetNumber([-100,-80,-10])