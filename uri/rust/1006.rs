fn get_float() -> f64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<f64>().unwrap()
}

fn main() {
    let (a, b, c): (f64, f64, f64) = ( get_float(), get_float(), get_float() );
    println!("MEDIA = {:.1}", (2.0*a+3.0*b+5.0*c)/10.0);
}
