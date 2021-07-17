fn get_float() -> f64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<f64>().unwrap()
}

fn main() {
    let n: f64 = get_float();

    let mut c: [i64; 6] = [0; 6];
    let mut m: [i64; 6] = [0; 6];

    let vc: [i64; 6] = [100,50,20,10,5,2];
    let vm: [f64; 6] = [1.0,0.5,0.25,0.1,0.05,0.01];
    
    let mut nx: i64 = n as i64;

    for (i,iv) in vc.iter().enumerate() {
        if nx>=*iv {
            c[i] = nx/iv;
            nx %= iv;
        }
    }

    let mut ny: i64 = ((n - (n as i64) as f64 + nx as f64) * 100.0) as i64;
    let mut aux: i64;

    for (i,iv) in vm.iter().enumerate() {
        
        aux = (iv*100.0) as i64;
        
        if ny >= aux {
            m[i] = (ny as f64/aux as f64) as i64;
            ny %= aux;
        }
    }   

    println!("NOTAS:");

    for (i,j) in c.iter().zip(vc.iter()) {
        println!("{} nota(s) de R$ {}.00", i, j);
    }
    
    println!("MOEDAS:");

    for (i,j) in m.iter().zip(vm.iter()) {
        println!("{} moeda(s) de R$ {:.2}", i, j);
    }
}
