fn get_int() -> i64 {
    let mut buffer = String::new();
    std::io::stdin().read_line(&mut buffer).expect("Failed");
    buffer.trim().parse::<i64>().unwrap()
}

fn main() {
    let [mut nb, n]: [i64; 2] = [get_int(); 2];

    let mut c: [i64; 7] = [0; 7];
    let v: [i64; 7] = [100,50,20,10,5,2,1];

    for (i,iv) in v.iter().enumerate() {
        if nb>=*iv {
            c[i] = nb/iv;
            nb %= iv;
        }
    }

    println!("{}", n);

    for (i,j) in c.iter().zip(v.iter()) {
        println!("{} nota(s) de R$ {},00", i, j);
    }
}
