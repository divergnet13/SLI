void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 Serial.println("Should be 6:");
 Serial.println(add(4,2));
 delay(2000);
 Serial.println("Should be 49");
 Serial.println(multiply(4,7));
 delay(2000);
 Serial.println("Should be 10");
 Serial.println(divide(100,10)); 
 delay(2000);
 Serial.println("If you favorite number is not 7, should be not my favorite");
 Serial.println(bestNumber(7));
 delay(2000);
 Serial.println(mason("Wass up Anna?"));
 delay(1000);
  
}

//write a function that adds two numbers and returns the sum
int add(int x, int y){
  int sum;
  sum = x + y;
  return sum;
}

//write a function that multiplies two integers and returns the total
int multiply(int c, int b){
  int product;
  product = c * b;
  return product;
}

//write a function that divides the first parameter by the second
int divide(int e, int r){
  int quotient;
  quotient = e / r;
  return quotient;
}

// pineapples with pinkrainbows and percabeth 4ever and potterhead + nutella = awesomness
//write a funtion that returns the string "Best number" if
// the number from the parameter matches your favorite number
String bestNumber(int myfavorite){
  
  String response;
  //complete the if statement
  if(myfavorite == 7){
    response = "Best munber in the universe!!!";
   
  }
  else{
    response = "Your wrong it's 7 #percabeth4ever";
  }
  return response;
}

//chatbot
sting mason(String message){
  
  String misha;
  if(message == "Wass up Anna?"){
    misha = "Kitty and Pokemon.";
}
else if(messange == "Do you want to watch Spiderwick?"){
  misha = "yes yes yes, you get the popcorn i'll get my blanket.");
}
else if(message = "You smell?"){
  misha = "you smell like Mason's feet!";
}
else if(message = "Hello?"){
  misha = "go away!";
}
else if(message = "No."){
  misha = "I never get alone time.";
}
else if(message = "neither do I."){
  misha = "yes you do!";
}
else if(message = "whatever."){
  misha = "whatever your face!";
}
else if(message = "Do you want a cat?"){
  misha = "Yes! You are the best big sister ever";
}
  
  


