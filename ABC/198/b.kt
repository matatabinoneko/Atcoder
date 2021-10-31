fun main(args: Array<String>) {
    var s :String = readLine()!!
    s = s.trim('0')    
    for( i in 0..(s.length/2)){
        if (s[i] != s[s.length-i-1]){
            println("No")
            return
        }
    }
    print("Yes")
    return 
}
