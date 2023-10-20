import java.util.Scanner
val p = Scanner(System.`in`)

 class stud {
    var rol:Int =0
    var age:Int = 0
    var nam:String = ""
    fun get(){
        print("enter your name :")
        nam=p.nextLine()
        print("enter your roll :")
        rol=p.nextInt()
        print("enter your age  :")
        age=p.nextInt()
    }
    fun put(){
        println("name : ${nam}")
        println("roll : ${rol}")
        print("age  : ${age}")
}
}
fun main() {
    val b = stud()
    b.get()
    b.put()
}

  