import java.util.Scanner
fun main() {
  val r = Scanner(System.`in`)
  print("enter the number of elements :")
  var n:Int = r.nextInt()
  val arr = IntArray(n)
  for (i in 0 until n) {
    print("enter a[${i}] :")
    var s:Int = r.nextInt()
    arr.set(i,s)
  }
  print("enter the number to search :")
  var x:Int = r.nextInt()
  for (i in 0 until n) {
    if(x==arr.get(i)){
      println("${x} is found at index ${i}")
    }
  }
}
  