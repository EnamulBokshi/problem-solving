const countVowels = (str:string) => {
    let totalVowels = 0;
    const vowels = ['A','E','I','O','U','a','e','i','o','u']
    for(const s of str){
        if(vowels.includes(s)){
            totalVowels = totalVowels+1;
        }
    }
    console.log(totalVowels);
} 

countVowels("AEIOUa")