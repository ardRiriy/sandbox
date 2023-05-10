fn main(){
    let p:i64 = 277822;
    let q:i64 = 746927;
    // let N:i64 = p * q;
    let _lambda:i64 = lcm(p - 1, q - 1);

    // 平文
    let _m:i64 = 20031223;

}

// 多分実装できてる
fn lcm(mut n: i64,mut m: i64)-> i64{
    // n >= mであってほしいので入れ替え
    if n < m {
        let tmp: i64 = m;
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
