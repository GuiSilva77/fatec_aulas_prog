let array = [];

//sort random numbers in array//
function sortArray() {
  for (let i = 0; i < 20; i++) {
    array.push(Math.floor(Math.random() * 100) + 1);
  }
  console.log(array);
}

export default sortArray;
