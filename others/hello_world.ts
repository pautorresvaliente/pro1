
// console.log("Hello World!");
function helloWorld(number: number): string {
    let output;
    console.log(`Your random number is ${number}.`);
    if (number >= 3) {
        output = "Hello World!"
    } else if (number == 2) {
        output = "Wow, your very lucky!";
    } else {
        output = "Fuck you!";
    }
    return output;
}

let randomNumber: number = Math.floor(Math.random() * 6 + 1);

console.log(helloWorld(randomNumber));