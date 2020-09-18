fun hello(name: String): String{
  val myName = name
  
  if (myName.equals("")){
      println("Hello World!")      
  } else {
      println("Hello $myName!")
  }
  return myName   
}

fun main() {  
    hello("jundana")
}