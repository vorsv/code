import kotlin.io.*
open class Par {
    var x: Int = 0
    constructor() {
        println("in par")
    }
}

open class Son : Par() {
    init {
        println("in son")
    }
}

class Grand : Son() {
    init {
        println("in grand")
    }
}

fun main(){
    Grand();
}