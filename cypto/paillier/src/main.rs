use rand::Rng;

fn main(){
    let p:u32 = 13;
    let q:u32 = 5;
    // let N:i64 = p * q;
    let _lambda:u32 = lcm(p - 1, q - 1);
    let n = p * q;

    // 平文
    let _m:u32= 15;

    // 乱数
    let mut rng = rand::thread_rng(); // デフォルトの乱数生成器を初期化
    let random: u32 = rng.gen();           // 整数値の乱数を生成する
    let r: u32 = random % n + 1;

    //Encrypto
    //C = (1 + N)^Mr^N \bmod N^2
    let c = ((1 + n).pow(_m) * r.pow(n)) % n.pow(2);
    println!("c = {}", c);

}

// 多分実装できてる
fn lcm(mut n: u32,mut m: u32)-> u32{
    // n >= mであってほしいので入れ替え
    if n < m {
        let tmp: u32 = m;
        m = n;
        n = tmp;
    }

    // 互除法の実装
    loop {
        let remainder = n % m;
        if  remainder == 0 {
            break;
        }else{
            n = m;
            m = remainder;
        }
    }
    m
}
