fn get_float_vec() -> Vec<f64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<f64>().unwrap()).collect()
}

fn get_float() -> f64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<f64>().unwrap()
}

fn main() {
    let v: Vec<f64> = get_float_vec();

    let (n1,n2,n3,n4): (f64,f64,f64,f64) = (v[0],v[1],v[2],v[3]);
    let m1: f64 = (2.0*n1+3.0*n2+4.0*n3+n4)/10.0;

    println!("Media: {:.1}", m1);

    if m1 >= 7.0 {
        println!("Aluno aprovado.");
    } else if m1 < 5.0 {
        println!("Aluno reprovado.");
    } else {
        println!("Aluno em exame.");

        let n5: f64 = get_float();
        println!("Nota do exame: {:.1}", n5);

        let m2: f64 = (n5+m1)/2.0;
    
        if m2 >= 5.0 {
            println!("Aluno aprovado.");
        } else {
            println!("Aluno reprovado.");
        }

        println!("Media final: {:.1}", m2);
    }
}
