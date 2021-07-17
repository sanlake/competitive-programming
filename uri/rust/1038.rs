fn get_int_vec() -> Vec<usize> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<usize>().unwrap()).collect()
}

fn main() {
    let v: Vec<usize> = get_int_vec();
    let p: Vec<f64> = vec![4.0,4.5,5.0,2.0,1.5];

    let (n,q): (usize,usize) = (v[0],v[1]);

    println!("Total: R$ {:.2}", q as f64 * p[n-1]);
}
