fn get_int_vec() -> Vec<i64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<i64>().unwrap()).collect()
}

fn main() {
    let v: Vec<i64> = get_int_vec();
    let (a,b,c,d): (i64,i64,i64,i64) = (v[0],v[1],v[2],v[3]);

    if b>c && d>a && c+d>a+b && c*d>=0 && a%2==0 {
        println!("Valores aceitos");
    } else { 
        println!("Valores nao aceitos");
    }
}
