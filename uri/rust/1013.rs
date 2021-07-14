fn get_int_vec() -> Vec<i64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<i64>().unwrap()).collect()
}

fn main() {
    let v: Vec<i64> = get_int_vec();

    let (a,b,c): (i64, i64, i64) = (v[0], v[1], v[2]);

    let m: i64 = ( a+b+(a-b).abs() )/2;
    println!("{} eh o maior", ( m+c+(m-c).abs() )/2);
}
