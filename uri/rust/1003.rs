fn get_input() -> i64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<i64>().unwrap()
}

fn main() {
    let (a, b): (i64, i64) = ( get_input(), get_input() );
    println!("SOMA = {}", a+b);
}
