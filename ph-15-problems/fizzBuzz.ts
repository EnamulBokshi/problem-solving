function oneToN(n:number) {
    for(let i =1; i<=n; i++) {
        let str = '';
        if(i%3==0){
            str=str+'Fizz'
        }
        if(i%5 == 0){
            str = str+"Buzz"
        }
        console.log(i," : ", str);
        str = ''
    }
}
oneToN(25)