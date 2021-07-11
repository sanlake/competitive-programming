fn get_input() -> String {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer
}

fn main() {
    let input1: String = get_input();
    let split1 = input1.split_whitespace();
    let vec1: Vec<&str> = split1.collect();

    let input2: String = get_input();
    let split2 = input2.split_whitespace();
    let vec2: Vec<&str> = split2.collect();

    let q1 = &vec1[1].trim().parse::<f64>().unwrap();
    let p1 = &vec1[2].trim().parse::<f64>().unwrap();
    let q2 = &vec2[1].trim().parse::<f64>().unwrap();
    let p2 = &vec2[2].trim().parse::<f64>().unwrap();
    
    println!("VALOR A PAGAR: R$ {:.2}", q1*p1+q2*p2);
}
