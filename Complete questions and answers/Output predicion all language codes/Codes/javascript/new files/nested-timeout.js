setTimeout(() => {
  console.log("First");
  setTimeout(() => {
    console.log("Second");
  }, 1000);
}, 500);

//First
//Second
