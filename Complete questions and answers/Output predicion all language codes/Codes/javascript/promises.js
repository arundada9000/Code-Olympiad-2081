let promise = new Promise((resolve, reject) => {
  resolve("Success!");
});
promise.then((res) => console.log(res));
console.log("End");

// Output:
// End
// Success!
