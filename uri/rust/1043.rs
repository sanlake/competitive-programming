fn get_float_vec() -> Vec<f64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<f64>().unwrap()).collect()
}

fn main() {
    let v: Vec<f64> = get_float_vec();

    let (a,b,c): (f64,f64,f64) = (v[0],v[1],v[2]);

    if (a<(b+c) && a>(b-c) && a>(c-b)) 
        || (b<(a+c) && b>(a-c) && b>(a-b)) 
            || (c<(b+a) && c>(b-a) && c>(a-b)) {
		println!("Perimetro = {:.1}", a+b+c);
    } else {
        println!("Area = {:.1}", ((a+b)*c)/2.0);
    }
}
