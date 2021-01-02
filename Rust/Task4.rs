use std::io;

fn main(){
    let mut number = String::new();
    io::stdin().read_line(&mut number).expect("Input something valid noob!");
    let number: f64 = number.trim().parse().expect("Not a floating point number!");
    println!("{}", square(number))
}

fn square(n: f64) -> f64 {
    n*n
}