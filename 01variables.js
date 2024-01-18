const accountId = 12345;
let account_details = "received";
var account_name = "Hello, world";

// const cannot be changed in the javascript code 
// var kabhi use nahi karna hai due to block scope issue and functional scope issues with var
// Varibe value ad value jahn change hogi wah use kareneg let

/* If we want to print many values then we can use console.table*/
console.table([account_details, account_name, accountId]);

account_details="rejected account"
account_name="Manish Account"
console.table([account_details, account_name, accountId]);
