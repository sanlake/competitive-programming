fn get_float() -> f64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<f64>().unwrap()
}

fn main() {
    let n: f64 = get_float();

    if n<0.0 || n>100.0 {
        println!("Fora de intervalo");
    } else if n<=25.0 {
        println!("Intervalo [0,25]");
    } else if n<=50.0 {
        println!("Intervalo (25,50]");
    } else if n<=75.0 {
        println!("Intervalo (50,75]");
    } else if n<=100.0 {
        println!("Intervalo (75,100]");
    }
}
