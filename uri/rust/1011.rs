fn get_float() -> f64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<f64>().unwrap()
}

fn main() {
    let r: f64 = get_float();
    let pi: f64 = 3.14159;
    println!("VOLUME = {:.3}", (4.0/3.0) * pi * r.powf(3.0));
}
