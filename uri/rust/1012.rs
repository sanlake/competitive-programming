fn get_float_vec() -> Vec<f64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<f64>().unwrap()).collect()
}

fn main() {
    let (pi, v): (f64, Vec<f64>) = ( 3.14159, get_float_vec() );

    println!("TRIANGULO: {:.3}", (&v[0] * &v[2]) / 2.0);
    println!("CIRCULO: {:.3}", pi * &v[2].powf(2.0));
    println!("TRAPEZIO: {:.3}", (&v[0]+&v[1]) * &v[2] / 2.0);
    println!("QUADRADO: {:.3}", &v[1].powf(2.0));
    println!("RETANGULO: {:.3}", &v[0] * &v[1]);
}
