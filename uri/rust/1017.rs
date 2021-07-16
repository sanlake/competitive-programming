fn get_int() -> i64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<i64>().unwrap()
}

fn main() {
    let (v,t): (i64,i64) = ( get_int(), get_int() );
    println!("{:.3}", (v*t) as f64 / 12.0);
}
