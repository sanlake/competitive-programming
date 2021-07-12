fn get_float_vec() -> Vec<f64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<f64>().unwrap()).collect()
}

fn main() {
    let vec1: Vec<f64> = get_float_vec();
    let vec2: Vec<f64> = get_float_vec();

    println!("VALOR A PAGAR: R$ {:.2}", &vec1[1] * &vec1[2] + &vec2[1] * &vec2[2]);
}
