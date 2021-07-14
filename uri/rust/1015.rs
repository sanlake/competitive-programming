fn get_float_vec() -> Vec<f64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<f64>().unwrap()).collect()
}

fn main() {
    let (p1, p2): (Vec<f64>, Vec<f64>) = ( get_float_vec(), get_float_vec() );

    let (x1, y1): (f64, f64) = (p1[0], p1[1]);
    let (x2, y2): (f64, f64) = (p2[0], p2[1]);

    println!("{:.4}", ( (x2-x1).powf(2.0) + (y2-y1).powf(2.0) ).sqrt() );
}
