
function checkVowelOrConsonant(ch) {
  ch = ch.toLowerCase();

  if (!/^[a-z]$/.test(ch)) {
    return "Please enter a single alphabet character!";
  }

  if ("aeiou".includes(ch)) {
    return "Vowel";
  } else {
    return "Consonant";
  }
}

let char = prompt("Enter a single character:");

console.log(`${char} is a ${checkVowelOrConsonant(char)}.`);
