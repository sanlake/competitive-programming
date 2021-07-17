fn get_int() -> i64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<i64>().unwrap()
}

fn main() {
    let (d, c): (i64, i64) = (get_int(), 365);
    
    println!("{} ano(s)", d/c);
    println!("{} mes(es)", (d%c)/30);
    println!("{} dia(s)", (d%c)%30);
}
