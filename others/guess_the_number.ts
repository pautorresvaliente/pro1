function game(): void {
    while ()
};

function check(randomNumber: number, guessRandom: number): string {
    if (randomNumber < guessRandom) {
        return "less";
    } else if (randomNumber > guessRandom) {
        return "more";
    } else {
        return "guessed";
    }
    
};