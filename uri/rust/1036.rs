fn get_float_vec() -> Vec<f64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<f64>().unwrap()).collect()
}

fn main() {
    let v: Vec<f64> = get_float_vec();
    let dt: f64 = (v[1].powf(2.0))-(4.0*v[0]*v[2]);

    if v[0] == 0.0 || dt < 0.0 {
        println!("Impossivel calcular");
    } else {
        println!("R1 = {:.5}", (-v[1]+dt.sqrt())/(2.0*v[0]) );
        println!("R2 = {:.5}", (-v[1]-dt.sqrt())/(2.0*v[0]) );
    }
}
