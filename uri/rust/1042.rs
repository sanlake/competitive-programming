fn get_int_vec() -> Vec<i64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<i64>().unwrap()).collect()
}

fn main() {
    let vo: Vec<i64> = get_int_vec();
    let mut vs: Vec<i64> = vo.clone();

    vs.sort();

    for n in vs.iter() { println!("{}", n); }
    
    println!("");

    for n in vo.iter() { println!("{}", n); }
}
