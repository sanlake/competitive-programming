fn get_int() -> i64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<i64>().unwrap()
}

fn main() {
    let (n, c): (i64, i64) = (get_int(), 3600);
    println!("{}:{}:{}", n/c, (n%c)/60, (n%c)%60);
}
