fn get_int() -> i64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<i64>().unwrap()
}

fn get_float() -> f64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<f64>().unwrap()
}


fn main() {
    let (n, h, p): (i64, f64, f64) = ( get_int(), get_float(), get_float() );
    println!("NUMBER = {}\nSALARY = U$ {:.2}", n, h*p);
}
