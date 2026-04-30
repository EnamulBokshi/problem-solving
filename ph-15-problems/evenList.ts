const evenList = (arr:number[]) => {
    const evensArr = arr.reduce((acc, crr)=>{
        
        if(crr%2==0){
            acc.push(crr);
        }
        return acc;
    }, [])
}