function reverseString(str:string) {
    const len = str.length;
    let newStr = '';
    for(let i = len-1; i>=0; i--){
        newStr = newStr + str[i];
    }
return newStr;
}

const checkPalindrome = (str: string) => {
    let refinedStr = '';
    const alphaNumericStr = 'Q W E R T Y U I O P A S D F G H J K L Z X C V B N M q w e r t y u i o p a s d f g h j k l z x c v b n m 1 2 3 4 5 6 7 8 9 0';
    const alphaNumericList = alphaNumericStr.split(' ');
    for(let s of str){
        if(alphaNumericList.includes(s)){
            refinedStr=refinedStr+s
        }
    }
    const revedStr = reverseString(refinedStr);
    
    console.log("Given string: ", str);
    console.log("Refined string: ", refinedStr);
    console.log("Reversed string: ", revedStr);
    let isPalindrome = false;
    if(revedStr === refinedStr) {
        isPalindrome = true;
    }
    console.log("Is Palindrome: ", isPalindrome)

}
checkPalindrome("aba!!")