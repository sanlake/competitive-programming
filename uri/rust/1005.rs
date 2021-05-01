fn get_float() -> f64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<f64>().unwrap()
}

fn main() {
    let a = get_float();
    let b = get_float();
    println!("MEDIA = {:.5}", (3.5*a+7.5*b)/11.0);
}
