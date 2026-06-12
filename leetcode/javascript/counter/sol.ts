function createCounter(n: number): () => number {
    let counter = n
    return function() {
     return counter++   
    }
}

let counter = createCounter(10)
counter()
counter()
console.log(counter())