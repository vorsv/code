import kotlin.io.*
class stu {
    var rol:Int =0
    var age:Int = 0
    var nam:String = ""
    fun get(){
        print("\nenter your name :")
        nam= readLine()!!
        print("enter your roll :")
        rol= readLine()!!.toInt()
        print("enter your age  :")
        age= readLine()!!.toInt()
    }
    fun put(){
        println("name : ${nam}")
        println("roll : ${rol}")
        println("age  : ${age}")
}
}
fun main() {
    var i:Int= 1
    print("Enter no of students :")
    var n:Int= readLine()!!.toInt()
    var b = Array(n) {stu()}
    for (stu in b){
        stu.get()
    }
    for(stu in b){
        println("\n\n ${i}")
        stu.put()
        i++
    }
}

  