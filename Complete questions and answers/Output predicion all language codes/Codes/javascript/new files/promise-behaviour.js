const p = new Promise((resolve, reject) => {
  resolve("Success");
  reject("Error");
});

p.then((message) => console.log(message)).catch((error) => console.log(error));

//Success
