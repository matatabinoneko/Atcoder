
fun main(){
    var input: String? = readLine()
    var input_list:List<String> =mutableListOf();
    if( input != null){
        input_list  = input.split(".")
    }
    var x: String = input_list[0]
    println(x)
}