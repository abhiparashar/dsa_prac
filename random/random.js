const arr1 = ['dog', 'cat', 'cat', 'dog']
const arr2 = ['dog', 'cat', 'cat']
const pattern1 = 'abba'
const pattern2 = 'aba'

const patternMatch = (pattern, arr) => {
  const firstElem = arr[0];
  const secondElem = arr[1];
  const resArr = []
  for (const iterator of pattern) {
    if (iterator === 'a') {
      resArr.push(firstElem);
    } else {
      resArr.push(secondElem);
    }
  }
  //now match
  for (let i = 0; i < arr.length; i++) {
    if (arr[i] !== resArr[i]) {
      return false
    }
  }
  return true
}
const result = patternMatch(pattern2, arr2);
console.log(result)