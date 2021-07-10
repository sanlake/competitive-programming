fn get_input() -> String {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer
}

fn get_float() -> f64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<f64>().unwrap()
}


fn main() {
    let (_n, s, v): (String, f64, f64) = ( get_input(), get_float(), get_float() );
    println!("TOTAL = R$ {:.2}", s+v*0.15);
}
