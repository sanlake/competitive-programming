fn get_int_vec() -> Vec<i64> {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    let split = buffer.split_whitespace();
    let vec: Vec<&str> = split.collect();
    vec.iter().map(|x| x.trim().parse::<i64>().unwrap()).collect()
}

fn main() {
    loop {
        let v: Vec<i64> = get_int_vec();
        let (mut a,mut b,mut s): (i64,i64,i64) = (v[0],v[1],0); 

        if a*b <= 0 { break; }

        if a > b { a ^= b; b ^= a; a ^= b; }

        for n in a..=b { 
            print!("{} ", n);
            s+=n; 
        }

        println!("Sum={}", s);
    }
}
