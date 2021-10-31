fun main(args: Array<String>) {
    var input : String? = readLine()
    var a:Int = 0;
    var b:Int = 0; 
    var w: Int = 0;
    if (input != null){
        var inputList: List<String> = input.split(' ')
        a = inputList[0].toInt()
        b = inputList[1].toInt()
        w = inputList[2].toInt() * 1000
    }
    val max_count : Int  = w/a
    if (b-a < (w%a)/max_count.toDouble()){
        println("UNSATISFIABLE")
    }else{
        val min_count : Int  = (w+b-1)/b
        println("%d %d".format(min_count,max_count))
    }
}
