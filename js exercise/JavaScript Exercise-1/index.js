1.Write a function that takes two numbers as arguments and returns their sum.
let val1=1;
let val2=2;

let sol=()=>{
    return val1+val2;
}
console.log(sol());

2.Write a function that takes a string as an argument and returns its length.
let val1 = "Hello";
let sol = () => {
    return val1.length;
}
console.log(sol());

3.Write a program that takes two numbers and displays their sum, difference, product, and quotient.
let val1 = 1;
let val2 = 2;
let sum = () => {
    return val1 + val2;
}
let diff = () => {
    return val1 - val2;
}
let prod = () => {
    return val1 * val2;
}
let quo = () => {
    return val1 / val2;
}
console.log(sum());
console.log(diff());
console.log(prod());
console.log(quo());

4.Write a function that takes two numbers as arguments and returns the larger number.
let val1=3;
let val2=10;
let check=()=>{
    if(val1>val2){
        return val1;
    }
    else{
        return val2;
    }
}
console.log(check(val1,val2));

5.Write a program that takes a number and checks whether it is positive, negative, or zero.
let val1=-1;
let check=()=>{
    if(val1==0){
        console.log(`${val1} is zero number`);
    }
    else if(val1>0){
        console.log(`${val1} is positive number`);
    }
    else{
        console.log(`${val1} is negative number`);
    }
}
check(val1);

6.Write a program that displays a string in reverse order.
let val="ankit";
let sol=()=>{
    return val.split("").reverse().join("");
}
console.log(sol(val));

7.Write a program that takes a number and prints the multiplication table for that number.
let multi=(num)=>{
    for(let val=1;val<=10;val++){
        console.log(5*val);
    }
}
multi(5);

8.Write a program that takes a number and calculates the sum of all numbers from 1 to that number.
let sum = (num) => {
    let s = 0;
    for (let val = 1; val <= num; val++) {
        s += val;
    }
    console.log(s);
}
sum(5);

9.Write a program that takes a string and prints out the number of vowels in the string.
let vowels = (str) => {
    let vowels = 0;
    for (let i = 0; i < str.length; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }
    }
    console.log(vowels);
}
vowels("Ankit");

10.Write a function that takes two arrays of integers as arguments and returns an array of the common elements in both arrays, without any duplicates. The returned array should be sorted in ascending order.
For example, given the arrays [1, 2, 3, 4, 5] and [3, 4, 5, 6, 7], the function should return [3, 4, 5].
Hint: You may need to use nested loops and conditional statements to solve this problem.
function findCommonElements(arr1, arr2) {
    // Create an empty array to hold the common elements
    let commonElements = [];
  
    // Loop through each element in arr1
    for (let i = 0; i < arr1.length; i++) {
      // Check if the current element is in arr2
      if (arr2.includes(arr1[i])) {
        // If the element is in arr2 and not already in commonElements array, add it
        if (!commonElements.includes(arr1[i])) {
          commonElements.push(arr1[i]);
        }
      }
    }
  
    // Sort the commonElements array in ascending order
    // commonElements.sort((a, b) => a - b);
  
    // Return the commonElements array
    return commonElements.sort();
  }
  
  // Example usage
  const arr1 = [1, 2, 3, 4, 5];
  const arr2 = [3, 4, 5, 6, 7];
  const commonElements = findCommonElements(arr1, arr2);
  console.log(commonElements); // Outputs: [3, 4, 5]