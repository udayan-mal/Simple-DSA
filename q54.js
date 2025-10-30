function countVowelsConsonants(str) {
  let vowels = 0, consonants = 0;
  for (let char of str.toLowerCase()) {
    if (/[a-z]/.test(char)) {
      if ('aeiou'.includes(char)) vowels++;
      else consonants++;
    }
  }
  return { vowels, consonants };
}

console.log(countVowelsConsonants("Hello World"));
