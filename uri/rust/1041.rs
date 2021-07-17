fn get_float_vec() -> Vec<f64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<f64>().unwrap()).collect()
}

fn main() {
    let v: Vec<f64> = get_float_vec();

    let (x,y): (f64,f64) = (v[0],v[1]);

    if x==0.0 && y!=0.0 {
        println!("Eixo Y");
	} else if y==0.0 && x!=0.0 { 
        println!("Eixo X");
	} else if x>0.0 && y>0.0 { 
        println!("Q1");
	} else if x>0.0 && y<0.0 { 
        println!("Q4");
	} else if x<0.0 && y>0.0 { 
        println!("Q2");
	} else if x<0.0 && y<0.0 { 
        println!("Q3");
    } else {
        println!("Origem");
    }
}
