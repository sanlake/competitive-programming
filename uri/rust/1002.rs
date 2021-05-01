fn get_float() -> f64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<f64>().unwrap()
}

fn main() {
    let n = get_float();
    let pi: f64 = 3.14159;
    println!("A={:.4}", pi*n*n);
}
