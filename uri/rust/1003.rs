fn get_input() -> i64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<i64>().unwrap()
}

fn main() {
    let a = get_input();
    let b = get_input();
    println!("SOMA = {}", a+b);
}
