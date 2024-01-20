let val=33;
// typeof is used to determine which type or data type the variable is
console.log(typeof val);
// 2nd method to find the type of the variable
console.log(typeof (val));

let score="33";
console.log(typeof score);

let score1="33abcd";
console.log(typeof score1);
console.log(score1);
// It is used to change the string into number 
let valueinnumber=Number(score1);
// Since here score1 is "33abcd" to ye to string hai and ishko jab number me convert kareneg to type ishka Number hi hoga par ye number me convert nhi ho paega and ishka console.log krenge to NaN aaega which means Not a Number
console.log(typeof valueinnumber);
console.log(valueinnumber);
// Null is an object

let isLoggedin=1;
// If the value of Logged in is empty string it return false else 0 me false dega baaki sabme true dega answer
// used to chnage the variable in boolean format
let booleanLoggedin=Boolean(isLoggedin);
console.log(booleanLoggedin); //
